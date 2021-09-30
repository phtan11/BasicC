// sắp xếp từ bé đến lớn
#include <stdio.h>
void printarray(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("arr[%d] = %d   ", i,a[i]);
    printf("\n");
}
void selectionsort(int a[], int n){
    int temp,min_index,i,j;
    for(i=0;i<n;i++){
        min_index = i;
        for(j = i+1;j<n;j++)
            if(a[min_index] > a[j]) min_index = j;
            temp = a[min_index];
            a[min_index] = a[i];
            a[i] = temp;
    }
}
int main(){
    int arr[5] = {15,56,78,12,45};
    int n = 5;
    printarray(arr,n);
    printf("after sort :");
    printf("\n");
    selectionsort(arr,n);
    printarray(arr,n);
}


