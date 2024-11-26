/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:22:31 by layang            #+#    #+#             */
/*   Updated: 2024/09/12 09:22:35 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
*/
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb -1));
}
/*
int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Input: %s <one non-negative integer>\n", argv[0]);
		return 1;
	}

	char	*input = argv[1];
	for (int i = 0; input[i] != '\0'; i++) {
			if (!isdigit(input[i])) {
			printf("Error: Input must be a non-negative integer.\n");
			return 1; 
		}
	}

	int number = atoi(argv[1]);
	int factorial = ft_recursive_factorial(number);
	printf("Factorial of %d is %d\n", number, factorial);	
	return 0;
}*/
