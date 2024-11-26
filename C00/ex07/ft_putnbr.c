/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:39:44 by layang            #+#    #+#             */
/*   Updated: 2024/09/24 18:02:58 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	ln;
	char	ch;

	ln = nb;
	if (ln < 0)
	{
		write(1, "-", 1);
		ln = -ln;
	}
	if (ln > 9)
		ft_putnbr(ln / 10);
	ch = ln % 10 + '0';
	write(1, &ch, 1);
}
/* 
int	main(void)
{
	int	n;

	n = -9830;	
	ft_putnbr(n);
	return (0);
} */
