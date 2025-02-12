#include <stdio.h>
int main()
{
	int code;
	
	for (code = 1; code < 20; code=code+1)
	{
	printf("%i, ", code);
	}
	
	printf("%i" , code);

	return 0;
}
