#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main(void)
{
	ft_putstr("42");
	ft_putstr("\n");
	ft_putstr("Bla bla bla");
	ft_putstr("\n");
	return (0);
}*/
