#include<iostream>
using namespace std;

int main(){
    int r1,r2,c1,c2;
    cout<<"Enter m and n for 1st m x n matrix:\n";
    cin>>r1>>c1;
    cout<<"Enter m and n for 1st m x n matrix:\n";
    cin>>r2>>c2;
    
    if(c1==r2){
        int A[r1][c1],B[r2][c2],C[r1][c2],sum=0;
        cout<<"Enter the elements of matrix A:\n";
        for(int i=0;i<r1;i++)
            for(int j=0;j<c1;j++)
                cin>>A[i][j];

        cout<<"Enter the elements of matrix B:\n";
        for(int i=0;i<r2;i++)
            for(int j=0;j<c2;j++)
                cin>>B[i][j];

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<r2;k++)
                    sum+=A[j][k] + B[k][j];
                C[i][j]=sum;
                sum=0;
            }
        }

        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++)
                cout<<C[i][j]<<" ";
            cout<<endl;
        }
            
    }else{
        cout<<"Column of 1st matrix and row of 2nd matrix shuld be same for matrix  multiplication.\nPlease enter valid value!";
    }
}