/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:26:12 by layang            #+#    #+#             */
/*   Updated: 2024/09/12 10:26:19 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
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

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

#include <string.h>

int	main(void)
{
	char	*s1 = "apple";
	char	*s2 = "appless";

	int result3 = strncmp(s1, s2, 6);
	ft_putnbr(result3);
	ft_putchar('\n');
	
	int result = ft_strncmp(s1, s2, 6);
	ft_putnbr(result);
	ft_putchar('\n');

	int result2 = strncmp(s1, s2, 0);
	ft_putnbr(result2);
	ft_putchar('\n');
	
	int result1 = ft_strncmp(s1, s2, 0);
	ft_putnbr(result1);
	ft_putchar('\n');

	return (0);
}*/
