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

int main(int argc, char **argv)
{
    argc--;
	while (argc)
	{
		ft_str(argv[argc]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}