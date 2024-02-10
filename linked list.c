#include<stdio.h>
#include<stdlib.h>
struct node{
    int a;
    struct node *b,*c,*d,*e;
};
int main()
{
    struct node *p,*q,*r,*s;
    p=(struct node*)malloc(sizeof(struct node));
    q=(struct node*)malloc(sizeof(struct node));
    r=(struct node*)malloc(sizeof(struct node));
    s=(struct node*)malloc(sizeof(struct node));
    p->a=2;
    p->b=q;
    p->c=NULL;
    p->d=q->b;
    p->e=q;
   q->a=3;
    q->c=p;
    q->d=r;
    q->e=s;
     r->a=4;
    r->b=s->b;
    r->c=s->c;
    r->d=NULL;
    r->e=s;
     s->a=5;
     s->d=NULL;
     s->e=q;
     while(p!=NULL)
     {
         printf("%d ",p->a);
         p=p->b;
     }




}
