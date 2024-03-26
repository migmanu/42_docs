/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:58:04 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/20 13:18:42 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	counter;
	int	number;

	counter = 0;
	while (str[counter] != '\0')
	{
		number = str[counter];
		if (number < 48 || str[counter] > 57)
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
	char a[] = "545r40";
	int r =	ft_str_is_lowercase(a);
	printf("result: %d", r);
	return (0);
}*/
