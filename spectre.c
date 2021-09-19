/*
   Boundary Check Bypass
   Variante de Spectrer
*/

#include <stdio.h>
#include <stdint.h>

#define LINE   256
#define LENGTH  4

unsigned int array_size = 16;
int8_t array1[16] = {1};

unsigned int array2[LINE * LENGTH];

char *secret = "Secret";

int main(){
   // garantir que array2 e array1_size fora da cache
   int x, y;

   do{
      if (x < array_size){
         y = array2[array1[x] * LENGTH];
      }

   }while (1==1);

   return 0;
}