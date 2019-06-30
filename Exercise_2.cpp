#include <bits/stdc++.h> 
using namespace std; 
  
// A structure to represent a stack 
class StackNode { 
public: 
    int data; 
    StackNode* next; 
}; 
  
StackNode* newNode(int data) 
{ 
    StackNode* stackNode = new StackNode(); 
    stackNode->data = data; 
    stackNode->next = NULL; 
    return stackNode; 
} 
  
int isEmpty(StackNode* root) 
{ 
    if(root==NULL){
        return true;
    }
    return false;//Your code here
} 
  
void push(StackNode** root, int data) 
{
    StackNode* node = newNode(data);
    node->next=(*root);
    (*root) = node;
    //Your code here
} 
  
int pop(StackNode** root) 
{
    if(isEmpty((*root))){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    StackNode* temp = (*root);
    (*root) = (*root)->next;
    int ret = temp->data;
    delete temp;
    return ret;
    //Your code here 
} 
  
int peek(StackNode* root) 
{
    if(isEmpty(root)){
//        cout<<"Stack Underflow"<<endl;
        return 0;
    }
    return root->data;
    //Your code here 
} 
  
int main() 
{ 
    StackNode* root = NULL; 
  
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
  
    cout << pop(&root) << " popped from stack\n"; 
  
    cout << "Top element is " << peek(root) << endl; 
  
    return 0; 
} 