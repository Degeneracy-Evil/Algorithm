<<<<<<< HEAD
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
=======
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
>>>>>>> 4e5f0640b1d6a43dd292a485a76fe224e98f5b2a
