#include <iostream>
#include <vector>
using namespace std;
int majorityElement(vector <int> vec){
    int n = vec.size();
    for (int val : vec){
        int freq = 0;
        for (int el : vec){
            if(el == val){
                freq ++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
}
int main()
{
    vector<int> vec = {1, 2, 2, 1, 1};
    cout << "majority element is " << majorityElement(vec);
    return 0;
}