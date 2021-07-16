#ifndef MY_STD_SIN_LINK
	#define MY_STD_SIN_LINK
	#include <stdio.h>
	#include <stdlib.h>
#endif

typedef struct S_Link
{
	int node;
	struct S_Link * LinkNext;
}SinglyLink;

SinglyLink * __CreateSinglyLink()
{
	return (SinglyLink *)malloc(sizeof(SinglyLink));
}

SinglyLink * CreateSinglyLink(int need)
{
	SinglyLink * pNext = __CreateSinglyLink();
	SinglyLink * p = pNext;

	for (int i = 1; i < need; ++i, pNext = pNext -> LinkNext)
	{
		pNext -> LinkNext = __CreateSinglyLink();
		pNext -> LinkNext -> LinkNext = NULL;
	}

	return p;
}

SinglyLink * FindSinglyLink(SinglyLink * p, int targer)
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

SinglyLink * MoveSinglyLink(SinglyLink * p, int targer)
{
	for (int i = 0; i < targer; ++i)
	{
		p = p -> LinkNext;
	}
	return p;
}

void InsertSinglyLink(SinglyLink * p, int targer, int _node) //"targer" starts from 0, "targerָ" can belong to [0,len(SinglyLink)).
{
	p = MoveSinglyLink(p, targer);
	SinglyLink * pNext = p -> LinkNext;

	SinglyLink * pTar = (SinglyLink *)malloc(sizeof(SinglyLink));
	pTar -> node = _node;
	pTar -> LinkNext = pNext;

	p -> LinkNext = pTar;
}

void DeleteSinglyLink(SinglyLink * p, int targer)
{
	p = MoveSinglyLink(p, targer);
	SinglyLink * pNext = p -> LinkNext -> LinkNext;
	free(p);
	p -> LinkNext = pNext;
}

void DeleteAllSinglyLink(SinglyLink * p)
{
	for (SinglyLink * pNext = p -> LinkNext; pNext != NULL;)
	{
		DeleteSinglyLink(p, 0);
	}
	//OR it can be changed into THIS.
	
}

void PrintSinglyLink(SinglyLink *p)
{
	for (int i = 0; p != NULL; ++i, p = p->LinkNext)
	{
		printf("SinglyLink[%d]: %d\n", i, p -> node);
	}
}

void PrintAllSinglyLink(SinglyLink *p)
{
}

void InpuSinglyLinkt(SinglyLink *p, int targer)
{
	p = MoveSinglyLink(p, targer);
	printf("Please input: ");
	scanf("%d", &(p -> node));
}

void InputAllSinglyLink(SinglyLink *p)
{
	for (unsigned int i = 0; p != NULL; ++i, p = p -> LinkNext)
	{
		printf("Please input SinglyLink[%d]: ", i);
		scanf("%d", &(p -> node));
	}
}

int LengthSinglyLink(SinglyLink * p)
{
	unsigned int count = 0;

	while (p != NULL)
	{
		p = p -> LinkNext;
		++count;
	}

	return count;
}