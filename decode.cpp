#include<iostream>
#include<string>
#include<cctype>
#include<cmath>
#include<stack>
using namespace std;

int getNum(stack<string>& s){
    int number=0;
    unsigned i=0;
    while(s.top()[0] >='0' && s.top()[0] <= '9'){
        int temp=int(s.top()[0]) - int('0');
        number=(pow(10,i)*temp)+number;
        s.pop();
        i++;
        if(s.empty())
            break;
    }
    return number;
}

string decodeString(string s){
    unsigned i=0;
    string final="";
    stack<string> stack;

    while(s[i]!='\0'){
        if(s[i]==']'){
            string pop,str="";
                    while(stack.top()!="["){
                        pop=stack.top();
                        stack.pop();
                        str=pop+str;
                    }
                    stack.pop();
                    int n = getNum(stack);
                    string tempStr=str;
                    for(int i=0;i<n-1;i++)
                        str+=tempStr;
                    stack.push(str);
        }else
            stack.push(string(1,s[i]));
        i++;
    }
    while(!stack.empty()){
            final=stack.top()+final;
            stack.pop();
        }
    return final;
}
int main(){
string s="3[a2[c]]";
cout<<decodeString(s);
}

