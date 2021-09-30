/*
co sô 10( thap phan decimal): vd 1234 = 1*10^3 + 2*10^2 + 3*10^1+4*10^0

co so 8(octimal): vd : 25 = 2*8^1 + 5*8^0 = 21..

*/
//  co so 8 sang cơ số 10

//cách chuyển
/*
vd 144 = 4*8^0 + 4*8^1 + 1*8^2 = 100

*/
#include <stdio.h>
#include <math.h>

int OcttoDec(int n){
    int p = 0,Decimal = 0;
    while(n>0){
        Decimal += (n%10)*pow(8,p);
        p++;
        n /=10;
    }
    return Decimal;
}

int main(){
    int n;
    printf("nhap n:");scanf("%d", &n);
    printf("\nDecimal = %d", OcttoDec(n));
}