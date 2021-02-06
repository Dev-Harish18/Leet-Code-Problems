#include<iostream>
#include<stack>

using namespace std;

class Queue{
    private:
        stack<int> pushStack;
        stack<int> popStack;
    public:
        void enqueue(int data);
        int dequeue();
        void display();
};

void Queue::enqueue(int data){
    pushStack.push(data);
}

void Queue::display(){
    cout<<"Push Stack:"<<endl;
    while(!pushStack.empty()){
        cout<<pushStack.top()<<" ";
        pushStack.pop();
    }
    cout<<endl;
    cout<<"Pop Stack:"<<endl;
    while(!popStack.empty()){
        cout<<popStack.top()<<" ";
        popStack.pop();
    }
}

int Queue::dequeue(){
    if(popStack.empty() && pushStack.empty())
        return -1;
    if(!popStack.empty()){
        int deleted=popStack.top();
        popStack.pop();
        return deleted;
    }
    int deleted;
    while(!pushStack.empty()){
        popStack.push(pushStack.top());
        pushStack.pop();
    }
    deleted=popStack.top();
    popStack.pop();
    return deleted;
}

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    q.dequeue();
    q.enqueue(6);
    q.display();
}