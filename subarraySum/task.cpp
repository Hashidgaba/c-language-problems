#include <iostream>
#include <vector>
using namespace std;
int subarrayMaxsum(vector<int> vec)
{
    int maxSum = INT32_MIN;
    for (int st = 0; st < vec.size(); st++)
    {
        int currentSum = 0;
        for (int end = st; end < vec.size(); end++)
        {
            currentSum += vec[end];
            maxSum = max(currentSum, maxSum);
        }

    }
    return maxSum;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << subarrayMaxsum(vec);
    return 0;
}