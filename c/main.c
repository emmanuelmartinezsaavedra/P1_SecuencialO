/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 6 de septiembre de 2020, 09:27 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
     int A,B,C,D,H,M;
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&C);
  scanf("%d",&D);
  H=C-A;
  M=D-B;
  if(M<0){
    H--;
    M=60+M;
  }
  printf("%d\n",H);
  printf("%d\n",M);
    

    return (EXIT_SUCCESS);
}

