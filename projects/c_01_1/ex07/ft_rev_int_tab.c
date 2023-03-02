/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:48:58 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/15 11:41:30 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int **a, int **b)
{
	int	mem;

	mem = **a;
	**a = **b;
	**b = mem;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	first_counter;
	int	second_counter;
	int	*a;
	int	*b;

	first_counter = 0;
	second_counter = size - 1;
	while (first_counter < second_counter)
	{
		a = &tab[first_counter];
		b = &tab[second_counter];
		ft_swap(&a, &b);
		first_counter++;
		second_counter--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int arr[4] = {1,2,3,4};

	int odd_arr[5] = {1,2,3,4,5};

	int i = 0;
	while (i < 4)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(arr, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d", arr[i]);
		i++;
	}

	printf("\n");
	printf("\n");

	i = 0;
	while (i < 5)
	{
		printf("%d", odd_arr[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(odd_arr, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", odd_arr[i]);
		i++;
	}
	return (0);
}*/
