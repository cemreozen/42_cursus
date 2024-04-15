#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	
	if (s1 == NULL || s2 == NULL)
		return (0);
	a = (const unsigned char *) s1;
	b = (const unsigned char *) s2;
	while (n--)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}