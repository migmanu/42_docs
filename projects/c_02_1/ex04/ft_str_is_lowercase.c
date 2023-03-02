/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:58:04 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/21 21:14:27 by jmigoya-         ###   ########.fr       */
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
		if (number < 'a' || number > 'z')
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
	char a[] = "jRj";
	int r =	ft_str_is_lowercase(a);
	printf("result: %d", r);
	return (0);
}*/
