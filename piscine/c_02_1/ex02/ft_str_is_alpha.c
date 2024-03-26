/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:58:04 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/20 13:14:15 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	counter;
	int	character;

	counter = 0;
	while (str[counter] != '\0')
	{
		character = str[counter];
		if (character < 65 || str[counter] > 90)
		{
			if (str[counter] < 97 || str[counter] > 122)
			{
				return (0);
			}
		}
		counter++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[] = "ho0las";
	int r =	ft_str_is_alpha(a);
	printf("result: %d", r);
	return (0);
}*/
