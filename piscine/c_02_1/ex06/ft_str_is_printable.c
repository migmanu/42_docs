/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:50:58 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/21 21:50:57 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	counter;
	int	number;

	counter = 0;
	while (str[counter] != '\0')
	{
		number = str[counter];
		if (number < 32 || number == 127)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[] = "KLLDE r";
	int r =	ft_str_is_printable(a);
	printf("result: %d", r);
	return (0);
}*/
