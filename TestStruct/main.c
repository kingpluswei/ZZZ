#include <stdio.h>

int main() {
    int sum=0;
    int k;
    scanf("%d",&k);
    if (k<7) {
        for (int i = 1; i <= 3; i++)
            sum += i * k % 7;
        printf("%d", (sum * 2) - 3);
    }else{
        printf("39");
    }
    return 0;
}