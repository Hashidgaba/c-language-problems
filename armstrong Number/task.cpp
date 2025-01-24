#include <iostream>
using namespace std;

int main(){
    int n,num;
    int sum = 0;
    cout << "Enter any number which you want to check is Armstrong or not" << endl;
    cin >> n;

    while(n > 0){
        num = n %10;
        sum+= num * num * num;
        n/=10;
    }
    if(sum == n){
        cout << "Number is Armstrong";
    }else{
        cout<< "Not Armstrong number" << endl;
    }
    return 0;
}