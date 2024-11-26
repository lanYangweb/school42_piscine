/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:35:38 by layang            #+#    #+#             */
/*   Updated: 2024/09/08 14:35:49 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	in_word;

	i = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (!in_word)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - ('a' - 'A');
				in_word = 1;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + ('a' - 'A');
		}
		else
			in_word = 0;
		i++;
	}
	return (str);
}
/*
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i1 == 1)
				str[i] -= 32;
			i1 = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			i1 = 0;
		else
			i1 = 1;
		i++;
	}
	return (str);
}*/
/*
int main(void)
{
    //char str1[] = "sa42lut coucou";
    char str1[] = "quarante-deux; cinquante+et+un";
    //char str1[] = "salut, comment tu vas ? 42mots";

    ft_strcapitalize(str1);  
    printf("%s\n", str1); 

    return 0;
}*/
