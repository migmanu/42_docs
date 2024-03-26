/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:52:41 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/22 18:48:33 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Reproduce the behavior of the
function strlcat
*/
/*
 - strlcat(char *dst, const char *src, size_t size)
 - strlcat() takes the full size of the buffer,
   not just length (includes nuls).
 - if there is at least one free byte in dst
   after concatenating, strlcat alwats terminates
   dst with null.
 - both src and dst must be nul-terminated
 - it will append at most
   size - length of src - 1 bytes
 - it returns the total length of the string
   it tried to create. This means original
   length of dst + length of src
 - WARNING: if no nul char are find in src
   within the inputed size, dst wont be
   nul-terminated.
*/

unsigned int	strleng(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	index;

	dest_len = strleng(dest);
	src_len = strleng(src);
	index = 0;
	while (src[index] != '\0' && index < size - dest_len - 1)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	if (size < src_len)
		return (size + src_len);
	dest[dest_len + index] = '\0';
	return (dest_len + src_len);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char	src[] = "abcd";
	char	dest[] = "123";
	unsigned int	size = 8;
	char	src2[] = "abcd";
	char	dest2[] = "123";

	//ft_strlcat(dest, src, size);
	printf("original:%s\n%zu\n", dest, strlcat(dest, src, size));
	printf("my  copy:%s\n%u", dest, ft_strlcat(dest2, src2, size));

	return (0);
}*/
