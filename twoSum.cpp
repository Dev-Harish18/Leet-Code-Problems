#include<iostream>
#include<vector>
#include<map>

using namespace std;

vector<int> twoSum(vector<int>& v,int target){
    vector<int> result;
    map<int,int> index={{v[0],0}};
    for(int i=1;i<v.size();i++){
        auto ans = index.find(target-v[i]);
        if(ans!=index.end())
            result={ans->second,i};
        else
            index[v[i]]=i;
    }
    return result;
}

int main(){
    vector<int> v={1,2,3,4,5},result;
    result=twoSum(v,9);
    for(int i=0;i<result.size();i++)
        cout<<result[i];
}
