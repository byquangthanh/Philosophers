#include "philosophers.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	t_info	info;

	if (ac != 5 && ac != 6)
	{
		printf("Usage: ./program number_of_philosophers time_to_die time_to_eat time_to_sleep [number_of_times_each_philosopher_must_eat]\n");
		return (1);
	}
	if (ac == 5)
		initialize_structure(atoi(av[1]), atoi(av[2]), atoi(av[3]), atoi(av[4]), -1, &info);
	else
		initialize_structure(atoi(av[1]), atoi(av[2]), atoi(av[3]), atoi(av[4]), atoi(av[5]), &info);
	return (0);
}