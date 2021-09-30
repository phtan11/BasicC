#include <stdio.h>
int nhapmang(int [], int);
void xoavalueofarray(int [], int);
int xuatmang(int [], int);
int main(){
    int n,a[100];
    printf("nhap n :");scanf("%d", &n);
    nhapmang(a,n);
    xoavalueofarray(a,n);
    n--;
    xuatmang(a,n);
}
int nhapmang(int a[], int N){
    for(int i = 0;i<=N;i++){
        printf("nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xoavalueofarray(int a[], int N){
    for(int i =0;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            if(a[i] == a[j]){
                for(int k = j;k<=N;k++){
                    a[k] = a[k+1]; // dồn lên.
                }
                j--;
            }
        }
    }
    printf("\n array element after deleting duplicate :");
}



int xuatmang(int a[], int N){
    printf("all value of array :");
    for(int i = 0;i<=N;i++){
        printf("\na[%d] = %d", i, a[i]);
    }
}