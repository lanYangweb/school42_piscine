/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:09:48 by layang            #+#    #+#             */
/*   Updated: 2024/09/24 14:35:01 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/* int	main(void)
{
	int	n;

	n = -1;	
	ft_is_negative(n);
	write(1, "\n", 1);
	n = 0;
	ft_is_negative(n);
	write(1, "\n", 1);
} */
