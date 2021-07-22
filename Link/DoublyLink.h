#ifndef MY_STD_DOU_LINK
	#define MY_STD_DOU_LINK
	#include <stdio.h>
	#include <stdlib.h>
	#include <assert.h>
#endif

typedef struct _DoublyLink DoublyLink;

DoublyLink * __CreateDoublyLink(void);
DoublyLink * CreateDoublyLink(const int);
DoublyLink * FindDoublyLink(DoublyLink *, const int);
void InsertDoublyLink(DoublyLink *, const int);
void DeleteDoublyLink(DoublyLink *, const int);
void DeleteAllDoublyLink(DoublyLink * p);