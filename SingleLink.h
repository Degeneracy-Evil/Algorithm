#ifndef MY_STD_SIN
#define MY_STD_SIN
#include <stdio.h>
#include <stdlib.h>
#endif

typedef struct SingleLink
{
	int node;
	struct SingleLink *LinkNext;
} S_LinkP;

S_LinkP *__S_LinkCreate()
{
	return (S_LinkP *)malloc(sizeof(S_LinkP));
}

S_LinkP *S_LinkCreate(int need)
{
	S_LinkP *pNext = __S_LinkCreate();
	S_LinkP *p = pNext;

	for (int i = 1; i < need; ++i, pNext = pNext->LinkNext)
	{
		pNext->LinkNext = __S_LinkCreate();
		pNext->LinkNext->LinkNext = NULL;
	}

	return p;
}

S_LinkP *S_LinkFind(S_LinkP *p, int targer)
{
	while ((p->LinkNext != NULL) && (p->node != targer))
	{
		p = p->LinkNext;
	}

	if (p->LinkNext == NULL)
	{
		return NULL;
	}
	return p;
}

S_LinkP *S_LinkMove(S_LinkP *p, int targer)
{
	for (int i = 0; i < targer; ++i)
	{
		p = p->LinkNext;
	}
	return p;
}

void S_LinkInsert(S_LinkP *p, int targer, int _node) //"targer" starts from 0, "targerָ" can belong to [0,len(S_LinkP)).
{
	p = S_LinkMove(p, targer);
	S_LinkP *pNext = p->LinkNext;

	S_LinkP *pTar = (S_LinkP *)malloc(sizeof(S_LinkP));
	pTar->node = _node;
	pTar->LinkNext = pNext;

	p->LinkNext = pTar;
}

void S_LinkDelete(S_LinkP *p, int targer)
{
	p = S_LinkMove(p, targer);
	S_LinkP *pNext = p->LinkNext->LinkNext;
	free(p);
	p->LinkNext = pNext;
}

void S_LinkDeleteAll(S_LinkP *p)
{
	for (S_LinkP *pNext = p->LinkNext; pNext != NULL;)
	{
		S_LinkDelete(p, 0);
	}
	//OR it can be changed into THIS.
	
}

void S_LinkPrint(S_LinkP *p)
{
	for (int i = 0; p != NULL; ++i, p = p->LinkNext)
	{
		printf("S_Link[%d]: %d\n", i, p->node);
	}
}

void S_LinkPrintAll(S_LinkP *p)
{
}

void S_LinkInput(S_LinkP *p, int targer)
{
	p = S_LinkMove(p, targer);
	printf("Please input: ");
	scanf("%d", &(p->node));
}

void S_LinkInputAll(S_LinkP *p)
{
	for (unsigned int i = 0; p != NULL; ++i, p = p->LinkNext)
	{
		printf("Please input S_Link[%d]: ", i);
		scanf("%d", &(p->node));
	}
}

int S_LinkLength(S_LinkP *p)
{
	unsigned int count = 0;

	while (p != NULL)
	{
		p = p->LinkNext;
		++count;
	}

	return count;
}