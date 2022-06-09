/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_adress
*/

#include "../include/my_printf.h"

int my_putnbr_base_long(unsigned long nbr, char *base)
{
    int diviseur;
    int result;
    int len_base = my_strlen(base);

    diviseur = 1;
    while ((nbr / diviseur) >= len_base)
        diviseur = diviseur * len_base;
    while (diviseur > 0) {
        result = (nbr / diviseur) % len_base;
        my_putchar(base[result]);
        diviseur = diviseur / len_base;
    }
}

int my_put_nbr_u(unsigned long nb)
{
    if (nb >= 10)
        my_put_nbr (nb / 10);
    my_putchar (nb %10 + 48);
}

int putnbr_in_octal(int dec)
{
    int nbr = 0;
    int i = 1;

    while (dec != 0) {
        nbr += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return (nbr);
}

void my_put_octal_format(int nbr)
{
    int count = 1;

    my_putchar('\\');
    while (nbr * count < 0100) {
        my_putchar('0');
        count *= 010;
    }
    my_put_nbr(nbr);
}

char no_ascii(unsigned char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] >= 127)
            my_put_octal_format(putnbr_in_octal(str[i]));
        else
            my_putchar(str[i]);
    }
    return (0);
}
