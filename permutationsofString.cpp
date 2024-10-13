#include<iostream>
#include<vector>
using namespace std;


class Solution {

public:
void solve(vector<int>nums,int index,vector<int>output,vector<vector<int>>&ans){
    if(index>=nums.size()){
        output=nums;
        ans.push_back(output);
        
        return;
    }
for(int i=index;i<nums.size();i++){
    swap(nums[i],nums[index]);
    
    solve(nums,index+1,output,ans);
     swap(nums[index],nums[i]);
}
    
}
};


int main(){
    int n;
    cin>>n;

vector<int>nums(n);
cout<<"Enter the array";
for(int i=0;i<n;i++){
    cin>>nums[i];
}
vector<vector<int>> ans;

        vector<int>output;
        int index=0;
Solution o;
o.solve(nums,index,output,ans);

    for (int i=0;i<ans.size();i++){
for(int j=0;j<n;j++){
cout<<ans[i][j];
cout<<" ";
}
cout<<endl;
}
return 0;


}