#include <iostream>
#include <vector>
using namespace std;
vector<int> productOfarray(vector<int>&nums){
    vector<int> ans(nums.size(), 1);
    for(int i = 0; i < nums.size(); i++){
        int product = 1;
        for(int j = 0; j < nums.size(); j++){
            if(j != i){
                product *= nums[j];
            }
        }
        ans[i] = product;
    }
 
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,4};
    vector <int> result = productOfarray(nums);
    for(int val : result){
        cout << val << " ";
    }
    return 0;
}