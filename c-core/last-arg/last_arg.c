#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		int i;
	
		i = 0;
		argc -= 1;
		while (argv[argc][i])
		{
			write(1, &argv[argc][i++], 1);
		}
		write(1, "\n", 1);
	}
	else
	write(1, "wrong number of arguments\n", 26);
	return (0);
}