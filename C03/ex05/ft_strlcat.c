/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:28:31 by layang            #+#    #+#             */
/*   Updated: 2024/09/12 10:28:40 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	len;
	int				i;
	int				len_src;

	len = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size <= len || size == 0)
		return (size + len_src);
	i = 0;
	while (src[i] != '\0' && (len + i) < (size - 1))
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + len_src);
}
/*
int main() {
	char dest[20] = "Hello, ";
	char dest2[20] = "Hello, ";
	char dest3[20] = "Hello, ";
	char src[] = "world!";
	size_t size = 5;
	size_t size2 = 15;
	size_t size3 = 13;
	size_t result = ft_strlcat(dest, src, size);
	size_t result2 = ft_strlcat(dest2, src, size2);
	size_t result3 = ft_strlcat(dest3, src, size3);

	printf("Result: %zu\n", result); 
	printf("Dest: %s\n", dest);

	printf("Result: %zu\n", result2); 
	printf("Dest: %s\n", dest2);

	printf("Result: %zu\n", result3); 
	printf("Dest: %s\n", dest3);
	return 0;
}*/
