/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:54:51 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 10:17:21 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <unistd.h>

int	len_str(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*combine(int size, char **strs, char *sep, char	*com)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			com[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
				com[k++] = sep[j++];
		}
		i++;
	}
	com[k] = '\0';
	return (com);
}

char	*ft_strjoin(int size, char	**strs, char	*sep)
{
	int		i;
	char	*c;
	int		total_len;

	if (size == 0)
	{
		c = (char *) malloc(1 * sizeof(char));
		c[0] = '\0';
		return (c);
	}
	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += len_str(strs[i++]);
	}
	total_len = total_len + (size -1) * len_str(sep) + 1;
	c = (char *) malloc(total_len * sizeof(char));
	c[0] = '\0';
	if (!c)
		return (NULL);
	return (combine(size, strs, sep, c));
}
/* 
int	main(void)
{
	char	*input;
	int		i;
	char	*in[] = {"On", "est", "D'", "accord"};
	char	sep[] = "~";

	input = ft_strjoin(4, in, sep);
	i = 0;
	while (input[i] != '\0')
	{
		write(1, &input[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(input);
	return (0);
}
 */