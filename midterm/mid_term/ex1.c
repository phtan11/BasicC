#include <stdio.h>

int main(){
    int h; // h la gio work
    int m;//m la tien tieu
    printf("nhap h :");scanf("%d", &h);
    printf("nhap m :");scanf("%d", &m);
    int tien = 0;
    if(h <= 40)
    tien = h*m;
    if(h>40 && h <= 45)
    tien = 40*m + (h-40)*m*1.8;
    if(h>45 && h<=50)
    tien = 40*m + 5*1.8*m + 2.5*m*(h-45);
    if(h>50)
    tien = 40*m + 5*1.8*m + 5*2.5*m + (h-50)*2.6*m;
    printf("tong so tien ma nhan vien  thu nhap trong tuan = %d", tien);
}
