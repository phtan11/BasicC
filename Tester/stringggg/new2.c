#include<stdio.h>
#include <string.h>
void main(){
	char s[100];
	printf("nhap chuoi :");
	gets(s);
	int i;
	for(i = strlen(s);i>=0;i--){
		printf("%c", s[i]);
	}
}	