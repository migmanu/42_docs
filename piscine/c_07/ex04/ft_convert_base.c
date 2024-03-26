/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:14:11 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/03/02 12:51:30 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
//#include "ft_convert_base2.c"

int		getlen(char *str);
int		c_check(char c, char *base);
char	*get_nbr(char *nbr, char *base, int i, int sign);
char	*clean_nbr(char *nbr, char *base);
int		check_base(char *base);

int	power(int nb, int power)
{
	int	result;

	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int	cnbr_to_dec(char *cnbr, char *base_from)
{
	int	base_len;
	int	result;
	int	i_base;
	int	i_cnbr;

	if (cnbr[0] == '-')
		cnbr++;
	base_len = getlen(base_from);
	result = 0;
	i_base = getlen(cnbr) - 1;
	i_cnbr = 0;
	while (i_base >= 0)
	{
		while (base_from[i_cnbr] != cnbr[i_base])
			i_cnbr++;
		result += (power(base_len, (getlen(cnbr) - i_base - 1))) * i_cnbr;
		i_cnbr = 0;
		i_base--;
	}
	return (result);
}
/*
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	char	*cnbr;
	int		dec;

	// check_base();
	cnbr = clean_nbr(nbr, base_from);
	dec = cnbr_to_dec(cnbr, base_from);
	if (cnbr[0] == '-')
		dec *= -1;
}
*/
/*
int	main(void)
{
	char base[] = "0123456789ABCDEF";
	char nbr[] = "--+++++++   - AB   -	 --";
	char cnbr[] = "-A";
	//printf("%s", clean_nbr(nbr, base));
	//printf("%d", check_base(base));
	printf("%d", cnbr_to_dec(cnbr, base));
	return (0);
}*/
