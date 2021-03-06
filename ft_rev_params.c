#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_putstr (char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		ft_putchar (str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	if ((argc == 0) || (argc == 1)) {return 0;}

	while (argc > 1)
	{
		ft_putstr (argv[argc-1]);
		argc--;
		ft_putstr ("\n");
	}

	return 0;
}


