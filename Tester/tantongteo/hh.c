 /* //tinh tong cac chu so
 #include <stdio.h>
 int main(){
     int n, tong = 1;
     do{
         printf("enter n :");scanf("%d", &n);
     }while(n <= 0);
     for(int i =1;i<= n; i++){
         tong = tong + (n %10);
         n/=10;
     }
     printf("tong = %d", tong);
 } 

 //tính tích các chữ số
 #include <stdio.h>

 int main(){
     int n;
     long long tich = 1;
     printf("enter n :"); scanf("%d", &n);
     for(int i =1;i<=n;i++){
         tich = tich*(n%10);
         n/=10;
     }
     printf("tich = %lli", tich);
 } 

 // tính tổng các số chẵn
 #include <stdio.h>

 int main(){
     int a, b;
     int tong = 0;
     do{
         printf("Nhap a : ");
         scanf("%d", &a);
     }while(a<= 0 );
     do{
         printf("enter b :");scanf("%d", &b);
     }while(b<=a);
     for (int i = a;i<=b;i++){
         if(i % 2 == 0){
             tong+=i;
         }
    }
    printf("sum odd numbers = %d", tong);
} 

// 
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int count = 0;
    do{
        printf("Nhap a:"); scanf("%d", &a);
    }while(a<= 0);
    for(int i = 1;i<=a;i++){
        if(a % i ==0){
            count++;
        }
    }
    if(count == 2){
        printf("%d la SNT\n", a);
    }
    else{
        printf("%d ko phai la SNT\n", a);
    }
} 

//ktra xem chữ số này có toàn là số chẵn hay khonggg.

#include <stdio.h>
int main(){
    int n;
    do{
        printf ("Enter n: ");
        scanf("%d", &n);
    }while(n<10);
    int last;
    bool alleven = true;
    while(n >= 10){
        last = n%10;
        if(last % 2 == 1){
            alleven = false;
            break;
        }
    } 
    n/=10;
    if(alleven = true){
        printf("toan bo la so chan");
    }
    else
    printf("co so le");
} 

// in các số chẵn từ 1 đến 100
#include <stdio.h>

int main(){
    for(int i = 0; i <= 100; i++){
        if(i % 2 != 0)
        continue;
    }
    printf("%d", i);
} 
*/ 