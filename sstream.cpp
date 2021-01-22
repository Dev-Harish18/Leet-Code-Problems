#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

vector<int> parseInts(string str) {
	int num;char c;
    vector<int> v;
    stringstream ss(str);
    
    while(ss >> num){
        v.push_back(num);
        ss>>c;
    }
        
    return v;
}

int main(){
    string str;
    vector<int> v;
    cout<<"Enter a string:\n";
    cin>>str;
    v=parseInts(str);
    for(auto i:v)
        cout<<i<<endl;
}