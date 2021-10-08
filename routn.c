/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 12:47:30 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/10/08 12:49:35 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int thread_philo(t_philo *pl)
{
    if (pl->philo == 0)
        return (0);
    pl->thread = malloc(sizeof(pthread_t) * pl->philo);
    pl->forks = malloc(sizeof(pthread_mutex_t ) * pl->philo);
    
}