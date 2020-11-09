#include <stdio.h>

int gauss(int n){

int sum = (n * (n + 1))/2;

return sum;
}

int main(){
int n;


printf("FORMULA DI GAUSS = SOMMA DI TUTTI I NUMERI N PRECEDENTI.\n n:");
scanf("%d", &n);
printf("La somma di tutti i numeri naturali precedenti a %d e' %d", n, gauss(n));

return 0;
}
