#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    int i, j, temp;

    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp =  arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i = 0; i < n ; i++){
        cout << arr[i] << endl;
    }
}

int main (){
    int arr[10] = {1,4,63,6,3,67,24,64,2,5};
    bubble_sort(arr,10);
    return 0;
}

// time complexity O(n^2)