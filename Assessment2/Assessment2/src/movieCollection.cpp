#include "movieCollection.h"

movieCollection::movieCollection()
{
    this->movies = NULL;
    this->numElements = 0;
}

movieCollection::~movieCollection()
{
    this->clear();
}


bool movieCollection::search(Movie key){
    return this->search(this->movies, key);
} // end movieCollection::search(...);

void movieCollection::insert(Movie key){

    if(this->movies == NULL) {
        this->movies = new TreeNode(key);
        this->numElements++;
    } else {
        this->insert(movies, key);
    } // end if

} // end movieCollection::insert(...);

void movieCollection::erase(Movie key){
    // search for item and its parent
   TreeNode *current = this->movies;
   TreeNode *parent = NULL;
   while(current != NULL && key.getTitle() != current->getKey().getTitle()) {
      parent = current;
      if (key.getTitle() < current->getKey().getTitle()) {
         current = current->getLChild();
      } else {
         current = current->getRChild();
      }
   }

   // check for successful search
   if(current != NULL) {

      // check for case 3:  current has two children
      if(current->getLChild() != NULL && current->getRChild() != NULL) {

         // find the right-most node in the left subtree
         if(current->getLChild()->getRChild() == NULL) {  // a special case
            TreeNode *temp = current->getLChild();
            current->setKey(current->getLChild()->getKey());
            current->setLChild(current->getLChild()->getLChild());
            delete temp;
            this->numElements--;
         } else {
            TreeNode *p = current->getLChild()->getRChild();
            TreeNode *pp = current->getLChild();

            // walk right
            while(p->getRChild() != NULL) {
               pp = p;
               p = p->getRChild();
            }

            // copy the item at p to current
            Movie key = p->getKey();
            current->setKey(key);
            TreeNode *temp = p->getLChild();
            pp->setRChild(temp);
            delete p;
            this->numElements--;
         }
      } else {        // cases 1 and 2: item has no child or 1 child
         TreeNode *child;
         if(current->getLChild() != NULL) {
            child = current->getLChild();
         } else {
            child = current->getRChild();
         }

         // remove the pointer to the node
         if(current == this->movies) {
            this->movies = child;
         } else if (current == parent->getLChild()) {
            parent->setLChild(child);
         } else {
            parent->setRChild(child);
         }
         delete current;
         this->numElements--;
      }
   }
} // end movieCollection::erase(...);

void movieCollection::clear(){
    this->clear(this->movies);
    this->movies = NULL;
    this->numElements = 0;
}  // end movieCollection::clear(...);

void movieCollection::inOrderTraversal(){
    inOrderTraversal(this->movies);
} // end movieCollection::inOrderTraversal(...);

void movieCollection::preOrderTraversal(){
    preOrderTraversal(this->movies);
} // end movieCollection::preOrderTraversal(...);

void movieCollection::postOrderTraversal(){
    postOrderTraversal(this->movies);
} // end movieCollection::postOrderTraversal(...);

int movieCollection::size() {
    return this->numElements;
} // end movieCollection::size()




bool movieCollection::search(TreeNode *tree, Movie key){

    if (tree != NULL) {

            if(key.getTitle() == tree->getKey().getTitle()) {          // movie found
                return true;
            } else if(key.getTitle() < tree->getKey().getTitle()) {    // movie might be in left tree
                return this->search(tree->getLChild(), key);
            } else {                                                    // movie might be in right tree
                return this->search(tree->getRChild(), key);
            } // end if

    } else {                                                            // movie not found
        return false;
    } // end if

} // end movieCollection::search(...);

void movieCollection::insert(TreeNode *tree, Movie key){

    if(key.getTitle() < tree->getKey().getTitle()) {        // does moive belong in the left subtree

        if(tree->getLChild() == NULL) {
            tree->setLChild(new TreeNode(key));
            this->numElements++;
        } else {
            this->insert(tree->getLChild(), key);
        } // end if

    } else if(key.getTitle() > tree->getKey().getTitle()) { // does movie belong in the right subtree

        if(tree->getRChild() == NULL) {
            tree->setRChild(new TreeNode(key));
            this->numElements++;
        } else {
            this->insert(tree->getRChild(), key);
        } // end if

    } // end if

} // end movieCollection::insert(...);

void movieCollection::clear(TreeNode *tree){

    if(tree != NULL) {
      clear(tree->getLChild());
      clear(tree->getRChild());
      delete tree;
   } // end if

} // end movieCollection::clear(...);

void movieCollection::inOrderTraversal(TreeNode *tree){
    if (tree != NULL) {
      inOrderTraversal(tree->getLChild());
      cout << endl << tree->getKey().getTitle() << endl;
      inOrderTraversal(tree->getRChild());
   } // end if
} // end movieCollection::inOrderTraversal(...);
void movieCollection::preOrderTraversal(TreeNode *tree){
    if (tree != NULL) {
      cout << endl << tree->getKey().getTitle() << endl;
      preOrderTraversal(tree->getLChild());
      preOrderTraversal(tree->getRChild());
   } // end if
} // end movieCollection::preOrderTraversal(...);
void movieCollection::postOrderTraversal(TreeNode *tree){
    if (tree != NULL) {
      postOrderTraversal(tree->getLChild());
      postOrderTraversal(tree->getRChild());
      cout << endl << tree->getKey().getTitle() << endl;
   } // end if
} // end movieCollection::postOrderTraversal(...);
