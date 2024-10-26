/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sixshooterx <sixshooterx@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:16:06 by sixshooterx       #+#    #+#             */
/*   Updated: 2024/09/24 13:12:00 by sixshooterx      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

/*
Each philosopher has a fork, philosopher can eat with two forks only
philosopher can sleep, eat and think
make sure that philosophers don't die
We have two types of multithreaded programs - concurrent (this switches between two functions) and parallel (this executes all functions silmutaeously)

*/

int	main(int ac, char *av[])
{
	t_info	info;

	if (ac != 4 || ac != 5)
		printf("This is how you start the program: ./program number_of_philosophers, time_to_die, time_to_eat, time_to_sleep, optional number_of_times_each_philosopher_must_eat");
	if (ac == 4)
		initialize_structure(av[1], av[2], av[3], av[4], av[5], &info);
	else
		initialize_structure(av[1], av[2], av[3], av[4], av[5], &info);
}

void	initialize_structure(int number_of_philosophers, int time_to_die,
	int time_to_eat, int time_to_sleep,
	int number_of_times_each_philosopher_must_eat, t_info *info)
{
	info->number_of_philosophers = number_of_philosophers;
	info->time_to_die = time_to_die;
	info->time_to_eat = time_to_eat;
	info->time_to_sleep = time_to_sleep;
	info->number_of_times_each_philosopher_must_eat
		= number_of_times_each_philosopher_must_eat;
}

void	start_program(int number_of_philosophers)
{
	
}
