#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("nhap do dai canh a :");scanf("%d", &a);
    printf("nhap do dai canh b :");scanf("%d", &b);
    printf("nhap do dai canh c :");scanf("%d", &c);
    double chuvi = 0;
    double dientich = 0;
    double h;//h is chieucao
    double p = 0;//p is nua chuvitamgiac
    p = 0.5*(a+b+c);
    if((a+b) > c && (b+c)>a && (c+a)>b && a >0 && b>0 && c > 0){
    if((a==b) && (b==c) && c==a){
        chuvi = a*b*c;
        dientich = ((float)a*a*sqrt(3))/4;
    }
    if(a==b){
        chuvi = 2*a + c;
        h = (float)c/2;
        dientich = (float)a*h;
    }
    if( b==c){
        chuvi = 2*b + a;
        h = (float)a/2;
        dientich = (float)b*h;
    }
    if(a==c){
        chuvi = 2*a + b ;
        h = (float)b/2;
        dientich = (float)c*h;
    }
    if((a != b) && (b != c) && (c != a)){
        chuvi = a + b + c;
        dientich = sqrt(p*(p-a)*(p-b)*(p-c));
    }
    printf("chu vi tam giac = %f\n", chuvi);
    printf("dien tich tam giac = %f\n", dientich);
    //c)
    if((a==b) && (b==c)){
        printf("\ntam giac deu");
    }
    if((a==b) || (b==c) || (c==a)) {
        printf("\ntam giac can");
    }
    if((a != b) && (b != c) && (c != a)){
        printf("\ntam giac thuong");
    }
    }
    else {
        printf("tam giac loi!!");
    }
}