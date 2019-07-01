#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack {
    int top;
    int counter = 0;
public:
    int a[MAX];// Maximum size of Stack
    int size = 0;
    Stack() { //Constructor here
    }
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
    };

    bool Stack::push(int x){
        if(counter<MAX){
            a[counter]=x;
//            cout<<"counter : "<<counter<<endl;
            top=x;
            counter++; size++;
//            cout<<"Count : "<<counter<<" Size : "<<size<<endl;
            return true;
        }
        cout<<"Stack Overflow"<<endl;
        return false;
        //Your code here

        //Check Stack overflow as well
    }
    int Stack::pop(){
        int ret =0;
        if(size==0){
            cout<<"Stack Underflow"<<endl;
        }else{
            counter--;
//            cout<<"Pop counter : "<<counter<<endl;
            ret = a[counter];
            top=a[size-2];
            size--;
//            cout<<"TOP : "<<top<<endl;

        }
        return ret;
        //Your code here
        //Check Stack Underflow as well
    }

    int Stack::peek() {
        if(size==0){
            return 0;
        }else{
            return top;
        }

        //Your code here

        //Check empty condition too

    }
    bool Stack::isEmpty() {
        if(size==0){
            return true;
        }
        return false;
        //Your code here

    }



// Driver program to test above functions

    int main() {

        class Stack s;

        s.push(10);

        s.push(20);

        s.push(30);

        cout << s.pop() << " Popped from stack\n";
//        cout<<s.peek();



        return 0;

    }