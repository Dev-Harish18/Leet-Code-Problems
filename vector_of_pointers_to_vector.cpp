#include<iostream>
#include<vector>
using namespace std;

int main(){
// int n,q;
// cout<<"Enter n,q:\n";
// cin>>n>>q;
// int** seq = new int*[n];
// for(int i=0;i<n;i++) {
//     int a;
//     cin>>a;
//     int* b=new int [a];
//     for(int j=0;j<a;j++) {
//         int e;
//         cin>>e;
//         b[j]=e;
//     }
//     *(seq+i)=b;
// }
// for(int i=0;i<q;i++) {
//   int r,s;
//   cin >> r >> s;
//   cout << seq[r][s] << endl;
// }

    int n,q,k;
    cout<<"Enter n And q:\n";
    cin>>n>>q;
    vector<vector<int>> arr;
    for(int i=0;i<n;i++){
          cout<<"Enter Length of the array:\n";
          cin>>k;
          cout<<"Enter the elements of the array:\n";
          vector<int> v;
          for(int j=0;j<k;j++){
            int temp;
            cin>>temp;
            cout<<"Inserted";
            v.push_back(temp); 
          }
         arr.push_back(v);   
    }
    for(int i=0;i<q;i++){
        int outer,inner;
        cout<<"Enter the indexes to query:\n";
        cin>>outer>>inner;
        cout<<"The element is:\n";
        cout<<arr[outer][inner];   
    }
return 0;
}


// int main(){
//     int n,q,k;
//     cin>>n>>q;
//     vector <vector<int>*> arr;
//     for(int i=0;i<n;i++){
//           cin>>k;
//           vector<int> v;
//           for(int j=0;j<k;j++){
//             int temp;
//             cin>>temp;
//             v.push_back(temp);  
//           }
//          arr.push_back(&v);   
//     }
//     for(int i=0;i<q;i++){
//         int outer,inner;
//         cin>>outer>>inner;
//         cout<<arr[outer]->at(inner);   
//     }
    
// }
