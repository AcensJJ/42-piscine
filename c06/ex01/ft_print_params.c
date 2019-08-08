#include <unistd.h>

void	ft_print_program_name(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **ag)
{
	int i;

	i = 1;
	while (i != ac)
	{
		ft_print_program_name(ag[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
