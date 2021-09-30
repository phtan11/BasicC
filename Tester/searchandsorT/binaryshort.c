#include <stdio.h>
void printarray(int a[], int n){
    int i;
    for(i=0;i<n;i++)
        printf("arr[%d] = %d   ", i,a[i]);
    printf("\n");
}

void sorting(int a[], int n){
    int temp,min_index,i,j;
    for(i = 0;i< n;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(a[j] < a[min_index]) 
            min_index=j;
        }
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
}

int binarysearch(int a[], int n,int x){
    int first = 0,late = n-1;
    while(first<=late){
        int mid = (first + late)/2;
        if(a[mid] == x) 
        return mid;
        if(a[mid] > x) 
        late = mid -1;
        if(a[mid] < x) 
        first = mid +1;
    }
    return -1;
}
int main(){
    int arr[5] = {15,56,78,12,45};
    int n = 5;
    int x;// x is value can tim`.
    int kq;
    printarray(arr,n);
    printf("after sorting ::");
    printf("\n");
    sorting(arr,n);
    printarray(arr,n);
    printf("nhap gia tri ma ban can search :");
    scanf("%d", &x);
    kq = binarysearch(arr,n,x);
    if(kq == -1) printf("khogn thay gia tri o mang!!");
    else printf("%d is gia tri o mang, phan tu thu %d", x,kq);
}