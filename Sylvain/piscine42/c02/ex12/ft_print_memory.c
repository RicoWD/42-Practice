/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaitre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 08:42:55 by smaitre           #+#    #+#             */
/*   Updated: 2024/09/25 15:57:15 by smaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_hex_nib(int i)
{
	char	c;

	if (i < 10)
		c = i + '0';
	else
		c = i + 'a' - 10;
	write(1, &c, 1);
}

void	print_hex_addr(unsigned long long l_addr, int sz)
{
	int	a;

	if (sz == 0)
		return ;
	a = l_addr % 16;
	print_hex_addr(l_addr >> 4, sz - 1);
	print_hex_nib(a);
}

void	print_hex_str(unsigned char *str, int sz)
{
	int	i;
	int	a;
	int	b;

	i = 0;
	while (i < 16)
	{
		if (i < sz)
		{
			a = (int)(str[i]) % 16;
			b = (int)(str[i]) >> 4;
			print_hex_nib(b);
			print_hex_nib(a);
		}
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	print_str(char *str, int sz)
{
	int		i;
	char	c;

	i = 0;
	while (i < 16)
	{
		if (i < sz)
		{
			c = str[i];
			if (c > 31 && c < 127)
				write(1, &c, 1);
			else
				write(1, ".", 1);
		}
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				sz;
	void			*sv;

	sv = addr;
	if (size == 0)
		return (sv);
	if (addr == NULL)
		return (NULL);
	i = 0;
	while (i <= size / 16)
	{
		if ((size - i * 16) > 16)
			sz = 16;
		else
			sz = size - i * 16;
		print_hex_addr((unsigned long long)addr, 16);
		write(1, ": ", 2);
		print_hex_str((unsigned char *)addr, sz);
		print_str((char *)addr, sz);
		addr = addr + 16;
		write(1, "\n", 1);
		i++;
	}
	return (sv);
}
/*
#include<stdio.h>

int	main(void)
{
	char	str[] = "Bonjour les aminches"
		"\x80\xFF\x09"
		"c\x07 est fou\x09tout\x09"
		"ce qu on peut faire avec\x09\x0a\x09print_"
		"memory\x0a\x0a\x0a\x09lol\x2elol\x0a \0";
	void	*addr;
	addr = ft_print_memory(str, 92);
	void	*addr2;
	addr2 = ft_print_memory(str, 0);
	void	*addr3;
	addr3 = ft_print_memory(NULL, 25);
}*/
