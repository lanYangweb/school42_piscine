/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:27:10 by layang            #+#    #+#             */
/*   Updated: 2024/09/09 10:27:17 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_print_address(unsigned char *ptr)
{
	unsigned long	addr;
	unsigned char	address[16];
	int				i;

	addr = (unsigned long)ptr;
	i = 0;
	while (i < 16)
	{
		address[i] = (addr >> ((15 - i) * 4)) & 0xF;
		i++;
	}
	i = 0;
	while (i < 16)
	{
		write(1, &"0123456789abcdef"[address[i]], 1);
		i++;
	}
	write(1, ":", 1);
	write(1, " ", 1);
}

void	p_hc(unsigned char *p, unsigned int s, unsigned int e, unsigned int o)
{
	unsigned int	i;

	i = s;
	while (i < e)
	{
		if (i < o)
		{
			write(1, &"0123456789abcdef"[p[i] / 16], 1);
			write(1, &"0123456789abcdef"[p[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
	while (i % 16 != 0)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
		{
			write(1, " ", 1);
		}
		i++;
	}
}

void	p_c(unsigned char *p, unsigned int s, unsigned int e, unsigned int o)
{
	unsigned int	i;

	i = s;
	while (i < e)
	{
		if (i < o)
		{
			if (p[i] >= 32 && p[i] <= 126)
				write(1, &p[i], 1);
			else
				write(1, ".", 1);
		}
		i++;
	}
	while (i % 16 != 0)
	{
		write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	i;
	unsigned int	end;

	ptr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		if (i + 16 < size)
			end = i + 16;
		else
			end = size;
		ft_print_address(ptr + i);
		p_hc(ptr, i, end, size);
		p_c(ptr, i, end, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
int	main(void)
{
	char	data[] = "Hello, World! Test of the ft_print_memory function.\n";
	unsigned int size = sizeof(data);

	ft_print_memory(data, size);
	return (0);
}*/
