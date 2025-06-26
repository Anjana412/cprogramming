#include <stdio.h>
#define size 5

int queue[size];
int front=-1,rear=-1;

void enqueue(int value)
{
    if(rear==size-1){
        printf("queue is full\n");
    }
    else{
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=value;
        printf("inserted %d\n",value);
          
    }
}

void dequeue() 
{
    if(front==-1||front>rear){
        printf("queue is empty\n");
        
    }
    else{
        printf("Deleted %d\n",queue[front]);
        front++;

    }
}


void display()
{
    if(front==-1||front>rear){
        
    
        printf("Queue is empty!\n");
    }
    else 
    {
        printf("Queue:\n ");
        for (int i=front;i<=rear;i++)
            printf("%d\n",queue[i]);
        
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    dequeue();
    display();

}
