#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector <int>& nums){
    int ans = 0;
    for (int val : nums){
        ans ^= val;
    }
    if(ans > 0){
        return ans;
    }else{
        cout << "no unique value in this array"<< endl;
        return -1;
    }
}
int main(){
    vector <int> nums = {1,1,2,2};
    cout << singleNumber(nums);
    return 0;
}