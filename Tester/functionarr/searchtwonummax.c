#include <stdio.h>

// tim number max second of array

/* 
//C111111

void nhapmang(int [],int);
void xuatmang(int [],int);
void maxtomin(int [],int);
int secondmaxnumber(int [],int);
int main(){
    int arr[100];
    int n;
    printf("Enter n :");
    scanf("%d", &n);
    nhapmang(arr,n);
    xuatmang(arr,n);
    maxtomin(arr,n);
    printf("\nsecond max = %d", secondmaxnumber(arr,n));
}
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
void maxtomin(int a[],int n){
    int temp,i,j;
    for(i =0;i<n;i++){
        for(j = i+1;j<n;j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int secondmaxnumber(int a[],int n){
    return a[1];
}
*/ 

//C22222222:
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

int maxsencond(int a[],int n){
    int firstnum,secondnum,i;
    if(firstnum >secondnum){
        firstnum = a[0];
        secondnum = a[1];
    }
    else{
        firstnum = a[1];
        secondnum = a[0];
    }
    for(i = 2;i<n;i++){
        if(a[i] >= firstnum){
        secondnum = firstnum;
        firstnum = a[i] ;
        }
        else if(a[i] > secondnum){
            secondnum = a[i];
        }
    }
    return secondnum;
}


int main(){
    int arr[100];
    int n;
    printf("enter n:");
    scanf("%d", &n);
    nhapmang(arr,n);
    xuatmang(arr,n);
    printf("\nmaximum number of array = %d",maxsencond(arr,n));
}
