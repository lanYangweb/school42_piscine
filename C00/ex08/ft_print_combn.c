/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:55:26 by layang            #+#    #+#             */
/*   Updated: 2024/09/24 18:03:07 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	solve(char	*nb, int nbl, int start, int size)
{
	char	i;

	if (nbl == size)
	{
		write(1, nb, size);
		if (nb[0] != '9' - size + 1)
			write(1, ", ", 2);
		return ;
	}
	i = start;
	while (i <= '9')
	{
		nb[nbl] = i;
		solve(nb, nbl + 1, i + 1, size);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	nb[10];

	if (n <= 0 || n > 10)
		return ;
	solve(nb, 0, '0', n);
}
/* 
int	main(void)

{
	ft_print_combn(9);
	return (0);
} */

/* //For results and number of results

void	solve(char	*nb, int nbl, int start, int *count, int size)
{
	char	i;

	if (nbl == size)
	{
		write(1, nb, size);
		if (nb[0] != '9' - size + 1)
			write(1, ", ", 2);
		(*count)++;
		return ;
	}
	i = start;
	while (i <= '9')
	{
		nb[nbl] = i;
		solve(nb, nbl + 1, i + 1, count, size);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	nb[10];
	int		count;

	if (n <= 0 || n > 10)
		return ;
	count = 0;
	solve(nb, 0, '0', &count, n);
}

int ft_print_combn(int n)
{
	char nb[10];
	int count;

	if (n <= 0 || n > 10)
		return (0);
	count = 0;
	solve(nb, 0, '0', &count, n);
	return (count);
}

int main(void)
{
	int count;

	count = ft_print_combn(9);
	write(1, "\n", 1);
	printf("Number of reaults: %d\n", count);
} */
