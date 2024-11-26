/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <layang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:58:24 by layang            #+#    #+#             */
/*   Updated: 2024/09/23 19:11:59 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>

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

char	*substr(char *str, char *charset, int i)
{
	int		n;
	char	*substr;
	int		sit;
	int		l;

	n = i;
	while (!find_sep(str[i], charset) && i != len(str))
		i++;
	l = i - n;
	substr = malloc((l + 1) * sizeof(char));
	sit = 0;
	while (sit < l)
		substr[sit++] = str[n++];
	substr[l] = '\0';
	return (substr);
}

char	**ft_split(char	*str, char	*charset)
{
	char	**result;
	int		i;
	int		l;

	result = malloc((len(str) + 1) * sizeof(char *));
	i = 0;
	l = 0;
	while (i < len(str))
	{
		if (!find_sep(str[i], charset))
		{
			result[l] = substr(str, charset, i);
			i = i + len(result[l]) - 1;
			l++;
		}
		i++;
	}
	result[l] = NULL;
	return (result);
}

/* int	main(int ac, char	**av)
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
// ./a.out ":a:..dfh df-gg" ". " | cat -e
