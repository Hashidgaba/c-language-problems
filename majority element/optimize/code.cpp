#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int majorityElement(vector<int>& vec){
    int n = vec.size();
    //frist we need to sort 
    sort(vec.begin(), vec.end());
    //find frequency
    int freq = 1;
    int ans = vec[0];
    for (int i = 1; i< n; i++){
        if(vec[i] == vec[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = vec[i];
        }
        
        if(freq> n/2){
            return ans;
        }
    }
    
    int count = 0;
    for (int val : vec){
        if(val == ans){
            count++;
        }
    }
    if(count > n/2){
        return ans;
    }else{
        return -1;
    }
}

int main() {
    vector <int> vec = {3,3,4};
    int ans = majorityElement(vec);
    if(ans < 0){
        cout << "Nothing any majority element" << endl;
    }else{
        cout << "majority element is = " << majorityElement(vec);
    }
    
    return 0;
}