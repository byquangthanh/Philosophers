/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: quanguye <quanguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:16:50 by quanguye          #+#    #+#             */
/*   Updated: 2024/10/26 16:44:43 by quanguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdbool.h>
# include <limits.h>
# include <pthread.h>

typedef struct info
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;
}	t_info;

void	print_something(void);
void	initialize_structure(int number_of_philosophers, int time_to_die,
			int time_to_eat, int time_to_sleep,
			int number_of_times_each_philosopher_must_eat,
			t_info *info);

#endif
