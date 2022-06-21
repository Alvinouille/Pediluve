#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);
}

void ft_putstr (char *ligne)
{
	int i;
	i = 0;

	while (ligne[i] != '\0')
	{
		ft_putchar (ligne[i]);
		i++;
	}
}

int ft_strcmp (char *str, char *str2)
{
	int i;
	i = 0;
	
	while ( (str[i] != '\0') || (str2[i] != '\0') )
	{
		if (str[i] < str2[i]) 
		{
			return 1;
		}
		
		if (str[i] > str2[i])
		{
			return -1;
		}

		else {i++;}
	}
	return 0;
}

int main (int argc, char **argv)
{
	int i;
	char *temp;
	i = 1;


	while (i < argc)
	{
		if ((ft_strcmp(argv[i], argv[i+1]) < 0))
		{
			temp = argv[i];
			argv[i] = argv[i+1];
			argv[i+1] = temp;
			i = 1;
		}
		else {i++;}
		if (argv[i+1] == 0){break;}
	}

	i = 1;

	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		if (argv[i+1] == 0){break;}
		i++;
	}

	return 0;
}
