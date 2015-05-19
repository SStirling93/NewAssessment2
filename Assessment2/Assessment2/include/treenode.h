#ifndef TreeNode_h
#define TreeNode_h

#include <cstddef>
#include "movie.h"

class TreeNode
{
    public:
        TreeNode(Movie data);
        ~TreeNode();

        Movie getKey();
        TreeNode* getLChild();
        TreeNode* getRChild();

        void setLChild(TreeNode *child);
        void setRChild(TreeNode *child);
        void setKey(Movie data);

    private:
        Movie data;
        TreeNode *lChild;
        TreeNode *rChild;
};

//#include "../src/treenode.cpp"

#endif // TreeNode_h
