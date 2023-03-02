/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwilke <dwilke@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 22:27:03 by dwilke            #+#    #+#             */
/*   Updated: 2023/02/12 20:59:38 by jmigoya-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	ft_str_is_numeric(char *string)
{
	int	char_pos;

	char_pos = 0;
	while (string[char_pos] != '\0')
	{
		if (string[char_pos] >= '0' && string[char_pos] <= '9')
		{
			char_pos++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	get_strlen(char *string)
{
	int	char_pos;

	char_pos = 0;
	while (string[char_pos] != '\0')
	{
		char_pos++;
	}
	return (char_pos);
}

int	string_to_int(char *string)
{
	int	length;
	int	multiplier;
	int	result;

	length = get_strlen(string);
	result = 0;
	multiplier = 1;
	if (ft_str_is_numeric(string) != 1)
	{
		return (0);
	}
	while (length > 0)
	{
		result += (string[length - 1] - '0') * multiplier;
		multiplier *= 10;
		length--;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	column;
	int	line;

	if (argc == 3)
	{
		column = string_to_int(argv[1]);
		line = string_to_int(argv[2]);
		if (line == 0 || column == 0)
		{
			write(1, "Argument with negative or non numeric value\n", 44);
			return (0);
		}
		rush(column, line);
	}
	else if (argc == 2 || argc > 3)
	{
		write(1, "Wrong number of parameters!!!", 29);
		return (0);
	}
	else
	{
		rush(6, 6);
	}
	return (0);
}
