#include<iostream>
using namespace std;

int main(){
    string str1="abcd",str2="abcdf";
    bool dict[26]={false};
    //cin>>str1>>str2;
    for(int i=0;i<=str1.size();i++)
        dict[str1[i]-'a']=true;
    
    for(int i=0;i<str2.size();i++){
        if(dict[str2[i]-'a']==true)
            continue;
        else
            cout<<str2[i];
    }
}