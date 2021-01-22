#include<iostream>
#include<vector>
using namespace std;


int main(){
    string str="program book";
    vector<int> spaces;int j=0,count=0;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]==' ')
            spaces.push_back(i);
    }
    for(int i=str.length()-1;i>=0;i--){
        if(j<spaces.size() && spaces[j]==count)
        {
            cout<<" ";
            count++;
            j++;
        }
        if(str[i]!=' '){
            cout<<str[i];
            count++;
        }

    }

}
