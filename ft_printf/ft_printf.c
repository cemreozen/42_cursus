#include "libft.h"
#include <stdarg.h>
#include <stdlib.h>


int ft_printf(const char *format, ...){

    va_list arg;
    char *to_print;
    int sum;
    int i;

    to_print = (char *)malloc(100 * sizeof (char));

    i = 0;
    sum = 0;
    while (format[i] != '\0'){
        while (format[i] != '%')
        {
            write(1, &format[i], 1);
            sum++;
        }

    }

    va_start(arg, format);
    va_arg(arg, char); //single character
    va_arg(arg, char *); //string
    va_arg(arg, int); //base 10 integer
    va_arg(arg, void); //void pointer ??
    va_arg(arg, unsigned int); // unsigned base 10 ?? long maybe?
    va_end(arg);





    return sum;
}

int main(){
    ft_printf("Testing 1 2");
    return 0;
}