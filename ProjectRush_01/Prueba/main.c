#include <unistd.h>
#include <stdio.h>

int main(int count, char **values)
{
	char x;
	
	x = values[1][2];
	printf("%d\n", count);
	write(1, &x, 1);
}