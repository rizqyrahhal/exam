#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sing;
	int	res;

	sing = 1;
	res = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sing *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}

	return (res * sing);
}

int main(void)
{
	char	*str;

	str = "    		\n  +54";
	printf("%d\n", ft_atoi(str));
	return (0);
}
