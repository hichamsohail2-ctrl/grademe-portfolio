#include <unistd.h>

int	main(int argc, char **argv)
{
	
	if (argc == 2)
	{
		int i;
		int flag;
	
		flag = -1;
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == 'e')
				flag = i;
			i++;
		}
		if (flag != -1)
			write(1, "e\n", 2);
		else
			write(1, "\n", 1);
	}
	else
	write(1, "e\n", 2);
	return (0);
}

