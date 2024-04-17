#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int	i;

	if (src != NULL)
	{
		dest = (char *)malloc(ft_strlen(src) + 1);
		if (dest == NULL)
		{
			free(dest);
			return (NULL);
		}
		i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*string;
	char	*dest;
	
	string = "a computer that would talk to you";
	dest  = ft_strdup(string);
	printf("%s\n", ft_strdup(string));
	printf("%p\n", string);
	printf("%p\n", dest);
	free(dest);
	return (0);
}
*/
