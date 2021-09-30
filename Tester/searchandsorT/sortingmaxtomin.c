#include <stdio.h>

void nhapmang(int a[], int n){
    int i;
    for(i = 0;i<n;i++){
        printf("arr[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[],int n){
    int i;
    for(i = 0;i<n;i++)
        printf("\narr[%d] = %d", i,a[i]);
}
void sortingmaxtomin(int a[], int n){
    int temp,max_index,i,j;
    for(i = 0;i<n;i++){
        max_index = i;
        for(j=i+1;j<n;j++){
            if(a[j] < a[max_index]){
                max_index = j;
            }
            temp = a[j];
            a[j] = a[max_index];
            a[max_index] = temp;
        }
    }
}
int main(){
    int arr[100];
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    nhapmang(arr,n);
    printf("\nafter sort:");
    sortingmaxtomin(arr,n);
    xuatmang(arr,n);
}