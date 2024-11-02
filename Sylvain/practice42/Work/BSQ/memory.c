#include<stdlib.h>

char	*create_str(int size)
{
	char	*mystr;

	mystr = (char *)malloc((size + 1) * sizeof (char));
	if (!mystr)
		exit (1);
	mystr[size] = '\0';
	return (mystr);
}

char	*extend_str(char *str, char c)
{
	int		len;
	char	*mystr;

	len = 0;
	while (str[len])
		len++;
	mystr = (char *)malloc((len + 2) * sizeof (char));
	if (!mystr)
		exit (1);
	mystr[len + 1] = '\0';
	mystr[len] = c;
	while (--len >= 0)
		mystr[len] = str[len];
	free (str);
	return (mystr);
}

char	**create_board(char *str, int rows)
{
	char **myboard;

	myboard = (char **)malloc(rows * sizeof (char *));
	if (!myboard)
		exit (1);
	return (myboard);
}

void	free_bsq(t_bsq bsq)
{
}
