#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr[]={1,2,5,3,6,7,2,9,1};
    int length=sizeof(arr)/sizeof(arr[0]);
    vector<int> peaks;

    for(int i=0;i<length;i++){
        if(i==0 && arr[i]>arr[i+1])
                peaks.push_back(i);
        else if(i==length-1 && arr[i]>arr[i-1])
                peaks.push_back(i);
        else{
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                peaks.push_back(i);
        }
    }
    cout<<"First Peak: "<<arr[peaks[0]];
    cout<<endl<<"Last Peak: "<<arr[peaks[peaks.size()-1]];
}