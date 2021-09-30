#include <stdio.h>
#include <string.h>
typedef struct{
    int dd,mm,yy;
}Date_t;
typedef struct{
    char name[10];
    int age;
    char gender;
    Date_t BD;
} player_t;

int main(){
    player_t player1,player2;
    printf("nhap name cho dan choi 1 :");
    scanf("%s", player1.name);
    printf("nhap age gender ngay thang nam cho nguoi choiw 1:");
    scanf("%d %c %d %d %d", &player1.age, &player1.gender, &player1.BD.dd, &player1.BD.mm, &player1.BD.yy);

    printf("nhap name cho dan choi 2 :");
    scanf("%s", player2.name);
    printf("nhap name age gender ngay thang nam cho nguoi choiw 2:");
    scanf("%d %c %d %d %d", &player2.age, &player2.gender, &player2.BD.dd, &player2.BD.mm, &player2.BD.yy);
    /* 
    strcpy(player2.name,player1.name); // do kiểu string nên phải dùng strcpy
    
    player2.age = player1.age;
    player2.gender = player1.gender;
    */ 
    printf("player1: name = %s, age = %d and gender  = %c finally is ngay sinh = %d, thang = %d, nam = %d", player1.name, player1.age, player1.gender, player1.BD.dd, player1.BD.mm, player1.BD.yy);
    printf("\nplayer2: name = %s, age = %d and gender  = %c finally is ngay sinh = %d, thang = %d, nam = %d ", player2.name, player2.age, player2.gender, player2.BD.dd, player2.BD.mm, player2.BD.yy);
}