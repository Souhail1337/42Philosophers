/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:10:20 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/10/08 10:37:29 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
void error()
{
    printf("Error check ur syntax \n");
    exit(0);
}

t_philo* init(int ac, char **av)
{
    t_philo *ar;
    ar = (t_philo*)malloc(sizeof(t_philo));
    if (!ar)
        exit(0);
    if ((ar->philo = ft_atoi(av[1])) < 0)
        error();    
    if ((ar->die = ft_atoi(av[2])) < 0)
        error();
    if ((ar->eat = ft_atoi(av[3])) < 0)
        error();
    if ((ar->sleep = ft_atoi(av[4])) < 0)
        error();
    if (ac == 6)
    {
        if ((ar->meals = ft_atoi(av[5])) < 0)
            error();
    }
    else
        ar->meals = 0;
    return (ar);
}
 
int main(int ac, char **av)
{
    t_philo *ar;
    if (ac < 5 || ac > 6 )
        error();
    
    ar =  init(ac, av);
    printf("%d , %d , %d , %d \n",ar->philo, ar->die, ar->eat, ar->sleep);
    
}