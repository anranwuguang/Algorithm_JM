//题目：创建一个链表

#include<stdio.h>
#include<stdlib.h>

typedef struct LNode{
    int          data;
    struct LNode *next;
}LNode,*LinkList;
 
LinkList CreateList_head(int n);
LinkList CreateList_end(int n);
LinkList List_replace(LinkList L);
LinkList List_insert(LinkList L, int i, int value);
LinkList List_delete(LinkList L, int value);
LinkList List_concatenate(LinkList a, LinkList b);
void print(LinkList h);
int main()
{
    LinkList Head=NULL, Head2=NULL;
    int n,m,i,new_value;
    printf("请输入链表长度：");
    scanf("%d",&n);
    
    Head=CreateList_end(n);
    printf("刚刚建立的各个链表元素的值为：\n");
    print(Head);
    
    printf("请输入链表长度：");
    scanf("%d",&m);
    Head2=CreateList_end(m);
    printf("刚刚建立的各个链表元素的值为：\n");
    print(Head2);
    
    Head=List_concatenate(Head, Head2);
    printf("拼接后的链表为：\n");
    print(Head);
//    Head=List_replace(Head);
//    printf("替换后的各个链表元素的值为：\n");
//    print(Head);
//
//    printf("请输入要插入的链表位置及其数值：");
//    scanf("%d%d",&i, &new_value);
//    Head=List_insert(Head,i,new_value);
//    printf("在第%d个位置插入%d后的各个链表元素的值为：\n",i,new_value);
//    print(Head);
//
//    printf("请输入要删除的链表元素的数值：");
//    scanf("%d", &new_value);
//    Head=List_delete(Head,new_value);
//    printf("删除%d后的各个链表元素的值为：\n",new_value);
//    print(Head);
    return 0;
}

LinkList CreateList_end(int n)
{
    LinkList L,p,q;
    int i;
    L=(LNode*)malloc(sizeof(LNode));
    if(!L)return 0;
    L->next=NULL;
    q=L;
    for(i=1;i<=n;i++)
    {
        p=(LinkList)malloc(sizeof(LNode));
        printf("请输入第%d个元素的值:",i);
        scanf("%d",&(p->data));
        q->next=p;
        q=p;
    }
    q->next=NULL;
    return L;
}
LinkList CreateList_head(int n)
{
    LinkList L,p;
    int i;
    L=(LNode*)malloc(sizeof(LNode));
    if(!L)return 0;
    L->next=NULL;
    
    for(i=1;i<=n;i++)
    {
        p=(LinkList)malloc(sizeof(LNode));
        printf("请输入第%d个元素的值:",i);
        scanf("%d",&(p->data));
        p->next=L->next;
        L->next =p;
    }
    return L;
}

LinkList List_replace(LinkList L)
{
    int old_value, new_value;
    printf("请输入要被替换的数据：");
    scanf("%d",&old_value);
    printf("请输入要新的数据：");
    scanf("%d",&new_value);
    LinkList p= L->next;
    while(p->data!=old_value) p=p->next;
    p->data=new_value;
    return L;
}

LinkList List_insert(LinkList L, int i, int value)
{
    LinkList new,p=L;
    while(i--) p=p->next;
    new =(LinkList)malloc(sizeof(LinkList));
    new->data=value;
    new->next=p->next;
    p->next=new;
    return L;
    
}
LinkList List_delete(LinkList L, int value)
{
    LinkList pre=L,p=L->next;
    
    while(p->data!=value){
        p=p->next;
        pre=pre->next;
    }
    pre->next=p->next;
    free(p);
    return L;
    
}
LinkList List_concatenate(LinkList a, LinkList b)
{
    LinkList c=a->next;
    while(c->next!=NULL) c=c->next;
    c->next=b->next;
    return a;
}
void print(LinkList h)
{
    LinkList p=h->next;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
