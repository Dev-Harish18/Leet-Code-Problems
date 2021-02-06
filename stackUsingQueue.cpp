#include<iostream>
#include<queue>
using namespace std;

class Stack{
    private:
        queue<int> mainQueue;
        queue<int> tempQueue;
    public:
        void display();
        void push(int data);
        int pop();
};

void Stack::push(int data){
    mainQueue.push(data);
}

void Stack::display(){
    cout<<endl<<"Elements are:\n";
    while(!mainQueue.empty()){
        cout<<mainQueue.front()<<" ";
        mainQueue.pop();
    }
}

int Stack::pop(){
    if(mainQueue.empty())
        return -1;
    int deleted;

    while(!mainQueue.empty()){
        if(mainQueue.front()==mainQueue.back()){
            deleted=mainQueue.front();
            mainQueue.pop();
            break;
        }
        tempQueue.push(mainQueue.front());
        mainQueue.pop();
    }
    
    while(!tempQueue.empty()){
        mainQueue.push(tempQueue.front());
        tempQueue.pop();
    }
    return deleted;
}

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Popped elements:"<<endl;
    cout<<s.pop()<<" ";
    cout<<s.pop()<<" ";
    cout<<endl;
    s.push(6);
    s.display();
}
