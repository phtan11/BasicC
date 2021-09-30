#include <stdio.h>
#include <math.h>
int main(){
    float x , y;//O(x,y)
    printf("nhap x va y :");scanf("%f%f", &x, &y);
    float a, b; //A(a,b)
    printf("nhap a va b :");scanf("%f%f", &a, &b);
    float r;
    printf("nhap ban kinh R :");scanf("%f", &r);
    double d = 0;
    d =(float)sqrt((a-x)*(a-x) + (b-y)*(b-y));
    printf("d = %f\n", d);
    if(d > r){
		printf("diem A nam ngoai duong tron");
	}
	else if(d = r){
		printf("diem A nam tren duong tron");
	}
	else{
		printf("diem A nam trong duong tron");
	}
}