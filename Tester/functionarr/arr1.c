#include <stdio.h>
void nhapmang(int [], int);
void xuatmang(int [], int);
int max(int[], int);
int minium(int [], int);
int sumallvalueinarr(int [], int);
int sumsoam(int [], int);
int sumeven(int [], int);
void lkeven(int [], int);
void lkodd(int [], int);
int dem(int [], int);
int main(){
    int n;
    int a[100];
    printf("nhap n :");scanf("%d", &n);
    nhapmang(a, n);
    printf("\nValue of array :");
    xuatmang(a, n);
    printf("\nmax is %d", max(a,n));
    printf("\nmim  is %d", minium(a,n));
    printf("\nsum is %d", sumallvalueinarr(a,n));
    printf("\nsumsoam is %d", sumsoam(a,n));
    printf("\nsum so  chan is %d", sumeven(a,n));
    lkeven(a,n);
    lkodd(a,n);
    dem(a,n);
    }
void nhapmang(int a[], int N){
    for(int i =0;i<=N;i++){
        printf("nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void xuatmang(int a[], int N){
    for(int i = 0;i<=N;i++){
        printf("\na[%d] = %d", i,a[i]);
    }
}
int max(int a[], int N){
    int max = a[0];
    for(int i = 0;i<=N;i++){
        if(max < a[i])
            max = a[i];
    }
    return max;
}
int minium(int a[],int N){
    int mini = a[0];
    for(int i = 0;i<=N;i++){
        if(mini > a[i])
        mini = a[i];
    }
    return mini;
}
int sumallvalueinarr(int a[], int N){
    int sum = 0;
    for(int i = 0 ;i<=N;i++){
        sum+=a[i];
    }
    return sum;
}
int sumsoam(int a[], int N){
    int tongam = 0;
    for(int i = 0;i<=N;i++){
        if(a[i] < 0)
        tongam+= a[i];
    }
    return tongam;
}
int sumeven(int a[], int N){
    int tong = 0;
    for(int i = 0;i<= N;i++){
        if(a[i] % 2 == 0)
        tong+=a[i];
    }
    return tong;
}
void lkeven(int a[], int N){
    for(int  i  = 0 ; i<=N;i++){
        if(a[i] % 2 == 0)
            printf("\ncac so chan is %d", a[i]);
    }
}
void lkodd(int a[], int N){
    for(int i =0;i<=N;i++){
        if(a[i] % 2 != 0)
        printf("\nall odd is %d", a[i]);
    }
}
int dem(int a[], int N){
    int count =0;
    for(int i = 0;i<=N; i++){
        for(int j = i + 1;j<=N;j++){ // xets tuwf a[0] of i, xet a[1] of j
            if(a[i] == a[j])
                count++;
        }
    }
    printf("\nCOUNT PHAN TU TRUNG NHAU %d", count);
    return count;
}