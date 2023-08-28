#include <stdio.h>

int ft_atoi(const char *str)
{
	int sign;
	int result;
	int i;

	i = 0;
	result = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - 48;
			i++;
		}
		else if (str[i] < '0' || str[i] > '9' || str[i] == ' ' )
			i++;
	}
	return (result * sign);
}

int main()
{
    char *str = "-456688   wer23";
    printf("%d", ft_atoi(str));
}