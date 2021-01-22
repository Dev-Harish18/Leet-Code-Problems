#include<iostream>
#include<string>
#include<stack>

using namespace std;

void printStack(stack<char> &myStack){
while(!myStack.empty()){
                cout<<myStack.top();
                myStack.pop();
            }
}

int main(){
    string str="my book ism";
    stack<char> myStack;
    for(int i=str.length()-1;i>=0;i--){
        if(str[i]==' '){
            printStack(myStack);
            cout<<' ';
        }else
            myStack.push(str[i]);
    }
    printStack(myStack);
}