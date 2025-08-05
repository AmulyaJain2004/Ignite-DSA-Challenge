#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int main()
{
    int n;
    printf("Enter the number of entries you want to make: -\n");
    scanf("%d", &n);

    head = (struct node*)malloc(sizeof(struct node));

    struct node *temp = head;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("Enter the first element you want to enter: -\n");
            scanf("%d", &head->data);
        }
        else
        {
            struct node *newnode = (struct node*)malloc(sizeof(struct node));
            temp->next = newnode;

            int a;
            printf("Enter the element you want to enter: -\n");
            scanf("%d", &a);

            newnode->data = a;
            newnode->next = NULL;

            temp = newnode;
        }
    }

    // Print the linked list
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
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
