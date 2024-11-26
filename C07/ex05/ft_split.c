/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:58:24 by layang            #+#    #+#             */
/*   Updated: 2024/09/19 10:17:48 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//#include <stdio.h>

int	len(char	*str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	find_sep(char c, char	*charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	*count_size(char	*str, char	*charset)
{
	int	i;
	int	l;
	int	n;
	int	*size;

	i = 0;
	l = 0;
	size = malloc((len(str) + 1) * sizeof(int));
	while (i < len(str))
	{
		n = 0;
		while (!find_sep(str[i], charset) && i != len(str))
		{
			n++;
			if (find_sep(str[i + 1], charset) || ((i + 1) == len(str)))
			{
				size[l++] = n;
			}
			i++;
		}
		i++;
	}
	size[l] = 0;
	return (size);
}

char	**put_result(int	*size, char	*str)
{
	char	**result;
	int		l;

	result = malloc((len(str) + 1) * sizeof(char *));
	if (!result)
	{
		return (NULL);
	}
	l = 0;
	while (size[l] != 0)
	{
		result[l] = malloc((size[l] + 1) * sizeof(char));
		l++;
	}
	result[l] = NULL;
	return (result);
}

char	**ft_split(char	*str, char	*charset)
{
	char	**result;
	int		*size;
	int		i;
	int		l;
	int		n;

	size = count_size(str, charset);
	result = put_result(size, str);
	i = 0;
	l = 0;
	while (i < len(str))
	{
		n = 0;
		while (!find_sep(str[i], charset) && i != len(str))
		{
			result[l][n++] = str[i];
			if (find_sep(str[i + 1], charset) || ((i + 1) == len(str)))
				result[l++][n] = '\0';
			i++;
		}
		i++;
	}
	return (result);
}
/* 
int	main(int ac, char	**av)
{
	char	**re;
	int		i;

	if (ac == 1 || ac != 3)
	{
		printf("Put 2 strings as parameters\n");
		printf("1st string as string\n");
		printf("2nd string as separators\n");
		return (0);
	}
	re = ft_split(av[1], av[2]);
	i = 0;
	while (re[i] != NULL)
	{
		printf("%d: %s\n", i, re[i]);
		free(re[i]);
		i++;
	}
	free(re);
	return (0);
} */