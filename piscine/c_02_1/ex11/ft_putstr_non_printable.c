/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:15:42 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/21 21:49:58 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
char to hex:

hex symbols: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F(15)

Example int to hex:

int = 479

479 / 16 = 29
479 % 16 = 15 (least significan digit)

29 / 16 = 1
29 % 16 = 13

1 / 16 = 0
1 % 16 = 1 (most significan digit)

remainders = 1, 13, 15			hex is = 1DF
*/

/*
ASSIGNMENT:
Create a function that displays a string of characters onscreen.
If this string contains characters that aren’t printable,
they’ll have to be displayed in the shape of
hexadecimals (lowercase), preceeded by a "backslash".
*/
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		index;
	int		character;
	char	first_digit;
	char	second_digit;

	index = 0;
	while (str[index] != '\0')
	{
		character = str[index];
		if (character < 32 || character == 127)
		{
			first_digit = (character / 16) + '0';
			if (character % 16 < 10)
				second_digit = (character % 16) + '0';
			else
				second_digit = (character % 16) + 'W';
			write(1, "\\", 1);
			write(1, &first_digit, 1);
			write(1, &second_digit, 1);
		}
		else
			write(1, &str[index], 1);
		index++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putstr_non_printable("h\tla mundo de mi\r");
	return (0);
}*/
