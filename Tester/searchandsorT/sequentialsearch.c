// timf kiem tuần tự
#include <stdio.h>
void printarray(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("arr[%d] = %d   ", i,a[i]);
    printf("\n");
}
int sequentialsearch(int a[], int n,int x){
    int i = 0;
    for(i;i<n;i++){
        if(a[i] == x)
        return i;
    }
    return -1;
}
int main(){
    int arr[5] = {15,56,78,12,45};
    int n = 5;
    int x;// x is value can tim`.
    int kq;
    printarray(arr,n);
    printf("nhap gia tri ma ban can search :");
    scanf("%d", &x);
    kq=sequentialsearch(arr,n,x);
    if(kq == -1) printf("khogn thay gia tri o mang!!");
    else printf("%d is gia tri o mang, phan tu thu %d", x,kq);
}