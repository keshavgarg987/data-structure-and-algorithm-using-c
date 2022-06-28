#include<stdio.h>
#include<string.h>
#define NULL 0
struct queue_node_type
{
    int info;
    struct queue_node_type *link;
};
typedef struct queue_node_type node;
int main()
{
    node *front=NULL;
    node &rear=NULL;
    int enq_linkqueue(node*,node*,int);
    int deq_linkqueue(node**);
    int traverse(node*);
    int destroy_queue(node*,node*);
    int choice,item;
    char ch;
    do
    {
        printf("\n Choice 1.Enqueue\t 2.Dequeue\t 3.Traverse\t any other to exit\n");
        scanf("%d",$choice);
        switch(choice)
        {
            case 1:
            printf("enter value to insert:");
            scanf("%d",&item);
            break;
            case 2:
            deq_linkqueue(&front);
            break;
            case 3;
            traverse(front);
            break;
            default:
            printf("\n End of operation\n");
        }
        printf("Want to continue:(Y or N)=");
        
    }
}