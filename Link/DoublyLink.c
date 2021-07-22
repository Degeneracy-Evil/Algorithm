#include "DoublyLink.h"

struct _DoublyLink
{
	struct _DoublyLink * LinkLast;
	int node;
	struct _DoublyLink * LinkNext;
};
typedef struct _DoublyLink DoublyLink;

DoublyLink * __CreateDoublyLink(void)
{
	return (DoublyLink *)malloc(sizeof(DoublyLink));
}

DoublyLink * CreateDoublyLink(const int need)
{
	DoublyLink * pNext = __CreateDoublyLink();
	assert(pNext);
	DoublyLink * p = pNext;
	p -> LinkLast = p;

	for (int i = 1; i < need; ++i)
	{
		p -> LinkNext = __CreateDoublyLink();
		p -> LinkLast = p;
		p -> LinkNext -> LinkNext = NULL;
		pNext = pNext -> LinkNext;
	}

	return p;
}

DoublyLink * FindDoublyLink(DoublyLink * p, const int targer)
{
}

void InsertDoublyLink(DoublyLink * p, const int targer)
{
}

void DeleteDoublyLink(DoublyLink * p, const int targer)
{
}

void DeleteAllDoublyLink(DoublyLink * p)
{
}