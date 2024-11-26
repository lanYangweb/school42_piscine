/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:58:29 by layang            #+#    #+#             */
/*   Updated: 2024/09/11 19:58:41 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	char_nb;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	char_nb = nb % 10 + '0';
	write(1, &char_nb, 1);
}
/*
int	main(void)
{
	int	i;
	int	i_2;

	i = -2147483648;
	i_2 = 2256;
	ft_putnbr(i);
	write(1, "\n", 1);
	ft_putnbr(i_2);
	return (0);
}*/
