//max min pointer

#include <stdio.h>

int scan_list(int []);
void sum_subsequence(int [], int,int *,int *, int *);

int main(void){
    int list[10], size;
    int max,min,sum;
    size = scan_list(list);
    sum_subsequence(list, size, &max, &min, &sum);
    printf("\nmax = %d,   min = %d,   sum = %d", max , min , sum);
}
int scan_list(int array[10]){
    for(int i = 0; i<10; i++){
        printf("nhap array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
void sum_subsequence(int array[], int size, int *max, int *min, int *sum){
    *max = array[0];
    *min = array[0];
    *sum = 0;
    for(int i = 0; i<10;i++){
        if(array[i] > *max)
           *max = array[i];
         if(array[i] < *min)
             *min = array[i];
        *sum += array[i];
    }
}