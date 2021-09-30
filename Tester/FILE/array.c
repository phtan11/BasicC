#include <stdio.h>

int main(){
    int a[100];
    int n,i;
    int sum=0;

    FILE *fr;
    fr = fopen("ar.txt","r");
    fscanf(fr,"%d", &n);
    for(i = 0;i<n;i++)
    fscanf(fr,"%d", &a[i]);
    fclose(fr);

    for(i =0;i<n;i++)
    sum += a[i];

    FILE *fw;
    fw = fopen("ar.out", "w");
    fprintf(fw,"tong cac gia tri cua mang = %d", sum);
    fclose(fw);
}