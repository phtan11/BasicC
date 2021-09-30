#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int FileReadd(int *hp, int *d, int *s, char t[])
{
	FILE *fr;
	fr = fopen("input.inp","r");
	fscanf(fr,"%d %d %d %s", hp,d,s,t);
	fclose(fr);
	return 1;
}
void FileWritee(float p)
{
	FILE *fw;
    fw = fopen("output.out","w");
    fprintf(fw,"%.3f", p);
    fclose(fw);
}
int ktraSNT(int m){
	int countt=0,j;
	if(m<2) countt=0;
	for(j=2;j<=sqrt(m);j++){
		if(m % j == 0){
			countt++;
		}
	}
	return countt;
}
 int Trianum(int number){
	int T=0,k;
	for(k=1;k<= number;k++){
		T += k;
	}
	return T;
}
float gss(int s){
    if(s%6==5){ 
	int x = ((s%5) + 5);
    return -Trianum(x); }
    if(s%6 == 4) 
    return -s;
    if(s%6 == 0) 
    return (float)s/2;
    if(s%6 == 1) 
    return 2*s;
    if(s%6 == 2)
    return -(float)pow((s%9),3)/5;
    if(s%6 == 3) 
    return -pow((s%30),2)+3*s ;
}
float ptt(int s, char t[]){
	if(s%6==5){ 
		if(strcmp(t,"Flood") == 0) 
		return 0;
		if(strcmp(t,"Storm") == 0)
		return 0.05;
		if(strcmp(t,"Rain") == 0) 
		return 0.1;
		if(strcmp(t,"Shower") == 0) 
		return 0.15;
		if(strcmp(t,"Drizzle") == 0) 
		return 0.2;
		if(strcmp(t,"Cloudy") == 0) 
		return 0.25;
	}
	if(s%6 == 4){ 
		if(strcmp(t,"Flood") == 0) 
		return -0.05;
		if(strcmp(t,"Storm") == 0) 
		return 0;
		if(strcmp(t,"Rain") == 0) 
		return 0.05;
		if(strcmp(t,"Shower") == 0) 
		return 0.1;
		if(strcmp(t,"Drizzle") == 0) 
		return 0.15;
		if(strcmp(t,"Cloudy") == 0) 
		return 0.2;
	}
	if(s%6 == 0){ 
		if(strcmp(t,"Flood") == 0) 
		return -0.1; 
		if(strcmp(t,"Storm") == 0) 
		return  -0.05;
		if(strcmp(t,"Rain") == 0) 
		return 0;
		if(strcmp(t,"Shower") == 0) 
		return 0.05;
		if(strcmp(t,"Drizzle") == 0) 
		return 0.1;
		if(strcmp(t,"Cloudy") == 0) 
		return  0.15;			    
	}
	if(s%6 == 1){ 
		if(strcmp(t,"Flood") == 0) 
		return -0.15;
		if(strcmp(t,"Storm") == 0) return -0.1;
		if(strcmp(t,"Rain") == 0) 
		return -0.05;
		if(strcmp(t,"Shower") == 0) 
		return 0;
		if(strcmp(t,"Drizzle") == 0) 
		return 0.05;
		if(strcmp(t,"Cloudy") == 0)  
		return 0.1;
	}
	if(s%6 == 2){
		if(strcmp(t,"Flood") == 0) 
		return -0.2;
		if(strcmp(t,"Storm") == 0) 
		return -0.15;
		if(strcmp(t,"Rain") == 0) 
		return -0.1;
		if(strcmp(t,"Shower") == 0) 
		return -0.05;
		if(strcmp(t,"Drizzle") == 0) 
		return 0;
		if(strcmp(t,"Cloudy") == 0) return 0.05;
	}
	if(s%6 == 3){
		if(strcmp(t,"Flood") == 0)
		return -0.25;
		if(strcmp(t,"Storm") == 0) 
		return -0.2;
		if(strcmp(t,"Rain") == 0) 
		return -0.15;
		if(strcmp(t,"Shower") == 0) 
		return -0.1;
		if(strcmp(t,"Drizzle") == 0) 
		return -0.05;
		if(strcmp(t,"Cloudy") == 0) 
		return 0;
    }
}
int Fibonumberr(int num){
	int a1 = 1,a2 = 1,an=0;
	while(num>an){
		a1 = a2;
        a2 = an;
        an =a1+a2;
	}
    if(num==an) return 1;
    return 0;
}
float THd(int hp,int d,int s,char t[]){
	float f,g,xacsuat;
	float P1 = 0, P2 = 0, p = 0;
	if((hp >=1 && hp<=999 && d>=1 && d <= 1000 && s>=1 && s <= 100) && (strcmp(t,"Flood")== 0 || strcmp(t,"Storm")== 0 || strcmp(t,"Rain")== 0 || strcmp(t,"Shower")== 0 || strcmp(t,"Drizzle")== 0 || strcmp(t,"Cloudy")== 0)){
		if(ktraSNT(hp) == 0){
			P1 = 1000;
			P2 = (hp+s)%1000;
		}
		else{
			P1 = hp;
			P2 = (hp+d)%100;
		}
		if(d<200){
			if(Fibonumberr(d+s)){
				f = (40 - (float)(fabs(d-500))/20 + gss(s))*(1+ptt(s,t));
				p = (float)((P1 + P2*f)/(1000 + fabs(P2 * f)));
			} 
			else{ 
		        f= 0;
		        p = (float)((P1 + P2*f)/(1000 + fabs(P2 * f)));
			}
        }
        if(d>=200 && d<300){
			xacsuat = (float)(d+P1+P2)/1000;
			if(xacsuat > 0.8){
			p=0;
			}
		    if(xacsuat>0.6 && xacsuat <= 0.8){
			   hp = hp -50;
			   if(ktraSNT(hp) == 0){
			       P1 = 1000;
			       P2 = (hp+s)%1000;
		        }
		        else{
			        P1 = hp;
			        P2 = (hp+d)%100;
                }
		       f = (40 - (float)(fabs(d-500))/20 + gss(s))*(1+ptt(s,t));
		       p = (float)(P1 + P2*f)/(1000 + fabs(P2 * f));
		    }
			if(xacsuat>0.4 && xacsuat <= 0.6){
				hp = hp -30;
				if(ktraSNT(hp) == 0){
			       P1 = 1000;
			       P2 = (hp+s)%1000;
		        }
		        else{
			       P1 = hp;
			       P2 = (hp+d)%100;
		        }
		        f = (40 - (float)(fabs(d-500))/20 + gss(s))*(1+ptt(s,t));
		        p = (float)(P1 + P2*f)/(1000 + fabs(P2 * f));
			}
			if(xacsuat > 0.2 && xacsuat <=0.4){
				hp = hp - 20;
				if(ktraSNT(hp) == 0){
			       P1 = 1000;
			       P2 = (hp+s)%1000;
		        }
		        else{
			       P1 = hp;
			       P2 = (hp+d)%100;
		        }
		        f = (40 - (float)(fabs(d-500))/20 + gss(s))*(1+ptt(s,t));
		        p = (float)(P1 + P2*f)/(1000 + fabs(P2 * f));
			}
			if(xacsuat > 0 && xacsuat <=0.2){
		        f = (40 - (float)(fabs(d-500))/20 + gss(s))*(1+ptt(s,t));
		        p = (float)(P1 + P2*f)/(1000 + fabs(P2 * f));
			}
		}
        if(d>800){
			f = (float)(-d*s)/1000;
			p = (float)(P1 + P2*f)/(1000 + fabs(P2 * f));
		}
		if(d>=200 && d<=800){
		   f = (40 - (float)(fabs(d-500))/20 + gss(s))*(1+ptt(s,t));
		   p = (float)(P1 + P2*f)/(1000 + fabs(P2 * f));
		} 
        if(p<0) {
            p=0;
        }
        if(p>1){ 
            p=1;
        }
        if(xacsuat >0.8){
           p=0;
        }
    }	
		else p = -1;
		return p;
}
int main(){
    int hp=0, d=0, s=0;
	char t[100];
	float P1 = 0, P2 = 0, p = -1;
    if(FileReadd(&hp, &d, &s, t)){
		p=THd(hp,d,s,t);
    }
	FileWritee(p);
	return 2020;
}