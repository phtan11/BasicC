/* #include <stdio.h>

void menu(){
    printf("welcome to coffee 302\n");
    printf("1. america = 50000\n");
    printf("2. capucino = 35000\n");
    printf("3. egg coffee = 40000\n");
    printf("4. black coffee = 30000\n");
    printf("5. tra sua tran chau duong den = 35000\n");
}
int moneyback(int ichoice, int imoney){
    int remain;
    switch (ichoice){
        case 1 :
        remain = imoney - 50000;break;
        case 2 :
        remain = imoney - 35000;break;
        case 3 :
        remain = imoney - 40000;break;
        case 4 :
        remain = imoney - 30000;break;
        case 5 :
        remain = imoney - 35000;break;
        default:
        remain = 0;
    }
    return remain;
}
int main(){
    int ichoice = 1, imoney;
    do{
        menu();
        printf("chon 1 so di djt me may :");scanf("%d", &ichoice);
        if(ichoice != 0){
            printf("nhap so tien cua ban: \n"); scanf("%d", &imoney);
            if(moneyback(ichoice,imoney)> 0)
            printf("so tien du lai la = %d\n", moneyback(ichoice,imoney));
            ichoice = 0;
        }
        else{
            printf("Are you kiding me ???\n");
        }
    }while(ichoice !=0);
}
*/





#include <stdio.h>

void menu(){
    printf("1. Pepsi     = 6000\n");
    printf("2. Tra sanh  = 7000\n");
    printf("3. Sting     = 8000\n");
    printf("4. Sua tuoi  = 6000\n");
    printf("5. Nuoc suoi = 4000\n");
}
int thoitien(int sotien,int nuocuong){
    if(sotien - nuocuong > 0)
    printf("tien thua cua ban la : %d", sotien - nuocuong);
}
int main(){
    int nhaptien, nhannutchon;
    menu();
    printf("nhap tien cua ban :");scanf("%d", &nhaptien);
    do{
        printf("nhap nut chon nuoc ma ban thich (1-> 5) :");
        scanf("%d", &nhannutchon);
    }while(nhannutchon<1 || nhannutchon >5);
    switch(nhannutchon){
        case 1:
        if(nhaptien <6000){
        printf("error vi khong du tien");
        }
        else {
        printf("ban da chon Pepsi. ");
        thoitien(nhaptien,6000);
        }
        break;
        case 2:
        if(nhaptien <7000){
            printf("error vi khong du tien");
        }
        else {
            printf("ban da chon Traxanh. ");
            thoitien(nhaptien,7000);
        }
        break;
        case 3:
        if(nhaptien < 8000){
            printf("error vi khong du tien");
        }
        else{
            printf("ban da chon Sting. ");
            thoitien(nhaptien,8000);
        }
        break;
        case 4:
        if(nhaptien < 6000){
            printf("error vi khong du tien");
        }
        else{
            printf("ban da chon Sua tuoi. ");
            thoitien(nhaptien,6000);
        }
        break;
        case 5:
        if(nhaptien < 4000){
            printf("error vi khong du tien");
        }
        else{
            printf("ban da chon Nuoc suoi. ");
            thoitien(nhaptien,4000);
        }
        break;
    }
}