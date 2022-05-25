#include <unistd.h>

int	main(void)
{
	char	lwr;
	char	upr;

	lwr = 'z';
	upr = 'Y';
	while(upr >= 'A')
	{
		write(1, &lwr, 1);
		write(1, &upr, 1);
		lwr -= 2;
		upr -= 2;
	}
	write(1, "\n", 1);
	return(0);
}
