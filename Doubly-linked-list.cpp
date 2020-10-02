// Inserting sorted elements in doubly linked list
#include <bits/stdc++.h> 
  
using namespace std; 
  
// Node of a doubly linked list 
struct Node { 
    int data; 
    struct Node* prev, *next; 
}; 
  
// function to create and return a new node 
// of a doubly linked list 
struct Node* getNode(int data) 
{ 
    // allocate node 
    struct Node* newNode =  
        (struct Node*)malloc(sizeof(struct Node)); 
  
    // put in the data 
    newNode->data = data; 
    newNode->prev = newNode->next = NULL; 
    return newNode; 
} 
  
// function to insert a new node in sorted way in 
// a sorted doubly linked list 
void sortedInsert(struct Node** head_ref, struct Node* newNode) 
{ 
    struct Node* current; 
  
    // if list is empty 
    if (*head_ref == NULL) 
        *head_ref = newNode; 
  
    // if the node is to be inserted at the beginning 
    // of the doubly linked list 
    else if ((*head_ref)->data >= newNode->data) { 
        newNode->next = *head_ref; 
        newNode->next->prev = newNode; 
        *head_ref = newNode; 
    } 
  
    else { 
        current = *head_ref; 
  
        // locate the node after which the new node 
        // is to be inserted 
        while (current->next != NULL &&  
               current->next->data < newNode->data) 
            current = current->next; 
  
        /* Make the appropriate links */
        newNode->next = current->next; 
  
        // if the new node is not inserted 
        // at the end of the list 
        if (current->next != NULL) 
            newNode->next->prev = newNode; 
  
        current->next = newNode; 
        newNode->prev = current; 
    } 
} 
  
// function to print the doubly linked list 
void printList(struct Node* head) 
{ 
    while (head != NULL) { 
        cout << head->data << " "; 
        head = head->next; 
    } 
} 
  
// Driver program to test above 
int main() 
{ 
    /* start with the empty doubly linked list */
    struct Node* head = NULL; 
  
    // insert the following nodes in sorted way 
    struct Node* new_node = getNode(8); 
    sortedInsert(&head, new_node); 
    new_node = getNode(5); 
    sortedInsert(&head, new_node); 
    new_node = getNode(3); 
    sortedInsert(&head, new_node); 
    new_node = getNode(10); 
    sortedInsert(&head, new_node); 
    new_node = getNode(12); 
    sortedInsert(&head, new_node); 
    new_node = getNode(9); 
    sortedInsert(&head, new_node); 
  
    cout << "Created Doubly Linked Listn"; 
    printList(head); 
    return 0; 
} 
