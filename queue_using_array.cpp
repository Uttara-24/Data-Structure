#include<iostream>
#define SIZE 5
using namespace std;
class queue
{
    private:
    int item[SIZE],front , rear;
    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    bool isFull()
    {
        if(front==0 && rear==SIZE-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if(front==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(int ele)
    {
        if(isFull())
        {
            cout<<"Queue is Full!";
        }
        else
        {
            if(front==-1)
                front=0;
            rear++;
            item[rear] = ele;
            cout <<"Inserted "<< ele << endl;
        }
    }
    int dequeue()
    {
        int ele;
        if (isEmpty()) 
        {
            cout << "Queue is empty" << endl;
            return (-1);
        }   
        else 
        {
            ele = item[front];
            if (front >= rear) 
            {
                front = -1;
                rear = -1;
            } /* Q has only one element, so we reset the queue after deleting it. */
            else 
            {
                front++;
            }
            cout<< "Deleted -> " << ele << endl;
            return (ele);
        }
    }
    void display() 
    {
    /* Function to display elements of Queue */
        int i;
        if (isEmpty()) 
        {
            cout<< "Empty Queue" << endl;
        } 
        else 
        {
            cout<< "Front index-> " << front<<endl;
            cout<< "Items -> ";
            for (i = front; i <= rear; i++)
            cout << item[i] << "  ";
            cout << "Rear index-> " << rear << endl;
        }
    }
};
int main()
{
    queue q;
    //enQueue 5 elements    
    q.enqueue(1);    
    q.enqueue(2);    
    q.enqueue(3);    
    q.enqueue(4);    
    q.enqueue(5); 
    // 6th element can't be added to because the queue is full    
    q.enqueue(6);
    q.display();
    //deQueue removes element entered first i.e. 1    
    q.dequeue();
    //Now we have just 4 elements    
    q.display();
    return 0;
}