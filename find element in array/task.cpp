#include <iostream>
using namespace std;

int main(){
    int target;
    bool isFind = false;
    int arr[] = {1,23,34,54,32};
    cout << "Enter any number which you want to find" << endl;;
    cin >> target;

    for(int i = 0; i < 5; i++){
        if(arr[i] == target){
            isFind = true;
        }
    }

    if(isFind){
        cout << "Number is exist in list" << endl;
        cout << "numbers exist in list before " << target << " is : " << endl;
        for(int i = 0 ; i < 5; i++){
            if(arr[i] == target){
                break;
            }else{
                cout << arr[i];
            }
        }
    }else{
        cout << "Number is not exist" << endl;
    }
    return 0;
}