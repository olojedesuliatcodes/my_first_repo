#include <stdio.h>
int main()
{
	char name[31];
	printf("what is your name:");
	scanf("%s", &name);
	printf("Hello %s!\n" , name);

	return 0;
}
