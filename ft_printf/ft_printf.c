#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf_utils.h"

int ft_printf(const char *format, ...){

    char *to_print;
    int sum;
	int	i;
	to_print = (char *)malloc(100 * sizeof (char));

	va_list arg;
	va_start(arg, format);
	sum = 0;
	i = 0;
	while (format[i] != '\0') {
		while (format[i] != '%') {
			to_print[sum++] = format[i++];
		}
		if (format[i] == 'c') {
			//single character
		}
		if (format[i] == 's') {
			ft_putstring();
			//prints a string
		}
		if (format[i] == d) {
			//prints a decimal number
		}
		if (format[i] == i) {
			//prints a base 10 integer
		}
		if (format[i] == 'u') {
			//unsigned base 10 number
		}
		if (format[i] == 'x') {
			to_print = hexconvert();
			//hex lowercase
		}
		if (format[i] == 'X') {
			ft_toupper((int) hexconvert());
			//hex upper
		}
		if (format[i] == %){
			ft_putchar('%');
		}
	}
    va_end(arg);
    return sum;
}

int main(){
    ft_printf("Testing 1 2");
    return 0;
}