/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:27:18 by layang            #+#    #+#             */
/*   Updated: 2024/09/12 10:27:26 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (i < nb && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(void)
{
	char			dest1[20];
	char			dest2[17];
	char			dest3[20];
	char			src[6];
	unsigned int	n;

	n = 6;
	ft_strcpy(src, "World!");
	ft_strcpy(dest1, "Hella, ");
	ft_strcpy(dest2, "Hellb, erteg");
	ft_strcpy(dest3, "Hellc, dfv");
	ft_strncat(dest1, src, n);
	ft_strncat(dest2, src, n);
	ft_strncat(dest3, src, n);
	ft_putstr(dest1);
	ft_putchar('\n');
	ft_putstr(dest2);
	ft_putchar('\n');
	ft_putstr(dest3);
	ft_putchar('\n');
	return (0);
}*/
