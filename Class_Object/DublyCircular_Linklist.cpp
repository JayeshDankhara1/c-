#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *Pev;
    struct Node *Next;
};
struct Node *Head = NULL;

void Display()
{
    struct Node *copyHead=Head;
   while(copyHead ->Next != Head) {        
      cout<<copyHead->data<<" ";
      copyHead = copyHead->Next;
   }
      cout<<copyHead->data<<" ";
       
}
void Push_Fast(int Data){
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    
    if(Head==NULL)
    {
        link->data=Data;
        link->Pev=Head;
        link->Next=Head;
        Head=link;
        return;
    }
    link->data=Data;
    link->Pev=Head->Pev;
    link->Next=Head;
    Head=link;

}
void Push_Back(int Data)
{
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));

    
    if(Head==NULL)
    {
        Head=link;
        link->data=Data;
        link->Pev=Head;
        link->Next=Head;
        return;
    }
    struct Node *copyHead=Head->Pev;

    link->data=Data;
    link->Pev=copyHead;
    link->Next=Head;
    Head->Pev=link;
    copyHead->Next=link;
}
void Push(int Data, int Eliment)
{
    struct Node *link = (struct Node*) malloc(sizeof(struct Node));
    struct Node *copyHead=Head;
    struct Node *copy1Head;

    while(copyHead->data!= Eliment)
    {   
        copy1Head=copyHead;
        copyHead=copyHead->Next;
    }
    link->data=Data;
    link->Pev=copy1Head;
    link->Next=copyHead->Next;
    copyHead->Next=link;
}
void Pop_Fast(){
    
    struct Node *copyHead=Head->Next;
    struct Node *copy1Head=Head->Pev;

    if(Head->Next==Head)
    {
        Head=NULL;
        return;
    }
  //  Head->Next=copyHead->Next;
    copyHead->Pev=Head->Pev;
    copy1Head->Next=copyHead;
    Head=copyHead;
}
void Pop_Back(){
    //struct Node *copyHead=Head;
    struct Node *copy1Head=Head->Pev->Pev;
    if(Head->Next==Head)
    {
        Head=NULL;
        return;
    }
    copy1Head->Next=Head;
    Head->Pev=copy1Head;
    
    
   

}
void Pop(int Eliment)
{
    struct Node *copyHead=Head;
    struct Node *copy1Head=Head->Pev;
   
    if(Head->data==Eliment)
    {
        Head=copyHead->Next;
       // Head->Next=copyHead->Next;
        Head->Pev=copy1Head;
        copy1Head->Next=Head;
        return;

    }
    while(copyHead->data != Eliment)
    {
        copy1Head=copyHead;
        copyHead=copyHead->Next;
    }
    copy1Head->Next=copyHead->Next;
    copyHead->Pev=copy1Head->Pev;
}
int main()
{
    //  Push_Fast(10);
    //  Push_Fast(20);
    //  Push_Fast(30);
    //  Push_Fast(40);
    Push_Back(10);
    Push_Back(20);
    Push_Back(30);
    Push_Back(40);
    Push_Back(50);
    Push(1000,20);
    //  Pop_Fast();
    //  Pop_Fast();
    //  Pop_Fast();
    // Pop_Back();
    // Pop_Back();

    // Pop_Fast();
    // Pop_Fast();
    // Pop_Back();
    // Pop_Back();
    // Pop_Back();
    Pop(10);
   Pop(50);   

    Display();
}