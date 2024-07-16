#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void Display() {

   struct node *ptr = head;
   while(ptr != NULL) {        
      cout<<ptr->data<<" ";
      ptr = ptr->next;
   }
}

void Push_Back(int data) {
    struct node *link = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;
    link->data = data;
    link->next = NULL;
   
    if (head == NULL)
    {
        head = link;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = link;
    return;
}
void Pop_Back()
{
    struct node *ptr = head;
    struct node *ptr1;
    if(ptr->next==NULL)
    {
        head=NULL;
        return;
    }
    
   while(ptr->next != NULL) {
    ptr1=ptr;
    ptr = ptr->next;
   }
   ptr1->next=NULL;
}
void Push_Fast(int data)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;

    link->data = data;
    link->next=head;
    head=link;
}
void Pop_Fast()
{
    struct node *ptr = head;
    if(ptr->next==NULL)
    {
        head=NULL;
        return;
    }
    head= ptr->next;
    
}
void Push(int data,int num)
{
    struct node *link = (struct node*) malloc(sizeof(struct node));
    struct node *ptr = head;
    struct node *ptr1 ;

    link->data = data;
   
    
    while (ptr->data != num)
    {
        ptr1=ptr;
        ptr = ptr->next;
    }
    ptr1->next = link;
    link->next=ptr;
    return;
   
}
void Pop(int num)
{
    struct node *ptr = head;
    struct node *ptr1;
    
   while(ptr->data != num) {
    ptr1=ptr;
    ptr = ptr->next;
   }
   ptr1->next=ptr->next;
}

int main()
{
   // Push_Back(60);
 //   Display();
   // Pop_Back();
    Push_Fast(100);
    Push_Fast(10);
    Push_Fast(1);
    Push_Fast(20);
    Push(1000,1);
    Pop(100);
   // Push(10,100);
     // Pop_Back();
    //Pop_Fast();
    Display();
    

    return 0;
}