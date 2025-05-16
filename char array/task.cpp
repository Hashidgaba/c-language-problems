#include <iostream>
using namespace std;
int fac(int n){
    int product = 1;
    for(int i = n; i >=1; i--){
        product *=i;
    }
    return product;
}
void changeCses(char arr[])
{
   
    int length = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        length++;
    }

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
    }

    cout << "your name is : " << arr << endl;

    cout << "The factorial of the length of your name is " << fac(length);
}
int main()
{
    char user[100];
    cout << "Enter your name" << endl;
    cin.getline(user, 100);
    changeCses(user);
    return 0;
}