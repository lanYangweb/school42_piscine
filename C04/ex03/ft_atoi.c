/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:07:57 by layang            #+#    #+#             */
/*   Updated: 2024/09/11 20:08:00 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_atoi(char	*str)
{
	int	sign;
	int	num;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
/*
int	main(void)
{
	char	str[] = " \n     ---+--+1234ab567";
	int	result;
	char	str2[] = " -+-056g7";
	int	result2;

	result = ft_atoi(str);
	result2 = ft_atoi(str2);
	printf("From: \"%s\"\n", str);
	printf("To: %d\n", result);
	printf("From: \"%s\"\n", str2);
	printf("To: %d\n", result2);
	return (0);
}*/
