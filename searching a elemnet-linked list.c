#include<stdio.h>
#include<stdlib.h>
#define int long long
#define show printf
struct node{
    int data;
    struct node *next;
}*head;
void create_list()
{
    struct node *newnode,*temp;
    head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of first node\n");
    scanf("%d",&head->data);
    head->next=NULL;
    temp=head;
    for(int i=1;i<=3;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
         printf("Enter the value of node %d \n",i+1);
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            temp->next=newnode;
            temp=newnode;

    }
}
    void search()
    {
        int search_item;
        printf("Enter the value you want to search\n");
        scanf("%d",&search_item);
        struct node *temp;
    temp=head;
    int i=1;
    int found=0;
    while(temp!=NULL)
    {
        if(temp->data==search_item)
        {
            found=1;
            break;
        }
        temp=temp->next;
    }
   found?printf("Found\n"):printf("Not found\n");
}
void display()
{
    struct node *temp;
    temp=head;
    int i=1;
    while(temp!=NULL)
    {
        printf("Node %d -> %d\n",i++,temp->data);
        temp=temp->next;
    }
}
signed main(){

    create_list();
    display();
    search();

}
