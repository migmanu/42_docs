/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:50:58 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/20 14:50:19 by jmigoya-         ###   ########.fr       */
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
		if (number < 33 || number == 127)
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
	char a[] = "KLLDE\0nr";
	int r =	ft_str_is_printable(a);
	printf("result: %d", r);
	return (0);
}*/
