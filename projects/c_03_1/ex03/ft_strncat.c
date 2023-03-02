/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 11:27:15 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/22 21:03:19 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Reproduce the behavior of the
function strncat (man strncat)
*/
/*
The strncat() function is similar, except that
 - it will use at most n bytes from src; and
 - src does not need to be null-terminated
   if it contains n or more bytes.
As with strcat(), the resulting string in
dest is always null-terminated.
If  src contains n or more bytes, strncat()
writes n+1 bytes to dest (n from src plus the
terminating null byte).  Therefore,the size
of dest must be at least strlen(dest)+n+1.
*/

unsigned int	strleng(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	index;

	dest_len = strleng(dest);
	index = 0;
	while (src[index] != '\0' && index < nb)
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
	char	src[] = " mundo!";
	char	dest[] = "ho";
	unsigned int	size = 6;

	strncat(dest, src, size);
	//ft_strncat(dest, src, size);
	printf("%s\n", dest);

	return (0);
}*/
