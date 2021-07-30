#include "SinglyLink.h"
#include "DoublyLink.h"

int main(void)
{
	unsigned int n = 0;

	printf("Please input length: ");
	scanf("%d",&n);

	SinglyLink * const p = CreateSinglyLink(n);
	InputAllSinglyLink(p);
	PrintAllSinglyLink(p);
	printf("Link length: %d\n", LengthSinglyLink(p));
	
	InsertSinglyLink(p, 3, 54);
	printf("Link length: %d\n", LengthSinglyLink(p));
	PrintAllSinglyLink(p);

	//DeleteSinglyLink(FindSinglyLink(p, 12345), 0);	//FindSinglyLink() is error!!!
	printf("Link length: %d\n", LengthSinglyLink(p));
	PrintAllSinglyLink(p);

	DeleteAllSinglyLink(p);

	return 0;
}