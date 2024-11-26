/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:19:41 by layang            #+#    #+#             */
/*   Updated: 2024/09/07 21:20:43 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 4;
	printf("Before: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After: a (quotient) = %d, b (remainder) = %d\n", a, b);
	return (0);
}*/
