void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		try_solve(int board_size, char *in);

int	input_validation(int size, int len, char *inputs)
{
	int	i;

	i = 0;
	while (++i < len)
	{
		if (i % 2 && inputs[i] != ' ')
			return (0);
		if (!(i % 2))
		{
			if (inputs[i] < '1' || inputs[i] > (size + '0'))
				return (0);
		}
	}
	return (1);
}

int	get_board_size(int argc, char **argv)
{
	int	i;
	int	board_size;
	int	len;

	if (argc != 2)
		return (-1);
	i = 3;
	board_size = 0;
	len = ft_strlen(argv[1]);
	while (++i <= 9)
	{
		if (len == (2 * i * i - 1))
		{
			board_size = i;
			break ;
		}
	}
	if (board_size == 0)
		return (-1);
	i = -1;
	if (input_validation(board_size, len, argv[1]))
		return (board_size);
	return (-1);
}

int	main(int argc, char **argv)
{
	int		board_size;

	board_size = get_board_size(argc, argv);
	if (board_size == -1 || try_solve(board_size, argv[1]) == -1)
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
