#include<iostream>
#include<map>
#include<vector>
using namespace std;

int binarySearch(vector<int> a,int value,int start,int end){
    int mid=(start+end)/2;
    if(end<start)
        return start;
    if(a[mid]==value)
        return mid;
    if(a[mid] > value)
        return binarySearch(a,value,mid+1,end);
    else if(a[mid] < value)
        return binarySearch(a,value,start,mid-1);
}


vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player){
    vector<int> unique,result;
    for(int i=0;i<ranked.size();i++){
        if(i==0){
            unique.push_back(ranked[i]);
            continue;   
        }
        if(ranked[i] == ranked[i-1])
            continue;
        else
            unique.push_back(ranked[i]);
    }
    for(int i=0;i<player.size();i++){

        if(player[i]>=unique[0])
            result.push_back(1);
        else if(player[i]==unique[unique.size()-1])
            result.push_back(unique.size());
        else if(player[i]<unique[unique.size()-1])
            result.push_back(unique.size()+1);
        else{
            int pos=binarySearch(unique,player[i],0,unique.size()-1);
            result.push_back(pos+1);
        }
    }
    return result;
}

int main(){
    vector<int> result,test{100,50,40,20,10},ranked{100,100,50,40,40,20,10},player{5,25,50,120};
    result=climbingLeaderboard(ranked,player);
    cout<<binarySearch(test,20,0,4);
    cout<<"The result is:\n";
    for(auto i:result)   
        cout<<i<<endl;
}