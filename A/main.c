/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 6 de septiembre de 2020, 09:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int A,B,C,X,Y,Z;
scanf("%d %d %d %d %d %d",&A,&B,&C,&X,&Y,&Z);
if((A*B*C)<=(X*Y*Z))
A=1;
else
A=0;
printf("%d", A);

    return (EXIT_SUCCESS);
}

