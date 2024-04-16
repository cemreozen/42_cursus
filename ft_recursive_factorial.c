#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result *= ft_recursive_factorial(nb - 1);
		return (result);
	}
	return (0);
}

/*
int	main(void)
{
	printf("%i\n",ft_recursive_factorial(0));
	return (0);
}
*/
