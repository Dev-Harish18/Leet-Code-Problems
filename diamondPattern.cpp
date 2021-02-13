#include<iostream>
using namespace std;

int main(){
    int n=3,rowMax=n*2-2,colMax=n*2-2;

    for(int i=0;i<=rowMax;i++){
        for(int j=0;j<=colMax;j++){
            if(i<=rowMax/2){
                if(j>=n-1-i && j<=n-1+i)
                    cout<<"*";
                else
                    cout<<" ";
            }else{
                if(j>=i-n+1 && j<=2*n-i)
                    cout<<"*";
                else 
                    cout<<" ";
            }
        }
        cout<<endl;
    }

}