#include <malloc.h>

typedef struct _BinaryTree
{
	int data;
	struct _BinaryTree * parent;
	struct _BinaryTree * leftchild;
	struct _BinaryTree * rightchild;
}BinaryTree;

BinaryTree * __CreateBinaryTree(void);
BinaryTree * CreateBinaryTree(int need);

void InsertBinaryTree(BinaryTree * pTree, int target ,int node);
void DeleteBinaryTree(BinaryTree * pTree, int target);
void DeleteAllBinaryTree(BinaryTree * pTree);

int GetDataBinaryTree(BinaryTree * pTree, int target);
void PrintAllBinaryTree(BinaryTree * pTree);



BinaryTree * __CreateBinaryTree(void)
{
	return (BinaryTree *)malloc(sizeof(BinaryTree));
}

BinaryTree * CreateBinaryTree(int need)
{
	BinaryTree * pTree = __CreateBinaryTree();
	BinaryTree * p = pTree;

	for (int  i = 1; i < need; ++i)
	{
		;
	}
	
	return p;
}