#include <stdio.h>
void nhapmang(int [], int);
void reverse(int [], int);
void xuatmang(int [], int);
int main(){
    int a[100], n;
    printf("nhap n:");scanf("%d", &n);
    nhapmang(a,n);
    reverse(a,n);
    xuatmang(a,n);
}
void nhapmang(int a[], int N){
    for(int i =0;i<=N;i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void reverse(int a[],int N){
    int c;
    for(int i = 0;i<=N/2;i++){
        c = a[i];
        a[i] = a[N-i];
        a[N-i] = c;
    }
    printf("sau khi reverse :");
}
void xuatmang(int a[], int N){
    for(int i = 0;i<=N;i++)
    printf("\na[%d] = %d ", i,a[i]);
}