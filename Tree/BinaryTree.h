<<<<<<< HEAD
typedef struct binarytree
{
	int data;
	struct binarytree * parent;
	struct binarytree * leftchild;
	struct binarytree * rightchild;
}BinaryTree;

BinaryTree * __CreateBinaryTree();
=======
#include <malloc.h>

typedef struct _BinaryTree
{
	int data;
	struct _BinaryTree * parent;
	struct _BinaryTree * leftchild;
	struct _BinaryTree * rightchild;
}BinaryTree;

BinaryTree * __CreateBinaryTree(void);
>>>>>>> 4e5f0640b1d6a43dd292a485a76fe224e98f5b2a
BinaryTree * CreateBinaryTree(int need);

void InsertBinaryTree(BinaryTree * pTree, int target ,int node);
void DeleteBinaryTree(BinaryTree * pTree, int target);
<<<<<<< HEAD
void DeleteBinaryTreeAll(BinaryTree * pTree);

int GetBinaryTreeData(BinaryTree * pTree, int target);
void PrintBinaryTreeAll(BinaryTree * pTree);

=======
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
>>>>>>> 4e5f0640b1d6a43dd292a485a76fe224e98f5b2a
