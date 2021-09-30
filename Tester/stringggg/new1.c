#include <stdio.h>
#include <string.h>

void main(){
	char s[100];
	printf("nhap chuoi :");
	gets(s);
	int i;
	int dem= 0;
	for(i = 0;s[i] != '\0';i++){
		dem ++;
	}
	printf("do dai chuoi = %d\n", dem);
}
