/*
nhị phân : 1110 = 1*2^3 + 1*2^2 + 1*2^1 + 0*2^0 = 14(decimal)...
thập phân : 1234 = 1*10^3 + 2*10^2 + 3*10^1 + 4*10^0.
*/

#include <stdio.h>
#include <math.h>





// nhị phân sang thập phân


int bintodec(long long binary){
    int p = 0,decimal = 0;
    while(binary > 0){
        decimal += (binary%10)*pow(2,p);
        p++;
        binary/=10;
    }
    return decimal ;
}

int main(){
    long long binary;
    printf("nhap so nhi phan :");
    scanf("%lli", &binary);
    printf("decimal = %d", bintodec(binary));
}




//thập phân sang nhị phân   (decimal sang binary)..

/*
thập phân 8 = 

      8
    0 | 4 => (8%2)*10^0
    0 | 2 => (4%2)*10^1
    0 | 1 => (2%2)*10^2
    1 | 0 => (1%2)*10^3
xog lấy ngược từ dưới leennn


*/

long long dectobin(int decimal){
    int p=0,binary = 0;
    while(decimal >0){
        binary += (decimal%2)*pow(10,p);
        p++;
        decimal/=2;
    }
    return binary;
}

int main(){
    int decimal;
    printf("nhap so thap phan :");
    scanf("%d", &decimal);
    printf("%lli", dectobin(decimal));
}
