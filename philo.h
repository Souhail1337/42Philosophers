/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:10:37 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/10/08 11:39:43 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>


typedef struct s_philo
{
    int philo;
    int die;
    int eat;
    int sleep;
    int meals;
    pthread_t *thread;
    pthread_mutex_t *forks;
    pthread_mutex_t print;
    int *eating;
    
}   t_philo;
t_philo options;

// typedef struct s_parameters
// {
//     int num_of_philo;
//     int right_fork;
//     int left_fork;
    
    
// };

int			ft_atoi(char *str);


#endif 