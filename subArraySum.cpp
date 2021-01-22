#include<iostream>
using namespace std;
int main(){
    int T,N,S;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N>>S;
        int arr[N],leftEdge=0,sum=0;
        bool success=false;
        for(int j=0;j<N;j++)
            cin>>arr[j];
        for(int rightEdge=0;rightEdge<N;rightEdge++){
            sum+=arr[rightEdge];
            while(sum>S){
                sum-=arr[leftEdge++];
            }
            if(sum==S){
                cout<<leftEdge+1<<" "<<rightEdge+1<<endl;
                success=true;
                break;
            }
        }
        if(success==false)
            cout<<-1<<endl;
    }
}