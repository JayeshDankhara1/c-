#include<iostearm>
using namespace std;

struct Node{
    int data;
    struct Node *Pev;
    struct Node *Next;
};
struct Node *Head = NULL;

void Display();
void Push_Fast(int Data);
void Push_Back(int Data);
void Push(int Data, int Eliment);
void Pop_Fast(int Data);
void Pop_Back(int Data);
void Pop(int Data, int Eliment);
