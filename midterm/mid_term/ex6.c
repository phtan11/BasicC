#include <stdio.h>
#include <math.h>
int main(){
float x;
printf("nhap x :");scanf("%f", &x);
double fx = 0;
if(x < 0){
    fx = (float)sin(x)*cos(5*x);
}
if(x == 0){
    fx = (float)pow(5,x);
}
if(x > 0 && x < 5){
    fx = (float)exp(x);
}
if(x >= 5){
    fx = (float)pow(5,x)/(x+5);
}
printf("fx = %.2f", fx);
}