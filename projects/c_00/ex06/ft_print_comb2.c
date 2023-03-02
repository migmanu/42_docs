/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:27:44 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/13 16:14:10 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_number(int number)
{
	char	first_digit;
	char	second_digit;

	first_digit = (number / 10) + '0';
	second_digit = (number % 10) + '0';
	write(1, &first_digit, 1);
	write(1, &second_digit, 1);
}

void	ft_print_comb2(void)
{
	int	first_number_counter;
	int	second_number_counter;

	first_number_counter = 0;
	second_number_counter = 1;
	while (first_number_counter < 99)
	{
		while (second_number_counter < 100)
		{
			print_number(first_number_counter);
			write(1, " ", 1);
			print_number(second_number_counter);
			if (first_number_counter + second_number_counter != 197)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			second_number_counter++;
		}
		first_number_counter++;
		second_number_counter = first_number_counter + 1;
	}
}
