#ifndef MY_STD_DOU
	#define MY_STD_DOU
	#include <stdlib.h>
#endif

typedef struct DoubleLink{
	struct DoubleLink * LinkLast;
	int node;
	struct DoubleLink * LinkNext;
}D_LinkP;

inline D_LinkP * __D_LinkCreate()
{
	return (D_LinkP *)malloc(sizeof(D_LinkP));
}

D_LinkP * D_LinkCreate(int need)
{
	D_LinkP * p = __D_LinkCreate();

	for(int i = 1; i < need; ++i)							//需修改
	{
		p -> LinkNext = __D_LinkCreate();
		p -> LinkNext -> LinkNext = NULL;
	}

	return p;
}

D_LinkP * D_LinkFind(int targer)
{
	return ;
}

void D_LinkInsert(int targer)
{
	
}

void D_LinkDelete(int targer)
{
	
}

void D_LinkDeleteAll(D_LinkP * p)
{
	
}