#include<iostream>
#include<vector>
using namespace std;

int sumOfActualArray(int num){
    return num*(num+1)/2;//Sum of n natural numbers 
}

int missingNumber(vector<int>& nums){
    int max=-1;
        int currentSum=0;
        bool zeroFlag=false;

        for(int i=0;i<nums.size();i++)
        {   
            currentSum+=nums[i];//sum of the given array
            if(nums[i]==0)
                zeroFlag=true;//Zero is present
            if(max<nums[i])
                max=nums[i];//Finding Max 
        }
        int actualSum=sumOfActualArray(max);
        int result=actualSum-currentSum;
        if(result==0){
            return zeroFlag==true?max+1:0;
        }
        return result;
}

int main(){
vector<int> nums={0,1,3};
cout<<missingNumber(nums);
}