/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:23:36 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 10:20:24 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <stdio.h>

int	ft_strlen(char *str);
int	printable(char *str);
int	good_base(char *base);
int	get_size(int nbr, char *base);

char	*put_str(int nbr, char *base)
{
	int		size;
	char	*str;

	if (get_size(nbr, base))
	{
		size = get_size(nbr, base);
	}
	else
	{
		return (NULL);
	}
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	return (str);
}

char	*putnbr_base(int nbr, char *base)
{
	int		len;
	long	nbl;	
	int		i;
	char	*str;
	int		size;

	len = ft_strlen(base);
	nbl = nbr;
	size = get_size(nbr, base);
	str = put_str(nbr, base);
	if (!str)
		return (NULL);
	if (nbl < 0)
	{
		nbl = -nbr;
		str[0] = '-';
	}
	i = size - 1;
	while (nbl >= len)
	{
		str[i--] = base[nbl % len];
		nbl /= len;
	}
	str[i] = base[nbl % len];
	return (str);
}

int	find_value(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (c == base[index])
			return (index);
		index++;
	}
	return (-1);
}

int	atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	if (!good_base(base))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (find_value(str[i], base) != -1)
	{
		num = num * ft_strlen(base) + find_value(str[i], base);
		i++;
	}
	return (num * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	void	*nu;
	int		n;
	char	*converted;

	nu = NULL;
	if (!good_base(base_from) || !good_base(base_to))
		return (nu);
	n = atoi_base(nbr, base_from);
	converted = putnbr_base(n, base_to);
	return (converted);
}
/* 
int	main(int ac, char	**av)
{
	char	*result;
	
	if (ac != 4)
	{
		printf("Error: input 3 strings.\n");
		return (1);
	}
	if ((ac == 4) && ft_convert_base(av[1], av[2], av[3]) != NULL)
	{
		result = ft_convert_base(av[1], av[2], av[3]);
		printf("Base \"%s\" in string \"%s\" = ", av[2], av[1]);
		printf("\"%s\" in base \"%s\"", result, av[3]);
		free(result);
		return (0);
	} else {
		printf("Error: bases are not good or nothing found.\n");
		return (1);
	}
}
//example:
//./a.out "  -+ev0ppp" "poneyvif" "0123456789abcdef" | cat -e
 */