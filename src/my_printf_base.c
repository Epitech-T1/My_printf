/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_printf_base
*/

#include "../include/my_printf.h"

int my_printf_octal(va_list ap)
{
    return (my_putnbr_base(va_arg(ap, int), "01234567"));
}

int my_printf_hexa(va_list ap)
{
    return (my_putnbr_base(va_arg(ap, int), "0123456789abcdef"));
}

int my_printf_hexa_maj(va_list ap)
{
    return (my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF"));
}

int my_printf_binary(va_list ap)
{
    return (my_putnbr_base(va_arg(ap, int), "01"));
}
