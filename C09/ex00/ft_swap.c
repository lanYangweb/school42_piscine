/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:11:25 by layang            #+#    #+#             */
/*   Updated: 2024/09/07 21:13:50 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
*/
void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int		a;
	int		b;
	char	a_char;
	char	b_char;

	a = 9;
	b = 8;
	ft_swap(&a, &b);
	a_char = a % 10 + '0';
	b_char = b % 10 + '0';
	write(1, "After swap, a = ", 17);
	write(1, &a_char, 1);
	write(1, ", b = ", 6);
	write(1, &b_char, 1);
	return (0);
}*/
