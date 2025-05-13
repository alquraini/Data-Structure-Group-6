#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void printMiddle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow != NULL)
        printf("Middle node: %d\n", slow->data);
}

void append(struct Node** head_ref, int new_data) {
    struct Node* new_node = newNode(new_data);
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    struct Node* temp = *head_ref;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new_node;
}

int main() {
    struct Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);
    append(&head, 60);

    printMiddle(head); 

    return 0;
}
