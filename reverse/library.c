#include "library.h"

#include <stdio.h>
typedef struct Node{
    int data;
    struct node *next;
}Node;
void reverse(Node *L ){
    Node *p=L->next;
    Node *q;
    L->next=NULL;
while(p!=NULL){// p指向开始节点
    q=p->next;//q记录p的后继位置
    p->next=L->next;
    L->next=p;
    p=q;
}
}
void enu(Node *p){
    while(p!=NULL){
        p=p->next;
        printf("%d",p->data);
    }
}
int main () {
    //构造链表L

    Node * h=(Node *)malloc(sizeof(Node));
    Node * a=(Node *)malloc(sizeof(Node));
    Node * b=(Node *)malloc(sizeof(Node));
    Node * c=(Node *)malloc(sizeof(Node));
    h->next=a;
    a->next=b;a->data=1;
    b->next=c;b->data=2;
    c->next=NULL;c->data=3;
    enu(h);
    reverse(h);
    enu(h);
}