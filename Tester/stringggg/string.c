#include <stdio.h>
#include <string.h>
/*
int main(){
    char s[100];
    printf("nhap chuoi :");
    gets(s);
    // reverse chuoi da nhap 
    for(int j = strlen(s); j>=0;j--){
        printf("%c", s[j]);
    }
    int count=0; //ddem do dai chuoi da cho
    for(int i = 0;s[i] != '\0';i++){
        count++;
    }
    printf("\ndo dai cua chuoi la = %d ", count);
}

int main(){
    char s[100];
    printf("nhap chuoi :");
    gets(s);
    int i,j,k,f;
    // ho 
    printf("\nho:");
    for(i = 0;s[i] != ' ';i++){
        printf("%c", s[i]);
    }
    printf("\nten:");
    for(j = strlen(s); s[j] != ' ' ; j--){
    }
    for(k = j+1 ; s[k] != '\0'; k++){
        printf("%c", s[k]);
    }
    printf("\nho lot:");
    for(f = i+1;s[f] != ' ';f++){
        printf("%c", s[f]);
    }
}
*/ 
int main(){
    char s[100];
    printf("nhap chuoi :");
    gets(s);
    int i;
    int count = 0;
    for(i= 0 ; s[i] != '\0' ; i++){
        if(s[i] != ' ')
        s[count] = s[i];
        printf("%c", s[i]);
    }
    s[count] = '\0';
}
