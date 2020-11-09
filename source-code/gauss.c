#include <stdio.h>

int gauss(int n){

  /* formula that calculates the sum with Gauss' method */
  int gauss_sum = (n * (n + 1))/2;

return gauss_sum;
}

int main(){

  int n;

  /* interaction with user */
printf("GAUSS = sum of all numbers before a given n\n(n must be a positive integer).\nn:");
scanf("%d", &n);
printf("\nGauss' Sum:%d  n:%d", gauss(n), n);

return 0;
}
