/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:23:56 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 10:17:31 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	good_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (!printable(&base[i]) || base[i] == '-' || base[i] == '+')
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

int	get_size(int nbr, char *base)
{
	int		len;
	long	nbl;
	int		size;

	len = ft_strlen(base);
	nbl = nbr;
	if (nbl < 0)
	{
		size = 2;
		nbl = -nbl;
	}
	else
	{
		size = 1;
	}
	if (!good_base(base))
		return (0);
	while (nbl >= len)
	{
		nbl /= len;
		size++;
	}
	return (size);
}
