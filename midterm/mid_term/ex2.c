#include <stdio.h>

int main(){
    int d; // d is chieu dai duongdi
    printf("nhap d :");scanf("%d", &d);
    int tien = 0;
    if(d<=1){
        tien = d*18000;
    }
    if(d>1 && d<=10){
        tien = 1*18 + (d-1)*8000;
    }
    if(d >10 && d<=30){
        tien = 1*18000 + 9*8000 + (d-10)*6000;
    }
    if(d >30){
        tien = 1*18000 + 9*8000 + 20*6000 + (d - 30)*4000;
    }
    printf("so tien = %d", tien);
}