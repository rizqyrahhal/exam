#include "do_op.h"

int main(int argc, char *argv[])
{
	int		number1;
	int		number2;
	int		result;
	char	operateur;

	if (argc == 4)
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[3]);
		operateur = argv[2][0];
		if (operateur == '+')
			result = number1 + number2;
		if (operateur == '-')
			result = number1 - number2;
		if (operateur == '*')
			result = number1 * number2;
		if (operateur == '%')
			result = number1 % number2;
		if (operateur == '/')
			result = number1 / number2;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
