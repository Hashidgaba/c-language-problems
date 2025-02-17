#include <iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1,2,4},{3,5,7},{7,5,4}};
    int maxElement = arr[0][0];
    int minElement = arr[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] > maxElement){
                maxElement = arr[i][j];
            }
            if(arr[i][j] < minElement){
                minElement = arr[i][j];
            }
        }
    }

    cout << "Max Element is : " << maxElement << endl;
    cout << "Min Element is : " << minElement << endl;
    return 0;
}