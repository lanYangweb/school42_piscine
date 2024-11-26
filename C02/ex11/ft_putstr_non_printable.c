/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 18:17:00 by layang            #+#    #+#             */
/*   Updated: 2024/09/08 18:17:05 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
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

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex_chars[17];

	ft_strcpy(hex_chars, "0123456789abcdef");
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &hex_chars[(unsigned char)str[i] / 16], 1);
			write(1, &hex_chars[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	unsigned char	str[3];

	str[0] = 200;
	str[1] = 'A';
	str[2] = 0;
	ft_putstr_non_printable((char *)str);
	write(1, "\n", 1);
	return (0);
}
*/