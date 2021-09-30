// int a[row][column]; 
// row là số hàng và column là số cột của mảng 2 chiều

/* 
// thao tac nhap xuat mang 2 chieu!!!
#include <stdio.h>
void nhap(int a[][100],int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("arr[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
}
void xuat(int a[][100],int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void xuatnguoc(int a[][100],int &n,int &m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100];
    int n;//n la so hang...
    int m;//m la so cot...
    printf("nhap so hang cua mang 2 chieu:");
    scanf("%d",&n);
    printf("nhap so cot cua mang 2 chieu");
    scanf("%d",&m);
    nhap(a,n,m);
    xuat(a,n,m);
    printf("\nsau khi reverse\n");
    xuatnguoc(a,n,m);
}
/* 
//chuoix
#include <string.h>
int main(){
    char s[100][100];
    int n;
    do{
        printf("nhap so luong sv:");
        scanf("%d", &n);
    }while(n<1);
    for(int i=0;i<n;i++){
    printf("nhap sv %d:",i+1);
    fflush(stdin);
    gets(s[i]); // i ow day duoc hieu nhu la ten cua sv do trong chuoi!!1
    }
    for(int j =0;j<n;j++){
        printf("\nsv %d:%s", j+1,s[j]); //s[j] duoc hieu nhu la ten sinh vien..
    }
} */ 
#include <stdio.h>
void nhap(int a[][100],int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("nhap a[%d][%d] = ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
}
void xuat(int a[][100],int n,int m){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100];
    int n,m;
    printf("nhap so luong hang cot:");
    scanf("%d", &n);
    printf("nhap so hang doc:");
    scanf("%d", &m);
    nhap(a,n,m);
    xuat(a,n,m);
}