/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:07:52 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 10:16:12 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*ip;
	int	i;

	size = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!size)
		return (-1);
	ip = (int *) malloc(size * sizeof(int));
	i = 0;
	while (i < size && min < max)
	{
		ip[i] = min;
		min++;
		i++;
	}
	*range = ip;
	return (size);
}
/* 
int main(void)
{
	int	*range;
	int	size;
	int	i;

	size = ft_ultimate_range(&range, 0, 14);
	if (size > 0)
	{
		for (i = 0; i < size; i++)
			printf("%d\n", range[i]);
		free(range);
	}
	return (0);
}
 */