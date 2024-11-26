/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:25:04 by layang            #+#    #+#             */
/*   Updated: 2024/09/12 10:25:13 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<unistd.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

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


void	ft_putnbr(int	n)
{	
	if (n < 0) {
		ft_putchar('-');
		n = -n;
	}
	if (n > 9) {
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

int	main(void)
{
	char	s1[100];
	char	s2[525];

	ft_strcpy(s1, "appleaoooo");
	ft_strcpy(s2, "appleao");
	int	result = ft_strcmp(s1, s2);
	ft_putnbr(result);
	return (result);
}*/
