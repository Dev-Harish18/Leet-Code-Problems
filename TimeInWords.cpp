#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main(){
    string str="02";
    int i=15;
    string is=to_string(i);
    int si=stoi(str);    

    cout<<typeid(is).name()<<endl<<typeid(si).name()<<endl;
    cout<<"str:\t"<<si<<endl;
    cout<<"int:\t"<<is<<endl;
    
}