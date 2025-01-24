#include <iostream>
#include<vector>
using namespace std;
int maximumSubarray(vector<int> vec){
    int currentSum = 0;
    int maxSum = INT32_MIN;
    for (int val: vec){
        currentSum += val;
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}
int main(){
    vector <int> vec = {1,2,3,4,5};
    cout << maximumSubarray(vec);
    return 0;

}