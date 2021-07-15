#ifndef MY_STD_SIN
	#define MY_STD_SIN
	#include <stdio.h>
	#include <stdlib.h>
#endif

typedef struct SingleLink
{
	int node;
	struct SingleLink * LinkNext;
}S_Link;

S_Link * __CreateS_Link()
{
	return (S_Link *)malloc(sizeof(S_Link));
}

S_Link * CreateS_Link(int need)
{
	S_Link * pNext = __CreateS_Link();
	S_Link * p = pNext;

	for (int i = 1; i < need; ++i, pNext = pNext->LinkNext)
	{
		pNext -> LinkNext = __CreateS_Link();
		pNext -> LinkNext -> LinkNext = NULL;
	}

	return p;
}

S_Link * FindS_Link(S_Link * p, int targer)
{
	while ((p -> LinkNext != NULL) && (p -> node != targer))
	{
		p = p -> LinkNext;
	}

	if (p -> LinkNext == NULL)
	{
		return NULL;
	}
	return p;
}

S_Link * MoveS_Link(S_Link * p, int targer)
{
	for (int i = 0; i < targer; ++i)
	{
		p = p -> LinkNext;
	}
	return p;
}

void InsertS_Link(S_Link * p, int targer, int _node) //"targer" starts from 0, "targerָ" can belong to [0,len(S_Link)).
{
	p = MoveS_Link(p, targer);
	S_Link * pNext = p -> LinkNext;

	S_Link * pTar = (S_Link *)malloc(sizeof(S_Link));
	pTar -> node = _node;
	pTar -> LinkNext = pNext;

	p -> LinkNext = pTar;
}

void DeleteS_Link(S_Link * p, int targer)
{
	p = MoveS_Link(p, targer);
	S_Link * pNext = p -> LinkNext -> LinkNext;
	free(p);
	p -> LinkNext = pNext;
}

void DeleteAllS_Link(S_Link * p)
{
	for (S_Link * pNext = p -> LinkNext; pNext != NULL;)
	{
		DeleteS_Link(p, 0);
	}
	//OR it can be changed into THIS.
	
}

void PrintS_Link(S_Link *p)
{
	for (int i = 0; p != NULL; ++i, p = p->LinkNext)
	{
		printf("S_Link[%d]: %d\n", i, p -> node);
	}
}

void PrintAllS_Link(S_Link *p)
{
}

void InpuS_Linkt(S_Link *p, int targer)
{
	p = MoveS_Link(p, targer);
	printf("Please input: ");
	scanf("%d", &(p -> node));
}

void InputAllS_Link(S_Link *p)
{
	for (unsigned int i = 0; p != NULL; ++i, p = p -> LinkNext)
	{
		printf("Please input S_Link[%d]: ", i);
		scanf("%d", &(p -> node));
	}
}

int LengthS_Link(S_Link * p)
{
	unsigned int count = 0;

	while (p != NULL)
	{
		p = p -> LinkNext;
		++count;
	}

	return count;
}