#include<iostream>
using namespace std;

int main(){
    int n=5;
    int rowMax=n*2-2,colMax=n*2-1;

    for(int i=0;i<=rowMax;i++){
        for(int j=0;j<=colMax;j++){
            if(i<=rowMax/2){
                if((j<=i || j>=colMax-i))
                    cout<<"*";
                else
                    cout<<" ";  
            }else{
                if((j<=rowMax-i || j>=i+1))
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
         cout<<endl; 
    }

}