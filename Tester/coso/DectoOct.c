/*
co sô 10( thap phan decimal): vd 1234 = 1*10^3 + 2*10^2 + 3*10^1+4*10^0

co so 8(octimal): vd : 25 = 2*8^1 + 5*8^0 = 21..

*/
// chuyển cơ số 10 sang cơ số 8


//cách chuyển
/* 
vd 100
  4|12 => (100%8)*10^0
  4|1 => (12%8)*10^1
  1|0 => (1%8)*10^2
  

  12->1 => 12/8 = 1

*/
#include <stdio.h>
#include <math.h>

int dectoOct(int N){
    int p = 0, Octimal = 0;
    while(N>0){
        Octimal += (N%8)*pow(10,p);
        p++;
        N /= 8;
    }
    return Octimal;
}

int main(){
    int n;
    printf("nhap n:");scanf("%d", &n);
    printf("\nOctimal = %d", dectoOct(n));
}