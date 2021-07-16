#include "SinglyLink.h"
#include "DoublyLink.h"

int main(void)
{
	SinglyLink * p = CreateSinglyLink(5);

	InputAllSinglyLink(p);

	PrintSinglyLink(p);

	DeleteSinglyLink(p, 0);
	DeleteSinglyLink(p, 0);
	DeleteSinglyLink(p, 0);
	DeleteSinglyLink(p, 0);
	DeleteSinglyLink(p, 0);

	return 0;
}