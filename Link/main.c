#include "SingleLink.h"

int main(void)
{
	S_LinkP *p = CreateS_Link(5);

	InputAllS_Link(p);

	PrintS_Link(p);

	DeleteS_Link(p, 0);
	DeleteS_Link(p, 0);
	DeleteS_Link(p, 0);
	DeleteS_Link(p, 0);
	DeleteS_Link(p, 0);

	return 0;
}