/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmigoya- <jmigoya-@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 19:09:32 by jmigoya-          #+#    #+#             */
/*   Updated: 2023/02/27 19:33:59 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	if (power > 0)
	{
		result *= nb;
		result *= ft_recursive_power(nb, power - 1);
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(0, 0));
	return (0);
}*/
