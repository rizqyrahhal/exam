#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int	i;

	i = -1;
	while (argv[1][++i] && argc == 2)
	{
		if (argv[1][i] >= 'a' && argv[1][i] <='z')
		{
			write(1, )
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <='z')

		else
			write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}