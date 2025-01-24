#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ht, wt, maxWater = 0;
    int currentWater;
    int leftWt = 0;
    int rightWt = height.size() - 1;

    while(leftWt < rightWt) {
        ht = min(height[leftWt], height[rightWt]);
        wt = rightWt - leftWt;
        currentWater = ht * wt;
        maxWater = max(maxWater, currentWater);
        height[leftWt] < height[rightWt] ? leftWt++ : rightWt--;
    }

    cout << maxWater;
    return 0;
}