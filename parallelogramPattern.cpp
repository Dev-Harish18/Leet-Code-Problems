#include<iostream>
using namespace std;

int main(){
    int n=5,rowMax=n-1,colMax=n*2-2;

    for(int i=0;i<=rowMax;i++){
        for(int j=0;j<=colMax;j++){
                if(j>=rowMax-i && j<=colMax-i)
                    cout<<"*";
                else
                    cout<<" ";
        }
        cout<<endl;
    }

}