/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:33:03 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/15 11:42:18 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	mem;

	mem = *a;
	*a = *b;
	*b = mem;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	position;
	int	reps;

	position = 0;
	while (position < size)
	{
		reps = position + 1;
		while (size - reps > 0)
		{
			if (tab[position] > tab[reps])
			{
				ft_swap(&tab[position], &tab[reps]);
			}
			reps++;
		}
		position++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int size = 10;
	int arr[10] = {5,1,2,3,4,5,6,7,8,9};
	int i = 0;
	ft_sort_int_tab(arr, size);
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}

	return(0);
}*/
