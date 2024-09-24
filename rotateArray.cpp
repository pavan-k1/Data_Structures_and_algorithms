#include<iostream>
#include<vector>
using namespace std;




class Solution {
public:
    vector<int>rotate(vector<int>& nums, int k) {
         k=k%nums.size();
        int s=0;
        int e=nums.size()-1;
while(s<=e){
            swap(nums[s],nums[e]);
     s++;
            e--;
        }
int sta=0;
int end=k-1;
                while(sta<=end){
                    swap(nums[sta],nums[end]);
                    sta++;
                    end--;

                
            }
        
                int st=k;
                int en=nums.size()-1;
                while(st<=en){
                    swap(nums[st],nums[en]);
                    st++;
                    en--;
                
            }
            return nums;
        }

    };



    int main(){
        vector<int> arr;
        int n;
        cout<<"enter the size of array:"<<endl;
        cin>>n;
        cout<<"Enter the elments:";
        int element;
        for(int i=0;i<n;i++){
           cin>>element;
           arr.push_back(element);
        }
        int k;
        cout<<"Enter how many times wants to rotate:"<<endl;
        cin>>k;

        Solution o;
       arr= o.rotate(arr,k);
       for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
       }
        return 0;

    }