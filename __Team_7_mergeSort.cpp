#include<iostream>
using namespace std;


void merge(int* left, int* right, int leftLen, int rightLen, int* A) 
{
    int i = 0, j = 0, k = 0;
    
    while (i < leftLen && j < rightLen) {
        if (left[i] < right[j])
            A[k++] = left[i++];
        else
            A[k++] = right[j++];
    }

    while (i < leftLen)
        A[k++] = left[i++];
    
    while (j < rightLen)
        A[k++] = right[j++];
}

void mergeSort(int* arr, int length) 
{

    if (length < 2)
        return;

    //Find mid
    int mid = length / 2;
    
    //create left and right sub array
    int *left = new int[mid];
    int *right = new int[length - mid];

    for (int i = 0; i < mid; i++)
        left[i] = arr[i];
    for (int i = mid; i < length; i++)
        right[i - mid] = arr[i];
    
    //sort left and right sub array
    mergeSort(left, mid);
    mergeSort(right, length - mid);
    
    //merge left and right
    merge(left, right, mid, length - mid, arr);
}

int main() 
{
    int arr[] = { 5, 4, 3, 2, 1 };

    mergeSort(arr, 5);
    
    for (int i : arr) {
        cout << i << " ";
    }
}