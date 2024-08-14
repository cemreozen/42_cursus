#include "ft_printf_utils.h"
#include <stdlib.h>
#include "libft.h"
#include <unistd.h>

char hex_letters(int number){
	if (number >= 10 && number <= 15)
		return 'a' + (number - 10);
	return '0' + number;
}

char *string_revert(char *string, int len){
	char *temp;
	int i;

	temp = malloc((len + 1) * sizeof (char));
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (len--) {
		temp[i] = string[len];
		i++;
	}
	temp[i] = '\0';
	return temp;
}

char *hexconvert(unsigned int input){
	int i;
	char *converted_string;
	char *reverse;
	int remainder;

	converted_string = malloc(50 * sizeof (char));
	if (converted_string == NULL)
		return NULL;

	i = 0;
	if (input == 0) {
		converted_string[i++] = 0;
		converted_string[i] = '\0';
		return converted_string;
	}
	while(input != 0) {
		remainder = input % 16;
		converted_string[i++] = hex_letters(remainder);
		input /= 16;
	}
	reverse = string_revert(converted_string, ft_strlen(converted_string));
	free(converted_string);
	return (reverse);
}

void ft_putstring(char *string){
	while (string){
		write(1, &string, 1);
		string++;
	}
}

void ft_putchar(char c){
	write(1, &c, 1);
}
