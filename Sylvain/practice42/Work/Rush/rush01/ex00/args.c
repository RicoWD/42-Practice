#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int	ft_natoi(char *str, int n);
int	is_space(char c);

int	get_side_len(char *str)
{
	int	i;
	int	has_str;
	int	nb;

	if (!str)
		return (0);
	nb = 0;
	i = 0;
	while (str[i])
	{
		has_str = 0;
		while (str[i] && is_space(str[i]))
			i++;
		while (str[i] && !is_space(str[i]))
		{
			has_str = 1;
			i++;
		}
		if (has_str)
			nb++;
		has_str = 0;
	}
	if (nb % 4)
		return (0);
	return (nb / 4);
}
void	free_caisses(int **caisses)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		free(caisses[i]);
		i++;
	}
	free(caisses);
}

int	**get_new_caisses(int side_len)
{
	int	**new_caisses;
	//int	caisses_sides_len;
	int	i;

	if (side_len == 0)
		return (NULL);
	new_caisses = (int **)malloc(5 * sizeof (int *));
	i = 0;
	while (i < 4)
	{
		new_caisses[i] = (int *)malloc(side_len * sizeof (int *));
		i++;
	}
	new_caisses[4] = malloc(sizeof (int));
	*new_caisses[4] = side_len;
	return (new_caisses);
}

int	**split_args(char *args)
{
	int		side_len = get_side_len(args);
	int		**caisses = get_new_caisses(side_len);
	char	*start;
	int	nb;
	int		i;

	i = 0;
	printf("side len : %d \n", *caisses[4]);
	if (!caisses)
		return (NULL);
	while (*args)
	{
		while (*args && is_space(*args))
			args++;
		start = args;
		while (*args && !is_space(*args))
			args++;
		nb = ft_natoi(start, args - start + 1);
		printf("[%d %d] %d \n", i / side_len, i % side_len, nb);
		if (nb < 1 || nb > side_len)
		{
			free_caisses(caisses);
			return (NULL);
		}
		caisses[i / side_len][i % side_len] = nb;
		i++;
	}
	return (caisses);
}

int	main(int argc, char **argv)
{
	int	**caisses;
	int	side_len;
	int	i = 0;
	int	j;
	(void) argc;

	caisses = split_args(argv[1]);
	if (!caisses)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	side_len = *caisses[4];
	printf("\nside : %d\n\n", *caisses[4]);
	while (i < 4)
	{
		j = 0;
		while (j < side_len)
		{
			printf("%d  ", caisses[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n-----------------\n");
	free_caisses(caisses);
}	
