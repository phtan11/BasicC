//đếm các chữ số
/*#include <stdio.h>

int main(){
    int n;
    int count = 0;
    do{
        printf("Enter n :");
        scanf("%d", &n);
    }while(n<=0);
    printf("%d", n);
    while(n > 0){
        n = n/10;
        count++;
    }
    printf("\tco %d chu so", count);
} */



 // tính tổng các chữ số
 /* #include <stdio.h>
int main(){
    int n;
    int tong = 0;
    printf("Enter n :");
    scanf("%d", &n);
    while ( n != 0){
        tong  = tong + (n%10);
        n=n/ 10;
    }
    printf("tong = %d", tong);
} */


//tính tichS CÁC CHỮ số
/*#include <stdio.h>
int main(){
    int n;
    long long tich = 1;
    printf("Enter n : "); scanf("%d", &n);
    while ( n != 0){
        tich = tich*(n%10);
        n/=10;
    }
    printf("tich = %lli", tich);
} */


//tính tổng các số chẵn
 /* #include <stdio.h>

int main (){
    int n ;
    int tong = 0 ;
    printf("Enter n : "); scanf("%d", &n);
    for(int i = 1; i<= n; i ++){
        if(i % 2 == 0){
            tong +=i;
        }
    }
    printf("tong cac even numbers = %d", tong);
} */ 


//tính tổng các số odd
/* #include <stdio.h>

int main (){
    int n ;
    int tong = 0 ;
    printf("Enter n : "); scanf("%d", &n);
    for(int i = 1; i<= n; i ++){
        if(i % 2 != 0){
            tong +=i;
        }
    }
    printf("tong cac even numbers = %d", tong);
} */ 




/* 
//con trỏ trog C
#include <stdio.h>

int main(){
    int a = 2323, *b;
    b = &a;
    printf(" dia chi la %p", b);
}
*/

/* 
// tính tổng các số chãn trog đoạn [a,b] với 0<a < b

#include <stdio.h>

int main(){
    int a, b ;
    int tong = 0;
    do{
        printf("Enter a : ");scanf("%d", &a);
    }while(a <= 0);
    do{
        printf("Enter b : ");scanf("%d", &b);
    }while(b <= a);
    for(int i = a;i<=b;i++){
        if(i % 2 == 0)
            tong +=i;
    }
    printf("tong cac so chan  = %d", tong);
}
*/
/*
#include <stdio.h>
int main(){
    int a, count = 0;
    printf("enter a : ");scanf("%d", &a);
    for(int i = 1;i<=a; i++){
        if(a % i == 0 ){
            count ++;
            printf("\n%d chia het cho %d", a, i);
            
        }
    }
        if(count == 2 ){
           printf("\n%d la SNT", a);
        }
        else{
            printf("\n%d khong la SNT", a);
        }
} */
 /*
//liet ke SNT < 1000
#include <stdio.h>

int main(){
    int count = 0;
    int SNT;
    for(SNT = 1; SNT<=1000 ; SNT++){
        for(int i = 2;i <= (SNT/2) ;i++){
            if( SNT % i == 0)
               count++;
    if(count == 0)
           printf("\n%d", SNT);
        }
    }
}
*/
