#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char	*dest;
    unsigned char	*source;

    dest = (unsigned char *)dst;
    source = (unsigned char *)src;
    if (dst == NULL || src == NULL)
        return (NULL);

    while (n > 0)
        {
            *dest = *source;
            n--;
            dest++;
            source++;
        }

    return (dst);
}

int token_counter(char const *s, char c)
{
    int c_position;
    int token;
    int i;
	int	counter;

    token = 1;
    c_position = 0;
    while (s[c_position] != '\0') {
		if (s[c_position] == c && s[c_position + 1] != c) {
			token++;
		}
			c_position++;
	}
    return (token);
}

int	tokenlength(const char *s, char c, int start)
{
	int	i;
	int	token_length;

	i = start;
    token_length = 0;
	while (s[i] != c && s[i] != '\0')
    {
        token_length++;
        i++;
	}
	return (token_length);
}

char    **ft_split(char const *s, char c) {
    int token_number;
    int start;
    char **array;
    int i;
    int token_length;

    token_number = token_counter(s, c);
    printf("%i", token_number);
        array = (char **) malloc((token_number + 1) * (sizeof(char*)));
        if (array == NULL)
            return (NULL);
        i = 0;
        start = 0;
        while (i < token_number) {
            token_length = tokenlength(s, c, start);
            array[i] = (char *)malloc(token_length + 1);
            if (array[i] == NULL){
		    free(array[i]);
		    free(array);
		    return (NULL);
            }
            ft_memcpy(array[i], &s[start], token_length);
            array[i][token_length] = '\0';
            i++;
            start += token_length + 1;
        }
        array[i] = NULL;
        return (array);
}

int main(void)
{
    const char  s[] = "baba bubu cen";
    int i;
    char **array;

    array = ft_split(s, ' ');
    i = 0;
    while (array[i] != NULL)
    {
        printf("%s", array[i]);
        printf("\n");
        i++;
    }
    printf("%p", array[i]);
    free(array[i]);
    free(array);
    return (0);
}
