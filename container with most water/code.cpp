#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ht;
    int wt;
    int maxWater = 0;
    int currentWater;
    for (int i = 0; i < height.size(); i++){
        for(int j = i + 1; j < height.size(); j++){

            wt = j - i;
            ht = min(height[i], height[j]);
            currentWater = wt * ht;
            maxWater = max(maxWater, currentWater);
            
        }
    }
    cout << maxWater;
    return 0;
}