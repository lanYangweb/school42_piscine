/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:37:21 by layang            #+#    #+#             */
/*   Updated: 2024/09/16 22:37:25 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*params)
{
	int	i;

	i = 0;
	while (params[i] != '\0')
	{
		write(1, &params[i], 1);
		i++;
	}
}

int	main(int argc, char	**argv)
{
	int	j;

	j = argc - 1;
	while (j > 0)
	{
		ft_putstr(argv[j]);
		ft_putstr("\n");
		j--;
	}
	return (0);
}
