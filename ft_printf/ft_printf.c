#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>
#include "ft_printf_utils.h"

int ft_printf(const char *format, ...) {

	char *to_print;
	int sum;
//	to_print = (char *) malloc(100 * sizeof(char));

	va_list arg;
	va_start(arg, format);
	sum = 0;
	while (*format != '\0') {
		if (*format == '%')
			sum += print_format(*(++format), arg);
		else
			sum += write(1, format, 1);
		format++;
	}
	va_end(arg);
	return (sum);
}

int	print_format(char format_specifier, va_list arg){
	int counter;

	counter = 0;
	return counter;
		if (format_specifier == 'c') {
			print_char(va_arg(arg, char))
			//single character
		}
		if (format_specifier == 's') {
			ft_putstring();
			//prints a string
		}
		if (format_specifier == d) {
			//prints a decimal number
		}
		if (format_specifier == i) {
			//prints a base 10 integer
		}
		if (format_specifier == 'u') {
			//unsigned base 10 number
		}
		if (format_specifier == 'x') {
			to_print = hexconvert();
			//hex lowercase
		}
		if (format_specifier == 'X') {
			//hex upper
		}
		if (format_specifier == %){
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
