#include <stdio.h>
#include <string.h>
int main(){
	char a[100], b[100], c[100], d[100], e[100];
	
	FILE *fr;
	fr = fopen("string.txt","r");
	fgets(a,100,fr);
	fgets(b,100,fr);
	fgets(c,100,fr);
	fgets(d,100,fr);
	fgets(e,100,fr);
	fclose(fr);
	
	FILE *fw;
	fw = fopen("string.out","w");
	fprintf(fw,"length of string a = %d", strlen(a)-1);
	fprintf(fw,"\nlength of string b = %d", strlen(b)-1);
	fprintf(fw,"\nlength of string c = %d", strlen(c)-1);
	fprintf(fw,"\nlength of string d = %d", strlen(d)-1);
	fprintf(fw,"\nlength of string e = %d", strlen(e));
	fclose(fw);
}