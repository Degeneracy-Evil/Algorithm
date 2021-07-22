#include "SinglyLink.h"
#include "DoublyLink.h"

int main(void)
{
	unsigned int n;
	printf("Please input length: ");
	scanf("%d",&n);

	SinglyLink * p = CreateSinglyLink(n);

	InputAllSinglyLink(p);

	PrintAllSinglyLink(p);

	DeleteAllSinglyLink(p);

	return 0;
}