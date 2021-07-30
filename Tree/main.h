#include "BinaryTree.h"

typedef struct binarytree BinaryTree;

BinaryTree * __CreateBinaryTree();
BinaryTree * CreateBinaryTree(int);

void InsertBinaryTree(BinaryTree *, int, int);
void DeleteBinaryTree(BinaryTree *, int);
void DeleteBinaryTreeAll(BinaryTree *);

int GetBinaryTreeData(BinaryTree *, int);
void PrintBinaryTreeAll(BinaryTree *);