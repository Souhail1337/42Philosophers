/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:10:20 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/09/27 15:40:49 by sel-fcht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "philosophers.h"
#include<unistd.h>
#include <stdlib.h>
 
int main()
{
    //TODO:
    // mutex and pthreads
    //forks process 
    // deadlock concept
    // each philo is a thread
    //protect forks with a mutex to avoid duplicating forks
    //every philo is a process | fork ->shared resource 
    





    //consider we have 5 philo
    // first case : philo nbr 1 is eating : 
    //if philo nbr 1 is eating 
    // philo nbr 2 either sleeping or thinking
    //philo nbr 3 either eating or sleeping or thinking
    //if philo nbr 3 is eating 
    // philo nbr 4 either is sleeping or thinking 
    // if philo nbr 3 is not eating 
    // philo nbr 4 either eating or sleeping or thinking 
    // philo nbr 5 either sleeping or thinking 
    // zbi


    //philo nbr 1 eating == philo nbr 3 or philo nbr 4 is eating
    // "same logic" philo nbr 2 == philo nbr 4 or philo nbr 5
    //philo nbr 3 == philo nbr 5 or philo nbr 1
    // philo nbr 4 == philo nbr 1 or philo nbr 2
    //philo nbr 5 == philo nbr 2 or philo nbr 3;
    //fiirst in first server 
    // philo 1 is eating == philo 3 is eating 
    //philo 2 4 and 5 either sleeping or thinking


    
    //P1->P3->P5->P2->P4->P1->P3->P5->P2->P4....
   while(1)
   {
       printf("fist philo is thinking \n");
       sleep(1);
       printf("philo is sleeping\n");
       sleep(1);
       printf("philo is eating \n");
       sleep(1);
       printf("kifash andir lhadshi ?\n");
       usleep(200);
   }
}