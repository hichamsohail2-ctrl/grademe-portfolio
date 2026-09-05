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
	(void)argv;
	if (argc > 1)
	{
		argc -= 1;
		ft_putnbr(argc);
		ft_putchar('\n');
	}
	
	else
	write(1, "0\n", 2);
	return (0);
}
