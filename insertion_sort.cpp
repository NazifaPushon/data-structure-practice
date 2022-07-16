#include <iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    int i,j,item;
    for( i =1; i < n; i++){
        item = arr[i];

        j = i -1;
        while(j >= 0 && arr[j] > item){
            arr[j+1] = arr[j];
            j = j -1;
        }

        arr[j+1] = item;
    }

    for(int i = 0; i < n ; i++){
        cout << arr[i] << endl;
    }
        
}

int main (){
    int arr[10] = {1,4,63,6,3,67,24,64,2,5};
    insertion_sort(arr,10);
    return 0;
}

//best case time complexity  O(n)
//worst case time complexity O(n^2)
//space complexity O(1)