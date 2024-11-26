/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:51:05 by layang            #+#    #+#             */
/*   Updated: 2024/09/07 21:16:39 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = -10;
	b = 20;
	ft_div_mod(a, b, &div, &mod);
	if (b != 0)
	{
		printf("a = %d, b = %d\n", a, b);
		printf("Division result (div): %d\n", div);
		printf("Remainder (mod): %d\n", mod);
	}
	return (0);
}*/
