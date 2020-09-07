/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 6 de septiembre de 2020, 09:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(a<b)
    a=b;
  if(a<c)
    a=c;
 
  printf("El numero mayor es %d",a);

    return (EXIT_SUCCESS);
}

