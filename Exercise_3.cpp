#include <bits/stdc++.h> 
using namespace std; 
  
// A linked list node  
class Node  
{  
    public: 
    int data;  
    Node *next;  
};  
  
/* Given a reference (pointer to pointer) 
to the head of a list and an int, inserts 
a new node on the front of the list. */
void push(Node** head_ref, int new_data)  
{
    Node* node = new Node;
    node->data = new_data;
    node->next = (*head_ref);
    (*head_ref) = node;
    /* 1. allocate node */ 
  
    /* 2. put in the data */  
  
    /* 3. Make next of new node as head */ 
  
    /* 4. move the head to point to the new node */
}  
  
/* Given a node prev_node, insert a new node after the given  
prev_node */
void insertAfter(Node* prev_node, int new_data)  
{
    if(prev_node == NULL){
        cout<<"PREV_NODE is NULL"<<endl;
    }else{
        Node* node = new Node;
        node->data = new_data;
        node->next = prev_node->next;
        prev_node->next = node;
    }
    /*1. check if the given prev_node is NULL */ 
  
    /* 2. allocate new node */ 
  
    /* 3. put in the data */ 
  
    /* 4. Make next of new node as next of prev_node */
  
    /* 5. move the next of prev_node as new_node */ 
}  
  
/* Given a reference (pointer to pointer) to the head  
of a list and an int, appends a new node at the end */
void append(Node** head_ref, int new_data)  
{
    Node* node = new Node;
    node->data = new_data;
    node->next = NULL;

    if((*head_ref) == NULL){
        (*head_ref) = node;
    }else{
        Node* temp = (*head_ref);
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = node;
    }
    /* 1. allocate node */ 
  
    /* 2. put in the data */ 
  
    /* 3. This new node is going to be  
    the last node, so make next of  
    it as NULL*/  
  
    /* 4. If the Linked List is empty, 
    then make the new node as head */
  
    /* 5. Else traverse till the last node */
  
    /* 6. Change the next of last node */ 
}  
  
// This function prints contents of 
// linked list starting from head  
void printList(Node *node)  
{
    Node* temp = node;
    while(temp!=NULL){
        cout<<"Data : "<<temp->data<<endl;
        temp = temp->next;
    }
    delete temp;
    //Your code here
}  
  
/* Driver code*/
int main()  
{  
    Node* head = NULL;   
    append(&head, 6);  
    push(&head, 7);  
    push(&head, 1);    
    append(&head, 4);    
    insertAfter(head->next, 8);  
    cout<<"Created Linked list is: ";  
    printList(head);  
    return 0;  
}  