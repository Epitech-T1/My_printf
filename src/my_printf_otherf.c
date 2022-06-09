/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_printf_otherf
*/

#include "../include/my_printf.h"

int my_printf_pointer(va_list ap)
{
    unsigned long addr = va_arg(ap, unsigned long);
    my_putstr("0x");
    my_putnbr_base_long(addr, "0123456789abcdef");
}

int my_printf_noascii(va_list ap)
{
    no_ascii(va_arg(ap, char *));
}
