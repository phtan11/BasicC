#include <stdio.h>
#include <math.h>


void nhapmang(int a[],int n){
    int i;
    for(i = 0;i<n;i++){
        printf("arr[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("\narr[%d] = %d", i,a[i]);
}
bool isprime(int n){ //ktra xem co phai la so nguyen to hay khong!!
    int i;
    if(n<2) return false;
    for(i=2;i<=sqrt(n);i++){
        if(n%i == 0)
        return false;
    }
    return true;
}
int countt(int a[],int n){  //dem so luong nguyen to!
    int count= 0,i;
    for(i=0;i<n;i++){
        if(isprime(a[i]) == true)
        count++;
    }
    return count;
}
void lkSNT(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(isprime(a[i]))
        printf("\narr[%d] = %d", i,a[i]);
    }
}
int main(){
    int arr[100];
    int n;
    printf("nhap so phan tu cua mang :");
    scanf("%d", &n);
    nhapmang(arr,n);
    xuatmang(arr,n);
    printf("\nso luong so nguyen to = %d", countt(arr,n));
    printf("\ndanh sach so nguyen to : ");
    lkSNT(arr,n);
}