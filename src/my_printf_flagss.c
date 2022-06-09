/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_printf_fbase
*/

#include "../include/my_printf.h"

void my_printf_char(va_list ap)
{
   my_putchar(va_arg(ap, int));
}

int my_printf_string(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

int my_printf_number(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

int my_printf_ungd_number(va_list ap)
{
    unsigned long nb = va_arg(ap, unsigned long);
    my_put_nbr_u(nb);
}

void my_printf_modulo(va_list ap)
{
    (my_putchar('%'));
}
