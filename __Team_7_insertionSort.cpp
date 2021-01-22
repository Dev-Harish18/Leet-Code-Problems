#include<iostream>
using namespace std;

void insertionSort(int *arr,int length){
    for(int i=1;i<length;i++){
        int j=i,key=arr[i];
        while(key<arr[j-1] && j>0){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=key;
    }
}

int main(){
    int arr[]={5,4,3,2,1};
    insertionSort(arr,5);
    for(int i:arr)
        cout<<i;
}