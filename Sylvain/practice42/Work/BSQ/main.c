int	read_keyboard(void);
void	read_files(int nb_files, char **filenames);

int	main(int argc, char **argv)
{
	int	nb_files;

	if (argc == 1)
	{
		read_keyboard;
	}
	else
	{
		nb_files = argc--;
		read_files(nb_files, argv++);
	}
	return (0);
}
