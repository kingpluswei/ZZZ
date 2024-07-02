#include <stdio.h>


//单链表
typedef struct LNode {
    int data;
    struct LNode *link;
} *LinkList;
int SearchN(LinkList list, int k) {
    LinkList p, q;
    int count = 0;              /*计数器赋初值*/
    p = q = list->link;         /*p和q指向链表表头结点的下一个结点*/
    while(p != NULL) {
        if(count < k) count++;  /*计数器+1*/
        else q = q->link;       /*q移到下一个结点*/
        p = p->link;            /*p移到下一个结点*/
    }
    if(count < k) return (0);   /*如果链表的长度小于k，查找失败*/
    else {
        printf("%d",q->data);   /*查找成功*/
        return (1);
    }
}
int main() {
    printf("Hello, World!\n");
    return 0;
}