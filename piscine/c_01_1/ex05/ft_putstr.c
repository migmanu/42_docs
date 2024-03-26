/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:39:11 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/16 12:18:57 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		counter;
	char	b;

	counter = 0;
	while (str[counter] != '\0')
	{
		b = str[counter];
		write(1, &str[counter], 1);
		counter++;
	}	
}
/*
int 	main(void)
{
	char *str = "Hola mundo!";
	ft_putstr(str);
	return (0);
}*/
