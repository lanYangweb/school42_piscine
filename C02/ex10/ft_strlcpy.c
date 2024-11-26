/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 14:40:49 by layang            #+#    #+#             */
/*   Updated: 2024/09/08 14:41:00 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char			src[] = "Hello, world!";
	char			dest[20];
	char			small_dest[5];
	unsigned int	result;
	
	result = ft_strlcpy(dest, src, sizeof(dest));
	printf("Test 1:\nSource: %s\nDestination: %s\nSource length: %u\n\n",
		src, dest, result);
	result = ft_strlcpy(small_dest, src, sizeof(small_dest));
	printf("Test 2:\nSource: %s\nDestination: %s\nSource length: %u\n\n",
		src, small_dest, result);
	result = ft_strlcpy(dest, src, 0);
	printf("Test 3:\nSource: %s\nDestination: %s (should be unchanged)\n"
		"Source length: %u\n\n", src, dest, result);	
	printf("%zu\n", sizeof(dest));

	return (0);
}
*/