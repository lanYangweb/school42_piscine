/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:36:02 by layang            #+#    #+#             */
/*   Updated: 2024/09/16 22:36:16 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*name)
{
	int	i;

	i = 0;
	while (name[i] != '\0')
	{
		write(1, &name[i], 1);
		i++;
	}
}

int	main(int argc, char	**argv)
{
	if (argc != 0)
	{
		ft_putstr(argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
