#include <unistd.h>
#include <stdio.h>

char	global_x_axis;
char	global_y_axis;
char	global_rush_selector;

char	get_middle_character(char y_position)
{
	printf("y_position: %c,  and global_y_axis: %c", y_position, global_y_axis);
	// return space if not at beggining or end of Y axis
	if (y_position > '0')
	{
		printf("middle line");
		return (' ');
	}
	// rush0
	if (global_rush_selector == '0')
	{
		return ('*');
	}
	return ('B');
}

void	line_writer(char first_character, char last_character, char line_length, char y_position)
{
	char	x_counter;
	char	middle_character;

	middle_character = get_middle_character(y_position);	
	write(1, &first_character, 1);
	x_counter = '0';
	if (line_length != '1')
	{
		while (x_counter <= line_length - 3)
		{
			write(1, &middle_character, 1);
			x_counter++;
		}
		write(1, &last_character, 1);
	}
}



int	main(int argc, char **argv)
{
	char	y_count;
	// assign values of global variables
	global_x_axis = *argv[1];
	global_y_axis = *argv[2];
	// if no selector passed assign x char to global_rush_selector
	global_rush_selector = 'x';
	if (argv[3])
	{
		global_rush_selector = *argv[3];
	}
	// write first line
	line_writer('1', '2', global_x_axis, '0');
	write(1, "\n", 1);
	// write middle lines
	y_count = '0';
	while (y_count <= global_y_axis - 3)
	{
		y_count++;
		line_writer('A', 'C', global_x_axis, y_count);
		write(1, "\n", 1);
	}
	// write last line
	if (global_y_axis > '1')
	{
		line_writer('3', '4', global_x_axis, '0');
	}
	return (0);
}
