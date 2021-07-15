#ifndef MY_STD_DOU
#define MY_STD_DOU
#include <stdlib.h>
#endif

typedef struct DoubleLink
{
	struct DoubleLink *LinkLast;
	int node;
	struct DoubleLink *LinkNext;
} D_LinkP;

inline D_Link *__D_LinkCreate()
{
	return (D_Link *)malloc(sizeof(D_LinkP));
}

D_Link *D_LinkCreate()(int need)
{
	D_Link *p = __D_LinkCreate();

	for (int i = 1; i < need; ++i)
	{
		p->LinkNext = __D_LinkCreate();
		p->LinkNext->LinkNext = NULL;
	}

	return p;
}

LinkP *D_LinkFind(int targer)
{
	return;
}

void D_LinkInsert(int targer)
{
}

void D_LinkDelete(int targer)
{
}

void D_LinkDeleteAll(D_LinkP *p)
{
}