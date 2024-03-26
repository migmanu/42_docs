/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 10:19:44 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/13 16:10:40 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_to_console(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a == '7')
	{
		write(1, "\n", 1);
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = '0';
	second_digit = '1';
	third_digit = '2';
	while (first_digit <= '7')
	{
		while (second_digit <= '8')
		{
			while (third_digit <= '9')
			{
				write_to_console(first_digit, second_digit, third_digit);
				third_digit++;
			}
			second_digit++;
			third_digit = second_digit + 1;
		}
		first_digit++;
		second_digit = first_digit;
	}
}
