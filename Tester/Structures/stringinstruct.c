#include <stdio.h>
#include <string.h>

typedef struct{
    char MSSV[10];
    char name[10];
    int age;
    char gender;
    int birthyear;
}SV_t;

void EnterSV(SV_t listSV[],int n){
    int i;
    char b;
    scanf("%c", &b);
    for(i=0;i<n;i++){
        printf("nhap MSSV cho sinh vien %d :",i+1);
        fgets(listSV[i].MSSV,10,stdin);
        printf("nhap name cho sinh vien %d :",i+1);
        fgets(listSV[i].name,10,stdin);
        printf("nhap age cho sinh vien %d :",i+1);
        scanf("%d", &listSV[i].age);
        scanf("%c", &b);
        printf("nhap gender cho sinh vien %d :",i+1);
        scanf("%c", &listSV[i].gender);
        printf("nhap birthyear cho sinh vien %d :",i+1);
        scanf("%d", &listSV[i].birthyear);
        scanf("%c", &b);    
    }
}
 
void outSV(SV_t listSV[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nMSSV %d = %s",i+1, listSV[i].MSSV);
        printf("name %d = %s",i+1, listSV[i].name);
        printf("age %d  = %d",i+1, listSV[i].age);
        printf("\ngender %d = %c",i+1, listSV[i].gender);
        printf("\nbirthyear %d = %d",i+1, listSV[i].birthyear);
    }
}
void findSV(SV_t listSV[],int n,char s[]){
    int i;
    for(i=0;i<n;i++){
        if(strcmp(s,listSV[i].MSSV)==0)
          printf("name = %s", listSV[i].name);
    }
}
int main(){
    SV_t listSV[100];
    int n;
    char s[10];
    printf("nhap so luong sinh vien ma ban muon thong ke?? :");
    scanf("%d", &n);
    EnterSV(listSV,n);
    outSV(listSV,n);
    printf("\nnhap MSSV ma You want find? :");
    fgets(s,10,stdin);
    findSV(listSV,n,s);

}