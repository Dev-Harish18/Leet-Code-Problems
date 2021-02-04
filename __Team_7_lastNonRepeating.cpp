#include <iostream>
#include<unordered_map>

using namespace std;

int LastNonRepeating(int *arr,int length){
    unordered_map<int,int> hashMap;
    for(int i=length-1;i>=0;i--)
        hashMap[arr[i]]++;
    for(int i=length-1;i>=0;i--)
        if(hashMap[arr[i]]==1)
            return arr[i];
}

int main() {
    int arr[]={1,4,3,6,2,5,1,3,4,6};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<LastNonRepeating(arr,length);
	return 0;
}