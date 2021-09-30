#include <stdio.h>
#include <math.h>
int main(){
    short int n;
    double s1 = 0 ,s2 = 0,s3 = 0, s4 = 0, s5 = 0;
    do{
        printf("nhap n:");scanf("%hd", &n);
    }while(n<= 0);
    for(int i = 1;i<=n;i++){
        s1+= (float)(i+1)/sqrt(i);
        s2+=i;
        s3+= 1.0/i;
        s4*= i;
        s5+= pow(-1.0,i)/i;
    }
    printf("s1 = %.4Lf,   s2 = %.4Lf,  s3 = %.4Lf,  s4 = %.4Lf,   s5 = %.4Lf", s1,s2,s3,s4,s5);
}