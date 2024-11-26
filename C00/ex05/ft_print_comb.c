/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:16:44 by layang            #+#    #+#             */
/*   Updated: 2024/09/24 18:02:36 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int di[])
{
	int		i;
	char	ch;

	i = 0;
	while (i < 3)
	{
		ch = di[i] + '0';
		write(1, &ch, 1);
		i++;
	}
}

int	check(int di[], int nbr)
{
	int	i;

	i = 0;
	while (i < nbr)
	{
		if (di[i] >= di[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	solve(int di[], int nbr, int *count)
{
	int	choice;

	if (nbr == 3)
	{
		print(di);
		if (di[0] != 7)
			write(1, ", ", 2);
		(*count)++;
		return ;
	}
	choice = 0;
	while (choice < 10)
	{
		di[nbr] = choice;
		if (nbr == 0 || check(di, nbr))
		{
			solve(di, nbr + 1, count);
		}
		choice++;
	}
}

void	ft_print_comb(void)
{
	int	di[3];
	int	count;

	count = 0;
	solve(di, 0, &count);
}
/* 
int	main(void)
{
	ft_print_comb();
} */
