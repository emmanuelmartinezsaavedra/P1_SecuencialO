/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 6 de septiembre de 2020, 09:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int x,y;
scanf("%d",&x);
scanf("%d",&y);
x=x+y;
if(x>=0)
x=x;
else
x=-x;
printf("%d",x);

    return (EXIT_SUCCESS);
}

