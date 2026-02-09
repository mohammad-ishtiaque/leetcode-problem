#include <iostream>
#include <vector>
using namespace std;

#define endl "\n";

vector<int> twoSum(vector<int>& nums, int & target) {
        vector<int> result;

        for(int i =0 ; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i]+nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }

        return result;
}


int main() {
    
#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    vector<int> nums = {3, 3};
    int target = 6;

    vector<int> out = twoSum(nums, target);
    
    for(auto u : out ){
        cout << u << " ";
    }
    cout << endl; 

    return 0;
}