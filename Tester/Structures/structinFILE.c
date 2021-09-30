#include <stdio.h>

typedef struct{
    int dd,mm,yy;
}Date_t;

typedef struct{
    char name[10];
    int age;
    char gender;
    Date_t BD;
}player_t;

int main(){
    player_t player1;

    FILE *fr;
    fr = fopen("test.txt", "r");
    fscanf(fr,"%s %d %c %d %d %d", player1.name,&player1.age, &player1.gender,&player1.BD.dd,&player1.BD.mm, &player1.BD.yy);
    fclose(fr);

    FILE *fw;
    fw = fopen("test.out", "w");
    fprintf(fw,"ten la %s, ",player1.name);
    fprintf(fw,"tuoi la %d, ",player1.age);
    fprintf(fw,"gioi tinh la %c, ",player1.gender);
    fprintf(fw,"date of birth : %d-%d-%d",player1.BD.dd, player1.BD.mm, player1.BD.yy); 
    fclose(fw);
}