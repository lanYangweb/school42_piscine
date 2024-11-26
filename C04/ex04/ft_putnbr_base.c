/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:58:52 by layang            #+#    #+#             */
/*   Updated: 2024/09/11 19:59:00 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	good_base(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	while (base[i] != '\0')
	{
		if (!ft_str_is_printable(&base[i]) || base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nbl;

	len = ft_strlen(base);
	nbl = nbr;
	if (good_base(base))
	{
		if (nbl < 0)
		{
			write(1, "-", 1);
			nbl = -nbl;
		}
		if (nbl >= len)
		{
			ft_putnbr_base(nbl / len, base);
		}
		write(1, &base[nbl % len], 1);
	}
}
/*
int main(void)
{
	// Test with decimal base
	printf("1234 in Decimal (base 10):\n");
	ft_putnbr_base(1234, "0123456789");
	printf("\n");

	// Test with binary base
	printf("1234 in Binary (base 2):\n");
	ft_putnbr_base(1234, "01");
	printf("\n");

	// Test with hexadecimal base
	printf("1234 in Hexadecimal (base 16):\n");
	ft_putnbr_base(1234, "0123456789ABCDEF");
	printf("\n");

	// Test with octal base
	printf("1234 in Octal (base 8):\n");
	ft_putnbr_base(1234, "01234567");
	printf("\n");

	// Test with custom base (poneyvif)
	printf("1234 in Custom base (poneyvif):\n");
	ft_putnbr_base(1234, "poneyvif");
	printf("\n");

	// Test with a negative number
	printf("-1234 in Decimal (base 10):\n");
	ft_putnbr_base(-1234, "0123456789");
	printf("\n");

	// Test with an invalid base (base contains duplicate characters)
	printf("Invalid base (contains duplicate characters):\n");
	ft_putnbr_base(1234, "00123456789");
	printf("\n");

	// Test with an invalid base (base contains less than 2 characters)
	printf("Invalid base (single character):\n");
	ft_putnbr_base(1234, "0");
	printf("\n");

	return 0;
}*/
