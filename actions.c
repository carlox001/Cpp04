/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cazerini <cazerini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:45:31 by cazerini          #+#    #+#             */
/*   Updated: 2025/06/07 16:54:39 by cazerini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*start(void *arg)
{
	t_philo	*philo;
	int		i;

	philo = (t_philo *)arg;
	i = 0;
	if (philo->num_philo % 2 == 0)
		manual_usleep(50);
	while (1)
	{
		pthread_mutex_lock(&philo->data->mod);
		if ((philo->data->num_eat > 0 && i == philo->data->num_eat) || \
		philo->data->death == 1)
			return (pthread_mutex_unlock(&philo->data->mod), NULL);
		pthread_mutex_unlock(&philo->data->mod);
		eating(philo);
		sleeping(philo);
		thinking(philo);
		i++;
		pthread_mutex_lock(&philo->data->mod);
		philo->times_eat++;
		pthread_mutex_unlock(&philo->data->mod);
	}
	return (NULL);
}

void	eating(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->mod);
	if (philo->data->death == 0)
	{
		pthread_mutex_unlock(&philo->data->mod);
		if (philo->num_philo == 1)
		{
			pthread_mutex_lock(&philo->fork);
			pthread_mutex_lock(philo->fork_left);
		}
		else
		{
			pthread_mutex_lock(philo->fork_left);
			pthread_mutex_lock(&philo->fork);
		}
		pthread_mutex_lock(&philo->data->mod);
		eating_action(philo);
	}
	else
		pthread_mutex_unlock(&philo->data->mod);
}

void	eating_action(t_philo *philo)
{
	int	time;

	if (philo->data->death == 0)
		print_eating(philo);
	else
		pthread_mutex_unlock(&philo->data->mod);
	pthread_mutex_lock(&philo->data->mod);
	philo->last_eat = get_time();
	pthread_mutex_unlock(&philo->data->mod);
	pthread_mutex_lock(&philo->data->mod);
	time = philo->data->time_eat;
	pthread_mutex_unlock(&philo->data->mod);
	manual_usleep(time);
	pthread_mutex_unlock(philo->fork_left);
	pthread_mutex_unlock(&philo->fork);
}

void	sleeping(t_philo *philo)
{
	int	time;

	pthread_mutex_lock(&philo->data->mod);
	if (philo->data->death == 0)
	{
		pthread_mutex_unlock(&philo->data->mod);
		pthread_mutex_lock(&philo->data->writing);
		pthread_mutex_lock(&philo->data->mod);
		printf("%lld %d is sleeping\n", get_time() - \
		philo->data->start_time, philo->num_philo);
		pthread_mutex_unlock(&philo->data->mod);
		pthread_mutex_unlock(&philo->data->writing);
		pthread_mutex_lock(&philo->data->mod);
		time = philo->data->time_sleep;
		pthread_mutex_unlock(&philo->data->mod);
		manual_usleep(time);
	}
	else
		pthread_mutex_unlock(&philo->data->mod);
}

void	thinking(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->mod);
	if (philo->data->death == 0)
	{
		pthread_mutex_unlock(&philo->data->mod);
		pthread_mutex_lock(&philo->data->writing);
		pthread_mutex_lock(&philo->data->mod);
		printf("%lld %d is thinking\n", get_time() - \
		philo->data->start_time, philo->num_philo);
		pthread_mutex_unlock(&philo->data->mod);
		pthread_mutex_unlock(&philo->data->writing);
		manual_usleep(1);
	}
	else
		pthread_mutex_unlock(&philo->data->mod);
}
