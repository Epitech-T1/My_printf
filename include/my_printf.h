/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_printf
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_putnbr_base(int nbr, char *base);
int my_putnbr_base_long(unsigned long nbr, char *base);
void my_printf_char(va_list ap);
int my_printf_string(va_list ap);
int my_printf_number(va_list ap);
void my_printf_modulo(va_list ap);
int my_printf_octal(va_list ap);
int my_printf_hexa(va_list ap);
int my_printf_hexa_maj(va_list ap);
int my_printf_binary(va_list ap);
int my_printf(char *str, ...);
int my_printf_pointer(va_list ap);
int my_put_nbr_u(unsigned long nb);
int my_printf_ungd_number(va_list ap);
int convert_in_octal(int dec);
void my_put_octal_format(int nbr);
char no_ascii(unsigned char *str);
int my_printf_noascii(va_list ap);

#endif /* !MY_PRINTF_H_ */
