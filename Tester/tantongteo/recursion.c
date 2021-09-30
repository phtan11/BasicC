#include <stdio.h>
//tinh tong 1+2+3+......+n
int rs1(int n){
    if(n==1)
    return 1;
    else 
    return n+rs1(n-1);
}
// tinh tich 1*2*3*.....*n = n!
int rs2(int n){
    if(n==1)
    return 1;
    else 
    return n*rs2(n-1);
}
// tinh tong 1/1 + 1/2+1/3+....+1/n 
double rs3(int n){
    if(n==1)
    return 1;
    else 
    return 1.0/n + rs3(n-1);
}
// tinh tong 2^n 
int rs4(int n){
    if(n==1)
    return 2;
    else 
    return 2 + 2*rs4(n-1);
}
// tinh tong (x+1)/2 
double rs5(int n){
    if(n==1)
    return 1;
    else 
    return (float)(n+1)/2 + rs5(n-1);
}
// tinh tong  i! / (i-1)!
int GT(int n){
    if(n==1)
    return 1;
    else 
    return n*GT(n-1);
}
double rs6(int n){
    if(n==1)
    return 1;
    else 
    return (float)GT(n)/GT(n-1) + rs6(n-1);
} 
// tinh tong (x*(x-1))
int rs7(int n){
    if(n==1)
    return 0;
    else 
    return n*(n-1) + rs7(n-1);
}
// tinh tong xich ma x
//tinh tong (i! + 1)
int rs8(int n){
    if(n==1)
    return 2;
    else
    return (GT(n) + 1) + rs8(n-1);
}

int main(){
    int n;
    printf("nhap n :");scanf("%d", &n);
    printf("rs1 = %d", rs1(n));
    printf("\nrs2 = %d", rs2(n));
    printf("\nrs3  = %f", rs3(n));
    printf("\nrs4  = %d", rs4(n));
    printf("\nrs5 = %f", rs5(n));
    printf("\nrs6 = %f", rs6(n));
    printf("\nrs7 = %d", rs7(n));
    printf("\nrs8 = %d", rs8(n));
}