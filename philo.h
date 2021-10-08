/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:10:37 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/10/08 10:34:15 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_philo
{
    int philo;
    int die;
    int eat;
    int sleep;
    int meals;
}   t_philo;
t_philo options;

int			ft_atoi(char *str);


#endif 