#include<iostream>
using namespace std;

int main(){
    int n=11,max=n-1;

    for(int i=0;i<=max;i++){
        for(int j=0;j<=max;j++){
                if(i==0 || i==max || j==0 || j==max)
                    cout<<"*";
                else if(i==j || i+j==max)
                    cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }

}