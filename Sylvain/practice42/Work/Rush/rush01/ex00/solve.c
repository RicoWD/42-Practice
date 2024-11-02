#include <stdlib.h>

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	free_array(int sz, char **array);
char	**create_array(int sz);
char	**copy_array(int sz, char **array);
char	**solve(int sz, char *in, char **board);
int		is_duplicated(int sz, int coords[2], int nb, char **b);
int		is_invalid_left(int sz, int row, char **b, char *in);
int		is_invalid_right(int sz, int row, char **b, char *in);
int		is_invalid_up(int sz, int col, char **b, char *in);
int		is_invalid_down(int sz, int col, char **b, char *in);

void	print_array(int size, char **board)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = board[i][j];
			if (c > '0' && c <= '9')
				ft_putchar(c);
			else
				ft_putchar('.');
			j++;
			if (j < size)
				ft_putchar(' ');
		}
		i++;
		ft_putchar('\n');
	}
}

int	is_invalid(int sz, int coord[2], char **board, char *in)
{
	if (coord[1] == (sz - 1))
	{
		if (is_invalid_left(sz, coord[0], board, in)
			|| is_invalid_right(sz, coord[0], board, in))
			return (1);
		if (coord[0] == (sz - 1))
		{
			if (is_invalid_up(sz, coord[1], board, in)
				|| is_invalid_down(sz, coord[1], board, in))
				return (1);
		}
	}
	return (0);
}

char	**try_numbers(int size, int coords[2], char *inputs, char **bcopy)
{
	int		nb;
	char	**ret;

	nb = 1;
	while (nb <= size)
	{
		bcopy[coords[0]][coords[1]] = nb + '0';
		if (!(is_duplicated(size, coords, nb, bcopy)
				|| is_invalid(size, coords, bcopy, inputs)))
		{
			ret = solve(size, inputs, bcopy);
			if (ret != NULL)
				return (ret);
		}
		nb++;
	}
	return (NULL);
}

char	**solve(int sz, char *inputs, char **board)
{
	int		coords[2];
	char	**bcopy;

	bcopy = copy_array(sz, board);
	coords[0] = 0;
	while (coords[0] < sz)
	{
		coords[1] = 0;
		while (coords[1] < sz)
		{
			if (bcopy[coords[0]][coords[1]] == '\0')
				return (try_numbers(sz, coords, inputs, bcopy));
			coords[1]++;
		}
		coords[0]++;
	}
	free_array(sz, board);
	return (bcopy);
}

int	try_solve(int size, char *inputs)
{
	char	**board;

	board = create_array(size);
	board = solve(size, inputs, board);
	if (board != NULL)
	{
		print_array(size, board);
		free_array(size, board);
		return (0);
	}
	return (-1);
}
