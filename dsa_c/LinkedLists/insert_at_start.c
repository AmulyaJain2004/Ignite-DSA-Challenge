#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head =NULL;
    struct node *temp = head;

    int n;
    printf("Enter number of entries you want to enter: -\n");
    scanf("%d",&n);

    for (int i = 0; i<n; i++)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data: -\n");
        scanf("%d",&newnode->data);

        newnode->next = head;
        head = newnode;
    }

    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }


    // Free the allocated memory to avoid memory leaks
    temp = head;
    while (temp != NULL)
    {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    return 0;
}