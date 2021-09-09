/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdrizzle <rdrizzle@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 16:38:18 by rdrizzle          #+#    #+#             */
/*   Updated: 2021/09/09 16:29:00 by rdrizzle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>

typedef struct s_args
{
	int		nphilo;
	int		dtime;
	int		etime;
	int		stime;
	int		neat;
}			t_args;

typedef struct s_philo_arg
{
	int					id;
	pthread_mutex_t		*mutexes;
	t_args				*args;
}		t_philo_arg;

void	*philo_job(void *arg);

#endif
