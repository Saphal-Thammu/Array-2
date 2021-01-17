
// Time Complexity : O(n) where n is number of elements
// Space Complexity : O(1) we are not using extra space
// Did this code successfully run on Leetcode :yes
// Did this code successfully run on Local Computer :yes
// Any problem you faced while coding this : no


// Your code here along with comments explaining your approach


#include<vector>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<cmath>
#include<time.h>
#include<iostream>

using namespace std; 


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> result;
        if(nums.empty()) return result;
        int abs_diff;
        
        
        for(int i=0;i<nums.size();i++){
            
            abs_diff=abs(nums[i])-1;
            
            if(nums[abs_diff] > 0){
                nums[abs_diff] *= -1;
                
            }
             
        }
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]>0){
                result.push_back(i+1);
            }
            
        }
        return result;
        
        
    }
};

int main(){
    Solution a;
    vector<int>  nums={0,0,1,1,1,1,2,3,3};
    //int target=5;
    vector<int> b = a.findDisappearedNumbers(nums);
    for (int x : b) 
         cout << x << " "; 

    cout<<endl;

    // can either do this below for answer in true false 
    // cout.setf(std::ios::boolalpha);
    // cout <<  b << endl;

    // or

    //cout <<  boolalpha << b << endl;

}
