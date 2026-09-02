#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int flag;
	
		flag = -1;
		while (*argv[1])
		{
			if (*argv[1] == 'n')
				flag = 1;
			(argv[1])++;
		}
		if (flag == 1)
			write(1, "n\n", 2);
		else
		write(1, "\n", 1);
	}
	else
	write(1, "wrong number of arguments\n", 26);
	return (0);
}
