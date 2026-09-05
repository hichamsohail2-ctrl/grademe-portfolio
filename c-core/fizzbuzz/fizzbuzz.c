#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
    long nb;

    nb = nbr;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
    ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        write(1, "FizzBuzz\n", 9);
        else if (i % 3 == 0)
        write(1, "Fizz\n", 5);
        else if (i % 5 == 0)
        write(1, "Buzz\n", 5);
        else
        {
        ft_putnbr(i);
        ft_putchar('\n');
        }
        i++;
    }
	return (0);
}