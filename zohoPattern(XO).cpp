#include<iostream>
#include<map>
using namespace std;

string evenOrOdd(int n){
    return (n%2==0)?"even":"odd";
}
mapInit(map<string,char>&  map,int n){
    if(n%2==0){
        map["even"]='X';
        map["odd"]='O';
    }else{
        map["even"]='O';
        map["odd"]='X';
    }
}
int main(){
    int i,j,m,n,rowDiff,colDiff;
    map<string,char> map;
    cout<<"Enter m and n of m x n matrix:";
    cin>>m>>n;
    mapInit(map,n);
    for(i=0;i<m;i++){
        rowDiff = (i+1 <= m/2) ? i: m-(i+1) ;
        for(j=0;j<n;j++){
            colDiff = (j+1 <= n/2) ? j:n-(j+1);
            if(colDiff<rowDiff)
                cout<<map[evenOrOdd(n-colDiff)];
            else
               cout<<map[evenOrOdd(n-rowDiff)];
            cout<<" ";
        }
        cout<<endl;    
    }
}