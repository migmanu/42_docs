/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:58:04 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/21 16:51:44 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	number;

	counter = 0;
	while (str[counter] != '\0')
	{
		number = str[counter];
		if (number < 65 || number > 90)
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
	char a[] = "rPLDGK";
	int r =	ft_str_is_uppercase(a);
	printf("result: %d", r);
	return (0);
}*/
