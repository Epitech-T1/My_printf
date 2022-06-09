/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_printf
*/

#include "../include/my_printf.h"

char *my_strdup(char const *src)
{
    int i;
    char *str2;
    int j = 0;

    if (src == NULL)
        return (NULL);
    i = my_strlen(src);
    str2 = malloc(sizeof(char) * i + 1);

    while (src[j] != '\0') {
        str2[j] = src[j];
        j++;
    }
    str2[j] = '\0';
    return (str2);
}

int my_printf_seconde(const char next_flags, va_list ap)
{
    void (*ptr[]) (va_list) = {my_printf_char, my_printf_string,
    my_printf_number, my_printf_number, my_printf_ungd_number,
    my_printf_modulo, my_printf_octal, my_printf_hexa, my_printf_hexa_maj, my_printf_binary,
    my_printf_pointer, my_printf_noascii};
    char flags[] = "csdiu%oxXbpS";

    for (int i = 0; flags[i] != '\0' ; i++)
        if (flags[i] == next_flags)
            (ptr[i])(ap);
}

int my_printf(char *str, ...)
{
    va_list ap;
    char *str2 = my_strdup(str);

    va_start(ap, str);
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '%') {
            my_printf_seconde(str2[i + 1], ap);
            i += 1;
        } else
            my_putchar(str2[i]);
    }
    va_end(ap);
}
