/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:27:53 by layang            #+#    #+#             */
/*   Updated: 2024/09/12 10:28:00 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int main() {
	char str[] = "Hello, world!!!";
	char to_find[] = "world";

	char to_find2[] = "ok";

	char *result = ft_strstr(str, to_find);
	char *result2 = ft_strstr(str, to_find2);
	char *result3 = ft_strstr(str, "");	

	if (result) {
		printf("Substring of to_find found start at: %s\n", result);
	} else {
		printf("Substring to_find not found.\n");
	}

	if (result2) {
		printf("Substring of to_find2 found start at: %s\n", result2);
	} else {
		printf("Substring to_find2 not found.\n");
	}

	if (result3)
		printf("Empty substring, returns: %s\n", result3);

	return 0;
}*/
