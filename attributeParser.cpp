#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> split(string s, char delimiter){
    vector<string> v;
    string temp;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            v.push_back(temp);
            temp="";
        }
        else
            temp.push_back(s[i]);
    }
    v.push_back(temp);
    return v;
}

int main(){
    string str="actor vijay thalapathy";
    vector<string> splittedArray;
    splittedArray=split(str,' ');
    for(int i=0;i<splittedArray.size();i++){
        cout<<splittedArray[i]<<endl;
    }
}
