#include <stdio.h>
#include <stdlib.h>

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
    
    temp = head;
    printf("The elements of linked list are: -\n");
    while (temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    
    int choice = 1;
    do // to ask the user uptill he/she wants to insert
    {
        int a;
        printf("\nEnter number of the node after which new node is to be inserted: -\n");
        scanf("%d",&a);

        if ((a>=n)||(a<0))
        {
            printf("Asked node doesn't already exist for new node to be inserted:-\n");
            break;
        }

        temp = head;
        for (int i = 0; i < a; i++)
        {
            temp = temp->next;
        } 

        struct node *new_node = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data for new node: -\n");
        scanf("%d",&new_node->data);
        new_node->next = temp->next;
        temp->next = new_node;

        temp = head;
        printf("The elements of new linked list are: -\n");
        while (temp != NULL)
        {
            printf("%d ",temp->data);
            temp = temp->next;
        }

        printf("\nDo you want to insert more nodes: 1: for 'yes', 0: for 'no'\n");
        scanf("%d", &choice);

    }while(choice);  

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