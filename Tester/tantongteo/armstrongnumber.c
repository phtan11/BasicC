//liet ke SNT from 1 to n
#include <stdio.h>
#include <math.h>
/* 
int main(){
    int m;//m la thang sinh
    do{
        printf("nhap m:");
        scanf("%d", &m);
    }while(m<1 || m>12);
}
*/
/*  
int main(){
    int n,number;
    int tong = 0;
    printf("nhap n:");scanf("%d", &n);
    int m = n;
    while(m>0){
        number = m%10;
        tong += pow(number,3); 
        m/=10;
    }
    if(tong == n)
    printf("la armstrong!!");
    else 
    printf("not la armstrong!!");
} */ 



//armstrong chuaan nhat ne
// 3 số thì mũ 3... 4 số thì mũ 4.. nhiêu số thì <=> số mũ
// sài kiểu bool

int countdigit(int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}
bool armstrong(int n){
    int sum = 0, m = n, mu = countdigit(n),last;
    while(m > 0){
        last = m%10;
        sum += pow(last,mu);
        m/=10;
    }
    if(sum == n) 
    return true;
    return false;
}
int main(){
    int n;
    printf("nhap n:");scanf("%d", &n);
    if(armstrong(n) == true)
    printf("%d la so armstrong!", n);
    else
    printf("%d khong la so armstrong!", n);
}