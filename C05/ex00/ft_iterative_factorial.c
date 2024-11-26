/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: layang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:53:44 by layang            #+#    #+#             */
/*   Updated: 2024/09/11 21:21:47 by layang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
	{
		return (0);
	}
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Input: %s <non-negative int>\n", argv[0]);
		return 1;
	}

	char	*input = argv[1];
	for (int i = 0; input[i] != '\0'; i++) {
			if (!isdigit(input[i])) {
			printf("Error: Need a non-negative int.\n");
			return 1; 
		}
	}

	int number = atoi(argv[1]);
	int factorial = ft_iterative_factorial(number);
	printf("Factorial of %d is %d\n", number, factorial);	
	return 0;
}*/
