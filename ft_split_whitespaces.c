#include <stdlib.h>
#include <stdio.h>

int ft_white_space (char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
	{
		return 1;
	}
	else {return 0;}
}


int ft_count_word (char *str)
{
	int i;
	int nb ;
	i = 0;
	nb = 0;

	while (str[i] != '\0')
	{
		if ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t'))
		{
			nb++;
		}

		i++;
	}

	return (nb+1);
}


int ft_lenght_word (char *str)
{
	int i;
	i =0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i+1);
}

char *ft_strcopy (char *dest, char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}

	dest[i] = '\0';

	return dest;
}


char **ft_split_whitespaces (char *str)
{
	int i;
	int j;
	int a;
	int sizetab;
	int sizeword;
	char **tab;

	j = 0;
	i = 0;
	a = 0;
	sizeword = 0;
	sizetab = 0;
	tab = NULL;

	sizetab = ft_count_word (str);
	
	tab = malloc ((sizeof(char*)) * (sizetab+1));

	int space = 0;
	char *newstr;
	newstr = NULL;

	while (str[i] !='\0')
	{
		space = ft_white_space (str[i]);
	
		newstr[a] = str[i];
		
		i++;
		a++;

		if (space == 1)
		{
			newstr[a] = '\0';
			sizeword = ft_lenght_word (newstr);
			tab[j] = malloc ((sizeof(char))*sizeword);
			tab[j] = ft_strcopy (tab[j], newstr);
			j++;
			newstr = NULL;
			a = 0;
		}
	}

	tab[j] = 0;

	return tab;
}
