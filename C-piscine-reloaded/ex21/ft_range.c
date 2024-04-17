#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array_of_ints;
	size_t	range;
	int	i;

	range = max - min;
	if (range < 0)
		return (NULL);
	array_of_ints = (int *)malloc(range * sizeof(int));
	if (array_of_ints == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		array_of_ints[i] = min;
		i++;
		min++;
	}
	return (array_of_ints);
}

/*
int	main(void)
{
	int	*array;

	array = ft_range(0,10);
	free(array);
	return (0);
}
*/
