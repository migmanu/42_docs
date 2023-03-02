/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- jmigoya-@student.42berlin.de      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:33:51 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/21 20:59:34 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	type(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (2);
	}
	if (c >= '0' && c <= '9')
	{
		return (3);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (index == 0 && type(str[0]) == 1)
		{
			str[index] = str[index] - 32;
		}
		else if (type(str[index]) == 1 && type(str[index - 1]) == 0)
		{
			str[index] = str[index] - 32;
		}
		else if (type(str[index]) == 2)
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char string[] = "Ssalut, comment tu vas ? 42mots quarante-deux; cInquante-et-un";
	ft_strcapitalize(string);
	int counter = 0;
	while (string[counter] != '\0')
	{
		printf("%c", string[counter]);
		counter++;
	}
	return(0);
}
