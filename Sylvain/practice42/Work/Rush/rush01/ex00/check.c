int	is_duplicated(int size, int coords[2], int nb, char **board)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i != coords[1])
		{
			if (board[coords[0]][i] == nb + '0')
				return (1);
		}
		if (i != coords[0])
		{
			if (board[i][coords[1]] == nb + '0')
				return (1);
		}
		i++;
	}
	return (0);
}

int	is_invalid_left(int size, int row, char **b, char *in)
{
	int	i;
	int	nb;
	int	left;
	int	max;

	left = in[4 * size + 2 * row] - '0';
	i = 0;
	max = 0;
	nb = 0;
	while (i < size)
	{
		if (b[row][i] > max)
		{
			max = b[row][i];
			nb++;
			if (nb > left)
				return (1);
		}
		i++;
	}
	if (nb < left)
		return (1);
	return (0);
}

int	is_invalid_right(int size, int row, char **b, char *in)
{
	int	i;
	int	nb;
	int	right;
	int	max;

	right = in[6 * size + 2 * row] - '0';
	i = size - 1;
	max = 0;
	nb = 0;
	while (i >= 0)
	{
		if (b[row][i] > max)
		{
			max = b[row][i];
			nb++;
			if (nb > right)
				return (1);
		}
		i--;
	}
	if (nb < right)
		return (1);
	return (0);
}

int	is_invalid_up(int size, int col, char **b, char *in)
{
	int	i;
	int	nb;
	int	up;
	int	max;

	up = in[2 * col] - '0';
	i = 0;
	max = 0;
	nb = 0;
	while (i < size)
	{
		if (b[i][col] > max)
		{
			max = b[i][col];
			nb++;
			if (nb > up)
				return (1);
		}
		i++;
	}
	if (nb < up)
		return (1);
	return (0);
}

int	is_invalid_down(int size, int col, char **b, char *in)
{
	int	i;
	int	nb;
	int	down;
	int	max;

	down = in[2 * size + 2 * col] - '0';
	i = size - 1;
	max = 0;
	nb = 0;
	while (i >= 0)
	{
		if (b[i][col] > max)
		{
			max = b[i][col];
			nb++;
			if (nb > down)
				return (1);
		}
		i--;
	}
	if (nb < down)
		return (1);
	return (0);
}
