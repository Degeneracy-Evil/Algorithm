#ifndef MY_STD_SIN_LINK
	#define MY_STD_SIN_LINK
	#include <stdio.h>
	#include <stdlib.h>
	#include <assert.h>
#endif

typedef struct _SinglyLink SinglyLink;
struct _SinglyLink
{
	int node;
	SinglyLink * LinkNext;
};

#define SINNULL (SinglyLink *)NULL 

SinglyLink * __CreateSinglyLink(void);
SinglyLink * CreateSinglyLink(const int);
SinglyLink * FindSinglyLink(SinglyLink *, const int);
SinglyLink * MoveSinglyLink(SinglyLink *, const int);
void InsertSinglyLink(SinglyLink *, const int, const int);
void DeleteSinglyLink(SinglyLink *, const int);
void DeleteAllSinglyLink(SinglyLink *);
void PrintSinglyLink(SinglyLink *, const int);
void PrintAllSinglyLink(SinglyLink *);
void InputSinglyLink(SinglyLink *, const int);
void InputAllSinglyLink(SinglyLink *);
unsigned int LengthSinglyLink(SinglyLink *);