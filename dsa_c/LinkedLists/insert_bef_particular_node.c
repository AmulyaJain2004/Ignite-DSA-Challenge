#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


int main()
{
    struct node *head = (struct node *)malloc (sizeof (struct node));
    struct node *temp = head;

    int n;
    printf("Enter the number of entries you want to enter: -\n");
    scanf("%d",&n);


    for (int i = 0 ; i<n; i++)
    {
        if (i == 0 )
        {
            printf("Enter the data: -\n");
            scanf("%d",&head->data);
        }
        else
        {
            struct node *newnode = (struct node *)malloc (sizeof(struct node));

            temp->next = newnode;

            printf("Enter the data: -\n");
            scanf("%d",&newnode->data);
            newnode->next = NULL;

            temp = newnode;
        }
    }

    int a;
    printf("Enter the node number before which new node is to be entered: -\n");
    scanf("%d",&a);

    if (a==0)
    {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data: -\n");
        scanf("%d",&newnode->data);

        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        struct node *prev = head;
        temp = head->next;

        for (int i = 0; i<a-1; i++)
        {
            temp = temp->next;
            prev = prev->next;
        }

        // now we have to insert a node after prev 
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        prev->next = newnode;

        printf("Enter the data: -\n");
        scanf("%d",&newnode->data);

        newnode->next=temp;

    }

    temp = head;
    printf("The elements of linked list are: -\n");
    while (temp != NULL)
    {
        printf("%d ",temp->data);
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