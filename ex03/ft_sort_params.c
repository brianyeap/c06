#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}


void bubble_Swap(char **words, int size)
{
	int i;
	int j;
	char *temp;

	i = 1;
	while (i < size)
	{
		j = 1;
		while (j < size - i)
		{
			if (ft_strcmp(words[j], words[j + 1]) > 0)
			{
				temp = words[j + 1];
				words[j + 1] = words[j];
				words[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void print_params(char **words, int size)
{
	int i;

	i = 1;
	while (i < size)
	{
		ft_str(words[i]);
		ft_putchar('\n');
		i++;
	}
}

int main(int argc, char **argv)
{
	bubble_Swap(argv, argc);
	print_params(argv, argc);
	return (0);
}