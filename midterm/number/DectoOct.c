// decimal sang Oct 
// decimal: 123 = 1*10^2 + 2*10^1 + 3*10^0 
// Oct(co so 8): 123 = 1*8^2 + 2*8^1 + 3*8^0.
//cach chuyen
/*  100
    4|12 => (100%8)*10^0
    4|1 => (12%8)*10^1
    1|0 => (1%8)*10^2

    100=>12=>1=>0 la 100 / 8 = 12..
*/



// nhớ 1 điều là từ decimal(thập phân) sang Oct(number cơ số 8) thì nhớ kẻ cột
//còn từ Oct(cơ số 8) sang decimal(thập phân) thì lấy số cuối *8^....
#include <stdio.h>
#include <math.h>


// dec to Oct...
/*
int Octnumber(int dec){
    int p = 0, Oct = 0;
    while(dec > 0){
        Oct += (dec%8)*pow(10,p);
        p++;
        dec /= 8;
    }
    return Oct;
}
int main(){
    int dec;
    printf("enter decimal : ");
    scanf("%d", &dec);
    printf("Oct number  = %d", Octnumber(dec));
}
*/


// Oct to Dec..
/* cách chuyển
144 = 1*8^2 + 4*8^1 + 4*8^0 = 100(decimal)!!!
*/
int Decimalnumber(int Oct){
    int p=0, Dec = 0;
    while(Oct > 0){
        Dec += (Oct%10)*pow(8,p);
        p++;
        Oct/=10;
    }
    return Dec;
}

int main(){
    int oct;
    printf("Enter Oct :");
    scanf("%d", &oct);
    printf("Decimal number = %d", Decimalnumber(oct));
}
