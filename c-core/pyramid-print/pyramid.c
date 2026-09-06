#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int sum;
    int res;

    i = 0;
    res = 0;
    sum = 1;
    while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
        while (str[i] == '-' || str[i] == '+')
        {
            if (str[i] == '-')
            sum *= -1;
            i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        res = res * 10 + (str[i++] - '0');
        return (res * sum);
}

// argv[1] is the height. Print a centered pyramid of '#', one row per line.
// A wrong argument count prints "wrong number of arguments" and a newline.
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n;
		int i;
		int j;
		int s;
	
		n = ft_atoi(argv[1]);
		i = 1;
		while (i <= n)
		{
			s = n - i;
			j = 2 * i - 1;
			while (s > 0)
			{
				write(1, " ", 1);
				s--;
			}
			while (j > 0)
			{
				write(1, "#", 1);
				j--;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
	write(1, "wrong number of arguments\n", 26);
	return (0);
}
