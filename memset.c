#include <string.h>

int main()
{
	char *test = "hello";
	memset(test,10,3);
	printf("%s",test);
}
