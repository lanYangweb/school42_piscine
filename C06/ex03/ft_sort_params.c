/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 22:37:50 by layang            #+#    #+#             */
/*   Updated: 2024/09/16 22:38:01 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_argv(int size, char **params)
{
	char	*temp_str;
	int		i;
	int		sw;

	sw = 1;
	while (sw)
	{
		i = 1;
		sw = 0;
		while (i < size - 1)
		{
			if ((ft_strcmp(params[i], params[i + 1]) > 0))
			{
				temp_str = params[i];
				params[i] = params[i + 1];
				params[i + 1] = temp_str;
				sw = 1;
			}
			i++;
		}
		size--;
	}
}

/*
// orignal main
int	main(int count, char **params)
{
	char	*temp_str;
	int		i;
	int		size;
	int		sw;

	if (count <= 1)
		return (0);
	size = count;
	sw = 1;
	while (sw)
	{
		i = 1;
		sw = 0;
		while (i < size - 1)
		{
			if ((ft_strcmp(params[i], params[i + 1]) > 0))
			{
				temp_str = params[i];
				params[i] = params[i + 1];
				params[i + 1] = temp_str;
				sw = 1;
			}
			i++;
		}
		size--;
	}
	i = 1;
	while (i < count)
	{
		ft_putstr(params[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}*/

int	main(int count, char **params)
{
	int		i;

	if (count <= 1)
		return (0);
	ft_sort_argv(count, params);
	i = 1;
	while (i < count)
	{
		ft_putstr(params[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

/*
// version 2
int	main(int count, char **params)
{
	char	*temp_str;
	int		i;
	int		j;

	if (count <= 1)
		return (0);
	i = 1;
	while (i < count)
	{
		j = 1;
		while (j < count - i)
		{
			if ((ft_strcmp(params[j], params[j + 1]) > 0))
			{
				temp_str = params[j];
				params[j] = params[j + 1];
				params[j + 1] = temp_str;
			}
			j++; 
		}
		i++;	
	}
	i = 1;
	while (i < count)
	{
		ft_putstr(params[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}*/
