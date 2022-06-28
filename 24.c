//Circular Queue implement in C 
#include<stdio.h>
#define SIZE 5
 int  item[SIZE];
 int front = -1,rear =-1;
 // check if the queue is full 
 int isFull(){
     if ((front == rear +1) ||(front == 0 && rear  == SIZE -1)) return 1;
     return 0;
}
//check if the Queue is empty 
int isEmpty(){
    if (front == -1) return 1;
    return 0;
}
// Adding an element 
void enQueue(int element){
    if (isFull())
    printf("\n Queue is  full \n");
    else{
        if (front == -1) front = 0;
        rear = (rear +1) % SIZE;
        item[rear] = element;
        printf("\n Inserted -> %d",element);
    }
}
// Removing an elemnt 
int deQueue(){
    int element;
    if (isEmpty()) {
        printf("\n Queue is empty !! \n");
        return (-1);
    }
    else{
        element = item[front];
        if (front == rear){
            front =-1;
            rear = -1;
        }
        //Q has only one elemnt ,so we reset THE
        //queue after dequeing it.?
        else {
            front = (front +1) % SIZE;

        }
        printf("\n  Deleted element -> %d\n",element);
        return (element);

    }
    
    
}
//Display the Queue 
void display(){
    int i;
    if (isEmpty())
    printf("\n empty queue\n");
    else{
        printf("\n front -> %d",front);
        printf("\n Item ->");
        for (i = front; i !=rear; i = (i+1) % SIZE){
            printf("%d",item[i]);

        }
        printf("%d",item[i]);
        printf("\n Rear -> %d \n ", rear);
    }
}
int main(){
//fails because front =-1
deQueue();
printf("Keshav Garg\n");
enQueue(1);
enQueue(2);
enQueue(3);
enQueue(4);
enQueue(5);
// fails to enqueue because front == @ && rear == SIZE -1
enQueue(6);
display();
deQueue();
display();
deQueue(7);
display();
// fails to enqueue because front == rear +1
enQueue(8);
return 0;
}