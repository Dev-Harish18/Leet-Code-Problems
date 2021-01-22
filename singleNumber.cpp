#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    vector<int> v{1,2,3,2,1};
    
    unordered_map<int,int> map;
    for(int i=0;i<v.size();i++)
    map[v[i]] = map.find(v[i])==map.end()?1:map[v[i]]+1;
    for(auto i=map.begin();i!=map.end();i++)
        {
            if(i->second==1){
                cout<<i->first<<endl;
                break;
            }
        }
    
    
    // int ans=0;
    // for(int i = 0; i < v.size(); i++)
    //        ans = ans ^ v[i];
        
    // cout<< ans;

    
}