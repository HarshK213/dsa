#include <iostream>
using namespace std;

void move_Zero(int arr[], int size){
    int i = 0;
    for(int j= 1;j<size-1;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}

int main(){
    int arr[9] = {0,1,0,3,0,2,0,0,0};
    move_Zero(arr,9);
    for(int i = 0;i<9;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;

}