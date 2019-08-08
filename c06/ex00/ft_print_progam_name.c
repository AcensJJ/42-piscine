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
	ft_print_program_name(ag[0]);
	return (0);
}
