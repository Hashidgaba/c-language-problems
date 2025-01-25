#include <iostream>
using namespace std;

int main(){
    char userName[100];
    cout << "Enter your Name" << endl;
    cin.getline(userName, 100);
    for(int i = 0; userName[i] != '\0'; i++){
        if(userName[i] >= 'a' && userName[i] <= 'z'){
            userName[i] = userName[i] - 32;
        }else if(userName[i] >= 'A' && userName[i] <= 'Z'){
            userName[i] = userName[i] + 32;
        }
    }
    cout << "your name is: " << userName;
    return 0;
}