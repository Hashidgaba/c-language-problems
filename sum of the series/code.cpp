#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any Number" << endl;
    cin >> num;

    int sum = 0;
    int i = 1;
    
    while(i <= num){
        cout << i << " * " <<  i << " = " << i * i << endl;
        sum += i * i;
        i++;
    }

    cout << "The sum of the above series is: " << sum << endl;
    return 0;
}