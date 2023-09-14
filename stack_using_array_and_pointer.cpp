#include<iostream>
#include<stdlib.h>
using namespace std;
int size = 0;
#define MAX 10
struct stack
{
    int item[MAX];
    int top;     
};
typedef struct stack st;
void create_stack(st *s)
{
    s->top=-1;
}
int isFull(st *s)
{
    if(s->top==MAX-1)
    {
        return 1;
    }
    else
        return 0;
}

int isEmpty(st *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else 
        return 0;
}

void push(st *s ,int ele)
{
    if(isFull(s))
    {
        cout<<"Stack is Full!"<<endl;
    }
    else
    {
        s->top++;
        s->item[s->top]=ele;
    }
    size++;
}
void pop(st *s)
{
    if (isEmpty(s))
    {
        cout<<"Stack is Empty!";
    } 
    else 
    {
        cout << "Item popped= " << s->item[s->top];
        s->top--;
    }
    size--;
    cout << endl;
}
void printStack(st *s)
{
   printf("Stack: ");
   for (int i = 0; i < size; i++) 
   {
        cout << s->item[i] << " ";
   }
    cout << endl;
}
int main()
{
    st *s = (st *)malloc(sizeof(st));
    create_stack(s);
    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    printStack(s);
    pop(s);
    cout << "\nAfter popping out\n";
    printStack(s);
    return 0;
}