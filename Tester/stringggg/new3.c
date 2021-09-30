#include <stdio.h>
#include<string.h>
void main(){
	char s[100];
	printf("nhap chuoi :");
	gets(s);
	printf("ho :");
	int i;
	for(i=0;s[i] != ' ';i++){
		printf("%c", s[i]);
	}
	printf("\nten :");
	int j,f;
	for(j = strlen(s);s[j] != ' ' ;j--){
	}
	for(f = j +1 ; f <strlen(s);f++){
		printf("%c", s[f]);
	}
	printf("\nho lot :");
	for (int k = i + 1;k < j;k++){
	printf("%c",s[k]);
	}
	
}