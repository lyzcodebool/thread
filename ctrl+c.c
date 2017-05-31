/*************************************************************************
	> File Name: ctrl+c.c
	> Author: 
	> Mail: 
	> Created Time: Mon 29 May 2017 07:52:23 PM PDT
 ************************************************************************/

#include<stdio.h>
/* A C program that does not terminate when Ctrl+C is pressed */
#include <stdio.h>
#include <signal.h>
 
/* Signal Handler for SIGINT */
void sigintHandler(int sig_num)
{
    /* Reset handler to catch SIGINT next time.
       Refer http://en.cppreference.com/w/c/program/signal */
    signal(SIGINT, sigintHandler);
    printf("\n Cannot be terminated using Ctrl+C \n");
    printf("%d", sig_num);
    fflush(stdout);
}
 
int main ()
{
    /* Set the SIGINT (Ctrl-C) signal handler to sigintHandler 
       Refer http://en.cppreference.com/w/c/program/signal */
    signal(SIGINT, sigintHandler);
 
    /* Infinite loop */
    while(1)
    {        
    }
    return 0;
}
