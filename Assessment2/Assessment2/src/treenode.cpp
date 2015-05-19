#include "treenode.h"


TreeNode::TreeNode(Movie data) {

    this->data = data;
    this->lChild = NULL;
    this->rChild = NULL;

} // end TreeNode::TreeNode();





TreeNode::~TreeNode() {

} // end TreeNode::~TreeNode();





Movie TreeNode::getKey() {
    return this->data;
} // end TreeNode::getKey();




TreeNode* TreeNode::getLChild() {
    return this->lChild;
} // end TreeNode::getLChild();





TreeNode* TreeNode::getRChild() {
    return this->rChild;
} // end TreeNode::getRChild()





void TreeNode::setLChild(TreeNode *child) {
    this->lChild = child;
} // end TreeNode::setLChild(...);





void TreeNode::setRChild(TreeNode *child) {
    this->rChild = child;
} // end TreeNode::setRChild(...);





void TreeNode::setKey(Movie data) {
    this->data = data;
} // end TreeNode::setKey(...);
