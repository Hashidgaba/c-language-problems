#include <iostream>
using namespace std;
double myPow(double x, int n)
{
    double ans = 1;
    int binForm = n;
    //when power is negative
    if(n < 0){
        x = 1/x;
        binForm = -binForm;
    }

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }

    return ans;

}

int main()
{
    cout << myPow(2, 5);
    return 0;
}