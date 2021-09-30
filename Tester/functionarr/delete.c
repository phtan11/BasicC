#include <stdio.h>
void nhapmang(int [], int);
void del(int[], int, int);
void xuatmang(int [], int);
int main(){
    int a[100], n, x;
    printf("nhap n:");scanf("%d", &n);
    printf("nhap x:");scanf("%d", &x);
    nhapmang(a,n);
    del(a,n,x);
    n--;
    xuatmang(a,n);
}
void nhapmang(int a[], int N){
    for(int i =0;i<=N;i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void del(int a[], int N,int x){
    for(int i = 0;i<=N;i++){
        if(i == x-1 ){ //xoa 1 ptu off array
            for(int j = i;j<=N;j++)
                a[j] = a[j+1];
        }
    }
}
void xuatmang(int a[], int N){
    for(int i = 0;i<=N;i++)
    printf("\na[%d] = %d ", i,a[i]);
}