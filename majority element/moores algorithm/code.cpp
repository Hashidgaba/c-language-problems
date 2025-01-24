#include <iostream>
#include <vector>
using namespace std;
// majority element using moore's algo
int majorityElement(vector<int> vec)
{
    int n = vec.size();
    int ans = 0;
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = vec[i];
        }

        if (ans == vec[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    //print ans 
    int count = 0;
    for (int val : vec)
    {
        if (val == ans)
        {
            count++;
        }
    }
    if (count > n / 2)
        return ans;
    else
        return -1;
}
int main()
{
    vector<int> vec = {3,3,4};
    int ans = majorityElement(vec);
    if (ans < 0)
    {
        cout << "Nothing any majority element" << endl;
    }
    else
    {
        cout << "majority element is = " << majorityElement(vec);
    }
    return 0;
}