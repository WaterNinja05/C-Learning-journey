/*
ID: bbboaz.1
LANG: C
PROG: ride
*/
#include <stdio.h>
#include <stdlib.h>

int main () {
  FILE *fin  = fopen ("ride.in", "r");
  FILE *fout = fopen ("ride.out", "w");

  char temp;

  while (1==1){
    if(fscanf(fin, "%c", &temp) != 0){
      break;
    }
        printf(temp);

  }
  printf("hello");

  char str1[50], str2[50];
  fscanf(fin, "%c[]\n%c", &str1, &str2);
  printf(str1);

  return 0;
}
