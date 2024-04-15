#include <limits.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
    unsigned char	*ptr;
    ptr = (unsigned char *)s;

    while (n > 0)
    {
        *ptr = 0;
        ptr++;
        n--;
    }
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if ((count != 0 || size != 0) && count * size <= INT_MAX)
	{
		ptr = malloc(count * size);
		if (ptr == NULL)
			return (NULL);
		ft_bzero(ptr, count * size);
		return (ptr);
	}
	return (NULL);

}
