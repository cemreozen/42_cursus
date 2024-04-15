#include <stddef.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	n_len = 0;
	while (needle[needle_len] != '\0')
		needle_len++;
	if (needle[0] == '\0')
			return ((char *)haystack);
	if (needle_len > len)
		return (NULL);
	i = 0;
	while (len > 0 && haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && 
				len > 0 && j < needle_len)
		{
			len--;
			j++;
		}
		if (j == needle_len)
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (NULL);
}