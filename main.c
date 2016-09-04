#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("El numero de elementos es: %d\n", argc);
	int i = 0;
	for (i = 0; i < argc; ++i)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}


