/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:26:54 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 10:18:16 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	int		len;
	int		i;
	char	*in;
	void	*ptr;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	in = (char *) malloc(sizeof(char) * (len + 1));
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
/* 
//test function
int	main(int ac, char **av)
{
	char *dup;

	if (ac != 2)
	{
		printf("error: need exact 1 argument\n");
		return (0);
	}
	dup = ft_strdup(av[1]);
	if (dup == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	printf("Original: %s\n", av[1]);
	printf("Duplicate: %s\n", dup);

	free(dup);
	return (0);
} */