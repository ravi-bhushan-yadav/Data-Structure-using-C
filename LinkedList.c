#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

struct Node {
    int data;
    struct Node* next;
};

void push(struct Node** head_ref, int new_data) {
    // 1. Allocate memory for the new node
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    // 2. Put in the data
    new_node->data = new_data;

    // 3. Link the new node to the current head of the list
    new_node->next = (*head_ref);

    // 4. Move the head pointer to point to the new node
    (*head_ref) = new_node;
}

void printList(struct Node* head) {
    struct Node* current_node = head;
    printf("List: ");
    while (current_node != NULL) {
        printf("%d -> ", current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    // Add nodes to the list using the push function:
    push(&head, 10);      // List is now: 10 -> NULL
    push(&head, 20);      // List is now: 20 -> 10 -> NULL
    push(&head, 30);      // List is now: 30 -> 20 -> 10 -> NULL
    push(&head, 40);      // List is now: 40 -> 30 -> 20 -> 10 -> NULL

    // Print the final list
    printList(head);
    
    // In a real application, you would add a function to free all memory here
    return 0;
}
