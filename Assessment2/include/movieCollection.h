#ifndef MovieCollection_h
#define MovieCollection_h

#include <iostream>
#include "movie.h"
#include "treenode.h"

using namespace std;

class movieCollection
{
    public:
        movieCollection();
        ~movieCollection();
        bool search(Movie key);
        void insert(Movie key);
        void erase(Movie key);
        void clear();
        void preOrderTraversal();
        void inOrderTraversal();
        void postOrderTraversal();
        int size();

    private:
        bool search(TreeNode *tree, Movie key);
        void insert(TreeNode *tree, Movie key);
        void clear(TreeNode *tree);
        void inOrderTraversal(TreeNode *tree);
        void preOrderTraversal(TreeNode *tree);
        void postOrderTraversal(TreeNode *tree);
        TreeNode *movies;
        int numElements;
};

#endif // MovieCollection_h
