#include <stdlib.h>
#include <stddef.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, const char *source)
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

char	*strdup(const char *s1)
{
	char	*ptr;
	size_t len;

	len = ft_strlen(s1);
	if (s1 != NULL)
	{
		ptr = malloc(len + 1);
		if (ptr == NULL)
			return (NULL);
		ft_strcpy(ptr, s1);
		return (ptr);
	}
	return (NULL);
}