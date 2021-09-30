/* 
//hàm và tìm max trong 3 số
#include <stdio.h>
int sosanh(int a, int b);
int sosanh5so(int a, int b, int c, int d, int e);
int main(){
    int x,y,z,k,m;
    printf("enter x y z k m");scanf("%d%d%d%d%d", &x, &y, &z, &k, &m);
    printf("max = %d", sosanh5so(x,y,z,k,m));
}
int sosanh(int a, int b){
    if(a>b)
    return a;
    return b;
}
int sosanh5so(int a, int b, int c, int d, int e){
    int max;
    max = sosanh(a,b);
    max = sosanh(max,c);
    max = sosanh(max,d);
    max = sosanh(max,e);
    return max;
}
//tính tổng các số chẵn
#include <stdio.h>
int sumeven(int a);
int main(){
    int n;
    do{
        printf("enter n:  "); scanf("%d", &n);
    }while(n<=0);
    printf("sum = %d", sumeven(n));
}
int sumeven(int a){
    int tong =0;
    for(int i = 1; i<=a; i++){
        if(i % 2 ==0)
        tong+=i;
    }
    return tong;
}

//lập bảng cửu chương
#include <stdio.h>
void table(int a);
int main(){
    int n;
    do{
        printf("Enter n : ");scanf("%d", &n);
    }while(n<=0);
    table(n);
}
void table(int a){
    printf("bang cuu chuong %d\n", a);
    for(int i = 1;i<=10;i++){
        printf("%d x %d = %d\n", a, i, (a*i));
    }
}


//tính tổng các số nguyên lớn hơn 0
#include <stdio.h>
int sumSN(int a);
int main(){
    int n;
    do{
        printf("enter n :");scanf("%d", &n);
    }while(n<=0);
    printf("tong = %d", sumSN(n));
}
int sumSN(int a){
    int tong;
    for(int i =1;i<=a;i++){
        tong+=i;
    }
    return tong;
} 

//liệt kê số đầu và số cuối khi nhập n=
#include <stdio.h>

int lk(int a);
int main(){
    int n;
    do{
    printf("enter n : "); scanf("%d", &n);
    }while(n<=9);
    lk(n);
    
}
int lk(int a){
    int firstdigit, latedigit;
     firstdigit = a;
    while(firstdigit >= 10){
        firstdigit=firstdigit / 10;
    } printf("firstdigit equal  %d\n", firstdigit);
    latedigit = a % 10;
    printf("lastdigits equal %d\n", latedigit);
}


//nhập 1 số là ktra xem nó có phỉa là SNT hay không??
#include <stdio.h>
int SNT(int a);
int main(){
    int n;
    do{
        printf("enter n :");scanf("%d", &n);
    }while(n<=0);
    SNT(n);
}
int SNT(int a){
    int count = 0;
    for(int i =1;i<= a; i++){
        if(a % i == 0){
        count++;
        printf("\n%d chia het cho %d", a, i);
        }
    }if(count == 2){
        printf("\n%d la SNT", a);
    }
    else{
        printf("\n%d khong phai la so ngyen to", a);
    }
    return a;
} 

//tính tổng các số khi enter vào
#include <stdio.h>
int tich(int a);
int main(){
    int n;
    do{
        printf("Enter n : ");scanf("%d", &n);
    }while(n<=0);
    tich(n);
}
int tich(int a){
    long long tich =1  ;
    while(a != 0){
        tich = tich * (a % 10);
        a/=10;
    }
    printf("tich cac so = %lli", tich);
} 

// ktra xem a có bao nhiêu chữu số
#include <stdio.h>

int dem(int a);
int main(){
    int n;
    printf("enter n :");scanf("%d", &n);
    dem(n);
}
int dem(int a){
    int count = 0;
    while(a>0){
        a =a/10;
        count++;
    }printf("%d co %d chu so",a, count);
}
*/ 

#include <stdio.h>

int number(int);
int main(){
    int n;
    printf("enter n :"); scanf("%d", n);
    number(n);
}
int number(int a){
    int first;
    first = a;
    while(first > 9){
        first /= 10;
    }
    printf("so dau = %d",first);
}