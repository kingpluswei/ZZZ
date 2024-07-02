#include<stdio.h>
void fun( int p)
{
    int d=2;
    p=d++ ;
    printf(" % d",p);
}
int isPrim (int x){
    for(int i=2;i<x-1;i++){
        if((x%i)==0) return 0;
    }
    return 1;
}
int main(){
    int k=0;//定义一个下标计数器
int a[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
int b[10];
    for (int i = 0; i <15 ; i++) {
        if(isPrim(a[i])) b[k++]=a[i];
    }
    for (int j = 0; j<k; j++) {
        printf("%d\n",b[j]);
    }


}