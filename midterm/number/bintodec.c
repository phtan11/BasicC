//binary : 1000 
//decimal 1234
#include <stdio.h>
#include <math.h>
//nhớ 1 điều là từ decimal là phải chia theo cột hàng
// còn ngược lại từ binary sang decimal thì lấy số cuối *2^...



// nhij phana sang thap phan ( binary sang decimal)
/*
 cashca chuyen
 1000 = 1*2^3 + 0*2^2 + 0*2^1 + 0*2^0 = 8 decimal



int decimalnumber(long long binary){
    int p=0,dec = 0;
    while(binary > 0){
        dec += (binary%10)*pow(2,p);
        p++; 
        binary /= 10;
    }
    return dec;
}

int main(){
    long long binary;
    printf("enter binary :");
    scanf("%lli", &binary);
    printf("decimal number = %d", decimalnumber(binary));
} 
*/ 

// thap phan sang nhi phan(decimal to binary)
//cach chuyen
/*    8
     0|4 => (8%2)*10^0
     0|2 => (4%2)*10^1
     0|1 => (2%2)*10^2
     1|0 => (1%2)*10^3

     8->4->2->0 la do 8/2 = 4...

*/
long long binarynum(int dec){
    int p=0,bin=0;
    while(dec > 0){
        bin += (dec%2)*pow(10,p);
        p++;
        dec /= 2;
    }
    return bin;
}
int main(){
    int dec;
    printf("enter decimal :");
    scanf("%d", &dec);
    printf("binary number = %lli", binarynum(dec));
} 