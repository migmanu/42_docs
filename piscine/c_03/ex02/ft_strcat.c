/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:48:04 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/22 20:59:47 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The strcat() function appends the src
string to the dest string, overwriting
the terminating null byte ('\0') at the
end of dest, and then adds a terminating
null byte.  The  strings  may not
overlap, and the dest string must have
enough space for the result.
*/

unsigned int	strleng(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;
	unsigned int	index;

	dest_len = strleng(dest);
	index = 0;
	while (src[index] != '\0')
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "bue";
	char	dest[] = "12";
	printf("%s\n", ft_strcat(dest, src) );

	return (0);
}*/
