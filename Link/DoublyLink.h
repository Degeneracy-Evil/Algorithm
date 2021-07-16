#ifndef MY_STD_DOU_LINK
	#define MY_STD_DOU_LINK
	#include <stdio.h>
	#include <stdlib.h>
#endif

typedef struct D_Link
{
	struct D_Link * LinkLast;
	int node;
	struct D_Link * LinkNext;
}DoublyLink;

DoublyLink * __CreateDoublyLink()
{
	return (DoublyLink *)malloc(sizeof(DoublyLink));
}

DoublyLink * CreateDoublyLink(int need)
{
	DoublyLink *p = __CreateDoublyLink();

	for (int i = 1; i < need; ++i)
	{
		p -> LinkNext = __CreateDoublyLink();
		p -> LinkNext -> LinkNext = NULL;
	}

	return p;
}

DoublyLink * FindDoublyLink(int targer)
{
	return (DoublyLink *)NULL;
}

void InsertDoublyLink(int targer)
{
}

void DeleteDoublyLink(int targer)
{
}

void DeleteAllDoublyLink(DoublyLink * p)
{
}