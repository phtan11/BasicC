#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    double s = 0;
    printf("nhap x :");scanf("%f", &x);
    printf("nhap y :");scanf("%f", &y);
    s = (3*(float)x*x*x*y - (1/2)*(float)x*x*y + (1/5)*(float)x*y)*6*(float)x*y*y*y;
    printf("s = %.1f", s);
}