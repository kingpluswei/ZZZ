#include <stdio.h>

int main() {
    int score[100],sn;
    int sum=0;
    int min=100;
    int max=0;

    scanf("%d",&sn);
    for (int i = 0; i <sn; i++) {
        scanf("%d",&score[i]);
    }
    for (int j = 0; j <sn ; j++) {
        sum+=score[j];
        if(score[j]<min) min=score[j];
        if(score[j]>max) max=score[j];
    }

    printf("%d %d %d",min,max,(sum/sn));


    return 0;
}