
#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
struct Array{
    int a[20];
    int size;
    int length;

};

void Display(struct Array arr)
{
    int i;
    printf("\nElemnent are\n");
    for(int i=0;i<arr.length;i++){
        printf("%d",arr.a[i]);
    }
}

struct Array* merge(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;

    struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

    while(i<arr1->length&&j<arr2->length){
        if(arr1->a[i]<arr2->a[j]) {
            arr3->a[k++] = arr1->a[i++];
        }
        else{
            arr3->a[k++]=arr2->a[j++];
        }
    }

    for(;i<arr1->length;i++){
        arr3->a[k++]=arr1->a[i];
    }
    for(;j<arr2->length;j++){
        arr3->a[k++]=arr2->a[j];
    }
    arr3->length=arr2->length+arr1->length;
    arr3->size=10;
}
int main() {

    struct Array arr1={{2,6,10,15,25},10,5};
    struct Array arr2={{3,4,7,18,20},10,5};
    struct Array *arr3;
    arr3=merge(&arr1,&arr2);
//    Display (arr1);
    Display(*arr3);
    printf("%d",arr3->length);
    return 0;

    return 0;
}