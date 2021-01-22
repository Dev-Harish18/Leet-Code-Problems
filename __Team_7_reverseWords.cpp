#include<iostream>
using namespace std;

void swap(char &a,char &b){
    char temp=a;
    a=b;
    b=temp;
}

int main(){
    string str="program book";
    int i=0,j=str.length()-1;
    while(i<j)
        swap(str[i++],str[j--]);
    cout<<str;
}