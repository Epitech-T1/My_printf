/*
** EPITECH PROJECT, 2020
** delivery
** File description:
** my_put
*/

#include "../include/my_printf.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_putstr(char const *str)
{
    int z = 0;

    while (str[z] != '\0') {
        my_putchar(str[z]);
            z = z + 1;
    }
    return (0);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        my_put_nbr (nb / 10);
    my_putchar (nb %10 + 48);
}

int my_strlen(char const *str)
{
    int n = 0;

    while (str[n] != '\0')
        n++;
    return (n);
}

int my_putnbr_base(int nbr, char *base)
{
    int diviseur;
    int result;
    int len_base = my_strlen(base);

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    diviseur = 1;
    while ((nbr / diviseur) >= len_base)
        diviseur = diviseur * len_base;
    while (diviseur > 0) {
        result = (nbr / diviseur) % len_base;
        my_putchar(base[result]);
        diviseur = diviseur / len_base;
    }
}
