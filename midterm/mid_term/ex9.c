#include <stdio.h>
#include <math.h>
int reverse(int);
int perfectnumber(int);
int isdoixung(int);
int SNT(int);
int armstrong(int);
int main(){
    int n;
    do{
        printf("nhap n :");scanf("%d", &n);
    }while(n<=0);
    printf("\nlast reverse : %d", reverse(n));
    perfectnumber(n);
    isdoixung(n);
    SNT(n);
    armstrong(n);
}
int reverse(int N){
    int last = 0;
    while(N>0){
        last = last*10 + N%10;
        N/=10;
    }
    return last;
}
int perfectnumber(int N){
    int tong = 0;
    for(int i = 1;i<=N/2;i++){
        if(N%i == 0)
        tong+=i;
    }
    if(tong == N){
        printf("\n%d la so hoan hao", N);
    }
    else {
    printf("\n%d khong la so hoan hao", N);
    }
    return tong;
}
    int isdoixung(int N){
    int socuoi=0;
    int so = N;
    while(so>0){
        socuoi = socuoi*10 + so%10;
        so/=10;
    }
    if(socuoi == N){
        printf("\n%d la so doi xung", socuoi);
    }
    else{
        printf("\n%d khong la so doi xung", socuoi);
    }
    return socuoi;
}
int SNT(int N){
    int count=0;
    for(int i = 2;i<=sqrt(N);i++){
        if(N%i == 0){
           count++;
        }
        else{
            count =0;
        }
    }
    if(count ==0){
        printf("\n%d la so SNT", N);
    }
    else{
         printf("\n%d khong la so SNT", N);
    }
    return count;
}
int armstrong(int N){
    int m = N;
    int tong= 0,du;
    while(m>0){
        du = m%10;
        tong+=pow(du,3);
        m/=10;   
    }
    if(tong == N){
        printf("\n%d la so armstrong", tong);
    }
    else{
        printf("\n%d is not number armstrong", tong);
    }
    return tong;
}
