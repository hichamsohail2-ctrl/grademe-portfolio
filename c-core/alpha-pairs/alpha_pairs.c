#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char a;
	char b;

	a = 'a';
	b = 'B';
	while (a <= 'z' && b <= 'Z')
		{
			write(1, &a, 1);
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &b, 1);
			a += 2;
			b += 2;
		}
		write(1, "\n", 1);
	return (0);
}
