/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:01:34 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/20 13:26:01 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[] = "hoLa MunDO!";
	ft_strlowcase(a);
	int counter = 0;
	while (a[counter] != '\0')
	{
		printf("%c", a[counter]);
		counter++;
	}
	return (0);
}*/
