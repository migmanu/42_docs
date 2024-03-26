/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:24:03 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/13 16:00:09 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putarr(int n, int arr[])
{
	int	counter;
	char	number_to_print;

	counter = 0;
	while (counter < n)
	{
		number_to_print = arr[counter] + '0';	
		write(1, &number_to_print, 1);
		counter++;
	}
}

void	logical (int n, int arr[])
{
	int counter;
	int	counter_copy;

	while(arr[0] != (10 - n))
	{
		ft_putarr(n, arr);
		counter = 0;
		while (counter < 4)
		{
			ft_putarr(n, arr);
			write(1, ", ", 2);
			if (arr[counter] >= 10 - (n - counter))
			{
				printf("limit poss %d, value %d\n", counter, arr[counter]);
				counter_copy = counter;
				arr[counter_copy - 1]++;
				while (counter_copy < n)
				{
					arr[counter_copy] = arr[counter_copy - 1] + 1;
					counter_copy++;	
				}				
			}
			else
			{
				arr[n - 1]++;
			}
			counter++;
		}
	}
}

void	ft_print_combn(int	n)
{
	int arr[n];
	int first_counter;

	first_counter = 1;
	arr[0] = 0;
	while (first_counter < n)
	{
		arr[first_counter] = arr[first_counter - 1] + 1;
		first_counter++;
	}
	logical(n, arr);
	
}

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
