#include <iostream>
using namespace std;

int linear_search(int arr[],  int n, int x){
    for(int i = 0; i < n ; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main (){
    int arr[5] = {82,48,39,4,2};
    int result =  linear_search(arr,5,82);
    cout << result << endl;
    return 0;
}

//time complexity O(n)