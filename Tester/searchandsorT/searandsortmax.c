// đưa số lớn nhất ra cuối mảng!!
#include <stdio.h>


void printarray(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("arr[%d] = %d   ", i,a[i]);
    printf("\n");
}
void sapxepmaxnumberlatearray(int a[], int n){
    int temp,i,j;
    for(i = n -2;i>=0;i--){
        for(j =0;j<=i;j++){
            if(a[j] > a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[5] = {15,56,78,12,45};
    int n = 5;
    printarray(arr,n);
    printf("after sort:");
     printf("\n");
    sapxepmaxnumberlatearray(arr,n);
    printarray(arr,n);
}