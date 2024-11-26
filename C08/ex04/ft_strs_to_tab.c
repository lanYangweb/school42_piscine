/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:06:26 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 16:04:34 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	*count_size(int ac, char	**av)
{
	int	i;
	int	n;
	int	*size;

	i = 0;
	size = (int *)malloc(ac * sizeof(int));
	if (size == NULL)
		return (NULL);
	while (i < ac)
	{
		n = 0;
		while (av[i][n] != '\0')
			n++;
		size[i] = n;
		i++;
	}
	return (size);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*in;
	void	*ptr;

	len = 0;
	while (src[len] != '\0')
		len++;
	in = (char *)malloc(sizeof(char) * (len + 1));
	ptr = NULL;
	if (in == NULL)
		return (ptr);
	i = 0;
	while (i < len)
	{
		in[i] = src[i];
		i++;
	}
	in[len] = '\0';
	return (in);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char	**av)
{
	struct s_stock_str	*arr;
	int					*len;
	int					i;

	len = count_size(ac, av);
	if (len == NULL)
		return (NULL);
	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = len[i];
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	return (arr);
}
