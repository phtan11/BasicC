//max min pointer


#include <stdio.h>

int scan_list(int []);
void sum_subsequence(int [], int, int []);

int main(void){
    int list[10], size;
    int answer[3];
    size = scan_list(list);
    sum_subsequence(list, size, answer);
    printf("\nmax = %d,   min = %d,   sum = %d", answer[0], answer[1], answer[2]);
}
int scan_list(int array[10]){
    for(int i = 0; i<10; i++){
        printf("nhap array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    //for(int j = 0; j<10;j++)
      //  printf("\nArray[%d] = %d", j, array[j]);
}
void sum_subsequence(int array[], int size, int answer[]){
    int max = array[0],min = array[0],sum = 0;
    for(int i = 0; i<10;i++){
        if(array[i] > max){
           max = array[i];
           answer[0] = max;
    }
         if(array[i] < min){
             min = array[i];
             answer[1] = min;
         }
         sum += array[i];
    }
    answer[2] = sum;
}