/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:30:33 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/20 13:24:54 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[] = "hola MunDO!";
	ft_strupcase(a);
	int counter = 0;
	while (a[counter] != '\0')
	{
		printf("%c", a[counter]);
		counter++;
	}
	return (0);
}*/
