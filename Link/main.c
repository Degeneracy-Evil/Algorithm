#include "SingleLink.h"

int main(void)
{
	S_LinkP * p = S_LinkCreate(5);
	S_LinkPrint(p);

	S_LinkDelete(p, 0);
	S_LinkDelete(p, 0);
	S_LinkDelete(p, 0);
	S_LinkDelete(p, 0);
	S_LinkDelete(p, 0);

	return 0;
}