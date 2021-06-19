#ifndef MY_STD_SIN
	#define MY_STD_SIN
	#include <stdlib.h>
#endif

typedef struct SingleLink{
	int node;
	struct SingleLink * LinkNext;
}S_LinkP;

inline S_LinkP * __S_LinkCreate()
{
	return (S_LinkP *)malloc(sizeof(S_LinkP));
}

S_LinkP * S_LinkCreate(int need)
{
	S_LinkP * p = __S_LinkCreate();

	for(int i = 1; i < need; ++i)
	{
		p -> LinkNext = __S_LinkCreate();
		p -> LinkNext -> LinkNext = NULL;
	}

	return p;
}

S_LinkP * S_LinkFind(S_LinkP * p, int targer)
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

S_LinkP * S_LinkMove(S_LinkP * p, int targer)
{
	for (int i = 0; i < targer; ++i)
	{
		p = p -> LinkNext;
	}
	return p;
}

void S_LinkInsert(S_LinkP * p, int targer, int _node)		//在targer后面插入，targer指偏移量，从[0,len(S_LinkP))
{
	p = S_LinkMove(p, targer);
	S_LinkP * pNext = p -> LinkNext;
	
	S_LinkP * pTar = (S_LinkP *)malloc(sizeof(S_LinkP));
	pTar -> node = _node;
	pTar -> LinkNext = pNext;
	
	p -> LinkNext = pTar;
}

void S_LinkDelete(S_LinkP * p, int targer)
{
	p = S_LinkMove(p, targer);
	S_LinkP * pNext = p -> LinkNext -> LinkNext;
	free(p -> LinkNext);
	p -> LinkNext = pNext;
}

void S_LinkDeleteAll(S_LinkP * p)
{
	for (S_LinkP * pNext = p -> LinkNext; pNext != NULL; )
	{
		S_LinkDelete(p, 0);
	}
}

void S_LinkPrint(S_Link * p)
{
	for (int i = 0; p -> LinkNext != NULL; ++i, p = p -> LinkNext)
	{
		printf("S_Link[i]: %d\n", p -> node);
	}
}