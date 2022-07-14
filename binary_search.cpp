#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int x){
    int left, right , mid;
    left= 0;
    right = n-1;
    while(left <= right){
        mid = (left + right)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] < x){
            left = mid + 1;
        }else{
            right = mid -1;
        }
    }
    return -1;
}

int main (){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int result = binary_search(arr ,10, 5);
    cout << result << endl;
    return 0;
}