#include "SinglyLink.h"

struct _SinglyLink
{
	int node;
	struct _SinglyLink * LinkNext;
};
typedef struct _SinglyLink SinglyLink;

SinglyLink * __CreateSinglyLink(void)
{
	return (SinglyLink *)malloc(sizeof(SinglyLink));
}

SinglyLink * CreateSinglyLink(const int need)
{
	SinglyLink * pNext = __CreateSinglyLink();
	assert(pNext);
	SinglyLink * p = pNext;

	for (int i = 1; i < need; ++i)
	{
		pNext -> LinkNext = __CreateSinglyLink();
		pNext -> LinkNext -> LinkNext = NULL;
		pNext = pNext -> LinkNext;
	}

	return p;
}

SinglyLink * FindSinglyLink(SinglyLink * p, const int target)
{
	while ((p -> LinkNext != NULL) && (p -> node != target))
	{
		p = p -> LinkNext;
	}

	if (p -> LinkNext == NULL)
	{
		return NULL;
	}
	return p;
}

SinglyLink * MoveSinglyLink(SinglyLink * p, const int target)	//"target" 指移动次数.
{
	if (!target)
	{
		return p;
	}
	else if (0 < target)
	{
		unsigned int i = 0;

		while (i < target)
		{
			p = p -> LinkNext;
			++i;
		}

		return p;
	}
	else
	{
		exit(-1);	//TODO
	}
}

void InsertSinglyLink(SinglyLink * p, const int target, const int data) //"target" starts from 0, "target" can belong to [0,len(SinglyLink) ).
{
	p = MoveSinglyLink(p, target);
	SinglyLink * pNext = p -> LinkNext;

	SinglyLink * pTar = (SinglyLink *)malloc(sizeof(SinglyLink));
	pTar -> node = data;
	pTar -> LinkNext = pNext;

	p -> LinkNext = pTar;
}

void DeleteSinglyLink(SinglyLink * p, const int target)
{
	if (0 == target)
	{
		SinglyLink * pNext = p -> LinkNext -> LinkNext;
		free(p);
		p = pNext;
		return;
	}
	else if (0 < target)
	{
		p = MoveSinglyLink(p, target - 1);
		SinglyLink * pNext = p -> LinkNext -> LinkNext;
		free(p -> LinkNext);
		p -> LinkNext = pNext;
	}
	else
	{
		exit(-1);	//TODO
	}
}

void DeleteAllSinglyLink(SinglyLink * p)
{
	SinglyLink * pNext = p -> LinkNext;

	while (pNext)
	{
		DeleteSinglyLink(p, 0);
        p = pNext;
        pNext = pNext -> LinkNext;
	}
}

void PrintSinglyLink(SinglyLink * p, const int target)
{
	MoveSinglyLink(p, target);
	printf("SinglyLink[%d]: %d", target, p -> node);
}

void PrintAllSinglyLink(SinglyLink * p)
{
	for (int i = 0; p != NULL; ++i, p = p->LinkNext)
	{
		printf("SinglyLink[%d]: %d\n", i, p -> node);
	}
}

void InputSinglyLink(SinglyLink * p, const int target)
{
	p = MoveSinglyLink(p, target);
	printf("Please input: ");
	scanf("%d", &(p -> node));
}

void InputAllSinglyLink(SinglyLink * p)
{
	for (unsigned int i = 0; p != NULL; ++i, p = p -> LinkNext)
	{
		printf("Please input SinglyLink[%d]: ", i);
		scanf("%d", &(p -> node));
	}
}

unsigned int LengthSinglyLink(SinglyLink * p)
{
	unsigned int count = 0;

	while (p != NULL)
	{
		p = p -> LinkNext;
		++count;
	}

	return count;
}