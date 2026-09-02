#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		argc -= 1;
		while (argc >= 1)
		{
			while (*argv[argc])
			{
				write(1, argv[argc], 1);
				(argv[argc])++;
			}
            write(1, "\n", 1);
			argc--;
		}
	}
	return (0);
}