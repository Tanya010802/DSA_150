#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int count = 0;
        int index = 0;
        int i = 0;
        while(index < n){
            
            if(nums[i] != val){
                count++;
                index++;
                i = i+1;
                
            }
            else{
                nums.erase(nums.begin() + i);
                index++;
            }
        }
         return count;
    }
};