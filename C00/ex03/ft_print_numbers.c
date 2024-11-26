/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:48:46 by layang            #+#    #+#             */
/*   Updated: 2024/09/24 14:35:46 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nb;

	nb = '0';
	while (nb <= '9')
	{
		write(1, &nb, 1);
		nb++;
	}
}
/* 
int	main(void)
{
	ft_print_numbers();
} */
