/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:58:17 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 10:18:26 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>

int	*ft_range(int min, int max)
{
	int		*pn;
	int		i;
	void	*ptr;

	i = 0;
	ptr = NULL;
	if (min >= max)
		return (ptr);
	pn = (int *) malloc((max - min) * sizeof(int));
	if (!pn)
		return (ptr);
	while (min < max)
	{
		pn[i] = min;
		min++;
		i++;
	}
	return (pn);
}
/* 
// test function
void	putnbr(int n)
{
	char o;

	while (n > 9)
	{
		putnbr(n / 10);
	}
	o = n % 10 + '0';
	write(1, &o, 1);
}

int	main(void)
{
	int		i;
	int	ip[2] = {0, 7};

	int	*op = ft_range(ip[0], ip[1]);
	i = 0;
	while (i < ip[1] - ip[0])
	{
		putnbr(op[i]);
		write(1, "\n", 1);
		i++;
	}
	free(op);
	return (0);
} */