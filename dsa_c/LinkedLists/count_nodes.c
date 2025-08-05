#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};


int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node)); 
    struct node *temp = head;

    int n;
    printf("Enter the number of entries you want to enter: -\n");
    scanf("%d",&n);

    printf("enter the data ");
    scanf("%d",&head->data);

    for (int i= 1; i<n; i++)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        temp->next = newnode;

        int d;
        printf("enter the data ");
        scanf("%d",&d);

        newnode->data = d;
        newnode->next = NULL;

        temp = newnode;
    }

    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
    printf("\n The number of nodes in this linked list is: %d",count);

    // Free allocated memory
    temp = head;
    while (temp != NULL)
    {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    return 0;
}