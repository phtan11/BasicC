#include <stdio.h>
#include <string.h>

typedef struct{
    char name[10];
    int age;
    char sex;
    int birthyear;
}Person_t;
void FileRead(Person_t whoever[],int n,FILE *f){
    int i;
    for(i=0;i<n;i++){
        fscanf(f,"%s %d %c %d",whoever[i].name, &whoever[i].age, &whoever[i].sex, &whoever[i].birthyear);
    }
}
void InputPerson(Person_t whoever[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Enter Person %d:",i+1);
        scanf("%s %d %c %d", whoever[i].name, &whoever[i].age, &whoever[i].sex, &whoever[i].birthyear);
    }
}
void FileWrite(Person_t whoever[],int n,FILE *f){
    int i=0;
    for(i;i<n;i++){
        fprintf(f,"%s %d %c %d\n", whoever[i].name, whoever[i].age,whoever[i].sex, whoever[i].birthyear);
    }
}
void PrintPeople(Person_t whoever[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d:%s %d %c %d\n", i+1, whoever[i].name, whoever[i].age, whoever[i].sex, whoever[i].birthyear);
    }
}
void FindOnePerson(Person_t whoever[],int n){
    char b[100];
    int i;
    printf("nhap ten nguoi can tim:");
    scanf("%s", b);
    printf("/%s/",b);
    for(i=0;i<n;i++){
        if(strcmp(b,whoever[i].name) == 0)
            printf("%s %d %c %d", whoever[i].name, whoever[i].age, whoever[i].sex,whoever[i].birthyear);
    }
}
int main(){
    Person_t whoever[100];
    int n;
    FILE *fr;
    printf("Enter amount for list:");
    scanf("%d", &n);
    // ghi FILE vao people.txt
    fw = fopen("people.txt","w");
    fprintf(fw,"List Including : %d\n",n);
    InputPerson(whoever,n);
    FileWrite(whoever,n,fw);
    fclose(fw);
    FILE *fw;
    // đọc và in ra danh sách các thí sinh.
   fr = fopen("people.txt","r");
   fprintf(fr,"List Including : %d\n",n);
   FileRead(whoever,n,fr);
   PrintPeople(whoever,n);
   fclose(fr);
   //search one person in list person!!
   fr = fopen("people.txt","r");
   fprintf(fr,"List Including : %d\n",n);
   FileRead(whoever,n,fr);
   FindOnePerson(whoever,n);
}