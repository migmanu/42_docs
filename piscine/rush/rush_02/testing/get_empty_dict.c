char	***get_empty_dict()
{
	int		i;
	int		a;
	char    ***dict;

	dict = (char***)malloc(3 * sizeof(char *));
	a = 0;
	i = 0;
	while (i < 3)
	{
		dict[i] = (int**)malloc(20 * sizeof(char *));
		while (a < 20)
		{
			dict[i][a] = (int*)malloc(100 * sizeof(char));
			a++;
		}
	i++;
	}
}

int	main(void)
{

	return (0);
}
