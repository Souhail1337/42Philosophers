/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fcht <sel-fcht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:10:20 by sel-fcht          #+#    #+#             */
/*   Updated: 2021/09/27 15:19:33 by sel-fcht         ###   ########.fr       */
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