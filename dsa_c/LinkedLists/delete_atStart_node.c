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
    printf("Enter the number of entries you want to make: -\n");
    scanf("%d",&n);

    for (int i = 0; i<n; i++)
    {
        if (i == 0)
        {
            printf("Enter the data: -\n");
            scanf("%d",&head->data);
        }
        else
        {
            struct node *newnode = (struct node*)malloc(sizeof(struct node));
            temp->next = newnode;

            printf("Enter the data: -\n");
            scanf("%d", &newnode->data);

            newnode->next = NULL;
            temp = newnode;
        }
    }

    printf("linked list before deleting head element: -\n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }

    printf("\nlinked list after deleting head element: -\n");
    temp = head;
    temp = head->next;
    free(head);

    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    return 0;
}