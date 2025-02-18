#include <iostream>
using namespace std;
void changeCses(char arr[]){
    for(int i = 0; arr[i] != '\0';i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] -32;
        }else if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] + 32;
        }
    }

    cout << "your name is : " << arr << endl;
}
int main(){
    char userName[100];
    cout << "Enter your Name" << endl;
    cin.getline(userName, 100);
    changeCses(userName);
    
    return 0;
}