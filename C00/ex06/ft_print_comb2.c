/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:36:18 by layang            #+#    #+#             */
/*   Updated: 2024/09/24 18:02:48 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int nbs[])
{
	char	a;
	char	aa;
	char	b;
	char	bb;

	a = nbs[0] / 10 + '0';
	aa = nbs[0] % 10 + '0';
	b = nbs[1] / 10 + '0';
	bb = nbs[1] % 10 + '0';
	write(1, &a, 1);
	write(1, &aa, 1);
	write(1, " ", 1);
	write(1, &b, 1);
	write(1, &bb, 1);
}

int	valid(int nbs[])
{
	return (nbs[0] < nbs[1]);
}

void	solve(int nbs[], int nm, int *count)
{
	int	sit;

	if (nm == 2)
	{
		print(nbs);
		if (nbs[0] != 98 || nbs[1] != 99)
			write(1, ", ", 2);
		(*count)++;
		return ;
	}
	sit = 0;
	while (sit < 100)
	{
		nbs[nm] = sit;
		if (nm == 0 || valid(nbs))
			solve(nbs, nm + 1, count);
		sit++;
	}
}

void	ft_print_comb2(void)
{
	int	nbs[2];
	int	count;

	count = 0;
	solve(nbs, 0, &count);
}
/* 
int	main(void)
{
	ft_print_comb2();
} */
