#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main()
{
    vector<int> nums{2,2,1,1,1,2,2};
    map<int,int> freq;
    int size=nums.size(),ans=0;

    for(int i=0;i<size;i++)
        freq[nums[i]]=freq.find(nums[i])==freq.end()?1:freq[nums[i]]+1;
    
    for(auto element:freq)
        if(element.second>=size/2) 
            ans=element.first;
    cout<<ans;
}