<<<<<<< HEAD
typedef struct binarytree BinaryTree;	//重复，如何修改？
=======
#include "BinaryTree.h"

typedef struct binarytree BinaryTree;
>>>>>>> 4e5f0640b1d6a43dd292a485a76fe224e98f5b2a

BinaryTree * __CreateBinaryTree();
BinaryTree * CreateBinaryTree(int);

void InsertBinaryTree(BinaryTree *, int, int);
void DeleteBinaryTree(BinaryTree *, int);
void DeleteBinaryTreeAll(BinaryTree *);

int GetBinaryTreeData(BinaryTree *, int);
void PrintBinaryTreeAll(BinaryTree *);