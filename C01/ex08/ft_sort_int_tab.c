/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 21:37:54 by layang            #+#    #+#             */
/*   Updated: 2024/09/07 21:40:39 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	swapped;

	if (size <= 1)
		return ;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
		size--;
	}
}
/*
void	ft_putnbr(int n)
{
	char	c;

	if (n > 9)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_putarr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(arr[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int	arr[] = {59, 309, 38, 1, 22};
	int	size = 5;

	write(1, "Original array:\n", 17);
	ft_putarr(arr, size);

	ft_sort_int_tab(arr, size);

	write(1, "Sorted array:\n", 15);
	ft_putarr(arr, size);

	return (0);
}*/
