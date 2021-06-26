#ifndef MY_STD_SIN
	#define MY_STD_SIN
	#include <stdio.h>
	#include <stdlib.h>
#endif

typedef struct SingleLink{
	int node;
	struct SingleLink * LinkNext;
}S_LinkP;

inline S_LinkP * __CreateS_Link()
{
	return (S_LinkP *)malloc(sizeof(S_LinkP));
}

S_LinkP * CreateS_Link(int need)
{
	S_LinkP * p = __CreateS_Link();

	for(int i = 1; i < need; ++i,p = p ->LinkNext)
	{
		p -> LinkNext = __CreateS_Link();
		p -> LinkNext -> LinkNext = NULL;
	}

	return p;
}

S_LinkP * FindS_Link(S_LinkP * p, int targer)
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

S_LinkP * MoveS_Link(S_LinkP * p, int targer)
{
	for (int i = 0; i < targer; ++i)
	{
		p = p -> LinkNext;
	}
	return p;
}

void InsertS_Link(S_LinkP * p, int targer, int _node)		//在targer后面插入，targer指偏移量，从[0,len(S_LinkP))
{
	p = MoveS_Link(p, targer);
	S_LinkP * pNext = p -> LinkNext;
	
	S_LinkP * pTar = (S_LinkP *)malloc(sizeof(S_LinkP));
	pTar -> node = _node;
	pTar -> LinkNext = pNext;
	
	p -> LinkNext = pTar;
}

void DeleteS_Link(S_LinkP * p, int targer)
{
	p = MoveS_Link(p, targer);
	S_LinkP * pNext = p -> LinkNext -> LinkNext;
	free(p);
	p -> LinkNext = pNext;
}

void DeleteAllS_Link(S_LinkP * p)
{
	for (S_LinkP * pNext = p -> LinkNext; pNext != NULL; )
	{
		DeleteS_Link(p, 0);
	}
}

void PrintS_Link(S_LinkP * p)
{
	for (int i = 0; p -> LinkNext != NULL; ++i, p = p -> LinkNext)
	{
		printf("S_Link[i]: %d\n", p -> node);
	}
}