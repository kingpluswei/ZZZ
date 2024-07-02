

#include  <stdio.h>
#include  <string.h>
#define NUM_ELECTORATE 10
#define NUM_CANDIDATE 3
struct candidate
{
    char  name[20];
    int   count;
}candidate[3] = {"li",0, "zhang",0, "wang",0};

int main()
{
    int  i, j, flag = 1, wrong = 0;
    char  name[20];
    for (i=1; i<=NUM_ELECTORATE; i++)
    {
        printf("Input vote %d:", i);
        scanf("%s", name);
        strlwr(name); /* C语言的标准库函数，功能是将name中的字符全部变成小写字母 */
        flag = 1;

        for (j=0; j<NUM_CANDIDATE; j++)
        {
            if (_________________)
            {
                _____________;
                flag = 0;
            }
        }

        if (flag)
        {
            wrong++;  /* 废票计数 */
            ________;
        }
    }
    printf("Election results:\n");

    for (i=0; i<NUM_CANDIDATE; i++)
    {
        printf("%s:%d\n", ____________________);
    }

    printf("Wrong election:%d\n", wrong);
    return 0;
}






#include <stdlib.h>
#include <stdio.h>
typedef struct Node{
    int data;
    struct Node *next;
}NODE;
void reverse(NODE *L ){
    NODE *p,*q;
    p=L->next;

    L->next=NULL;
while(p!=NULL){// p指向开始节点
    q=p->next;//q记录p的后继位置
    p->next=L->next;
    L->next=p;
    p=q;
}
}
void enu(NODE *p){
    while(p!=NULL){
        p=p->next;
        printf("%d\n",p->data);
    }
}
int main () {
    //构造链表L(冗长方法)
//    int a_=1;
    NODE * h=(NODE *)malloc(sizeof(NODE));
    NODE * a=(NODE *)malloc(sizeof(NODE));
    NODE * b=(NODE *)malloc(sizeof(NODE));
    NODE * c=(NODE *)malloc(sizeof(NODE));
//    printf("%d",a_);
    printf("%d", sizeof(short));
    h->next=a;
    a->next=b;a->data=1;
    b->next=c;b->data=2;
    c->next=NULL;c->data=3;
//    enu(h);
//    reverse(h);
//    enu(h);

}