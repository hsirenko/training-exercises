#include <stdio.h>

char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ' ';
	return (c);
}

int main()
{
	char c = 'MY';
	printf("%c", to_lower(c));
}