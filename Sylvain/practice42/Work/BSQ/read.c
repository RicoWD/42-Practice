#include<stdio.h>  // A supprimer
#include<stdlib.h>

int	read_keyboard(void)
{
}

void	read_files(int nb_files, char **filenames)
{
	for (int i = 0; i < nb_files; i++)
	{
		printf("%s\n", filenames[i]);
	}
}

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUF_SIZE 1024

// Copie 'n' octets de 'src' vers 'dst'
char	*copy_buffer(char *src, char *dst, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

// Redimensionne le buffer à 'new_size' et copie les données existantes
char	*resize_buffer(char *buf, size_t new_size, size_t total)
{
	char	*tmp;
	size_t	i;

	tmp = malloc(new_size);
	if (!tmp)
	{
		free(buf);
		exit(1);
	}
	copy_buffer(buf, tmp, total);
	free(buf);
	return (tmp);
}

// Lit depuis 'fd' et stocke les données dans un buffer dynamique
char	*read_input(int fd, size_t *total)
{
	char	*buf;
	ssize_t	bytes;
	size_t	size;

	buf = malloc(BUF_SIZE);
	if (!buf)
		exit(1);
	size = BUF_SIZE;
	*total = 0;
	while ((bytes = read(fd, buf + *total, BUF_SIZE)) > 0)
	{
		*total += bytes;
		if (*total + BUF_SIZE > size)
		{
			size += BUF_SIZE;
			buf = resize_buffer(buf, size, *total);
		}
	}
	if (bytes < 0)
	{
		free(buf);
		exit(1);
	}
	return (buf);
}

int	main(int argc, char *argv[])
{
	size_t	total;
	char	*input;

	if (argc == 1)
	{
		// Lecture depuis l'entrée standard (stdin)
		input = read_input(0, &total);
	}
	else
	{
		// Lecture depuis un fichier spécifié en argument
		int	fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			exit(1);
		input = read_input(fd, &total);
		close(fd);
	}
	// Traitement de 'input' ici
	free(input);
	return (0);
}

