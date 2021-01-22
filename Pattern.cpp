#include<iostream>
using namespace std;

int main(){
    int i,j,n=5,rowDiff,colDiff;
    cout<<"Enter a Number:";
    cin>>n;
    for(i=0;i<2*n-1;i++){
        rowDiff = (i < n) ? i - 0 : (2*n-2)-i ;
        for(j=0;j<2*n-1;j++){
            colDiff = (j < n) ? j - 0 :(2*n-2)-j;
            if(colDiff<rowDiff)
                cout<<n-colDiff;
            else
               cout<<n-rowDiff;
            
            cout<<" ";
        }
        cout<<endl;    
    }
}