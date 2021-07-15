#ifndef MY_STD_DOU
	#define MY_STD_DOU
	#include <stdlib.h>
#endif

typedef struct DoubleLink
{
	struct DoubleLink * LinkLast;
	int node;
	struct DoubleLink * LinkNext;
} D_Link;

D_Link * __CreateD_Link()
{
	return (D_Link *)malloc(sizeof(D_Link));
}

D_Link * CreateD_Link(int need)
{
	D_Link *p = __CreateD_Link();

	for (int i = 1; i < need; ++i)
	{
		p -> LinkNext = __CreateD_Link();
		p -> LinkNext -> LinkNext = NULL;
	}

	return p;
}

LinkP * FindD_Link(int targer)
{
	return;
}

void InsertD_Link(int targer)
{
}

void DeleteD_Link(int targer)
{
}

void DeleteAllD_Link(D_Link * p)
{
}