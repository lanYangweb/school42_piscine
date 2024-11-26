/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:26:39 by layang            #+#    #+#             */
/*   Updated: 2024/09/12 10:26:52 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

/*
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
	char dest[20] = "Hello, ";
	char src[] = "	world!";

	ft_strcat(dest, src);
	ft_putstr(dest);
	ft_putchar('\n');

	return (0);
}*/
