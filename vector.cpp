#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector<int> numbers;

    numbers.push_back(0);
    for(int i = 1; i <= 10; i++){
        numbers.push_back(i);
    }


    for(int number:numbers){
        cout << number << endl;
    }

    for(auto it = numbers.begin(); it!=numbers.end(); it++){
       // cout << it << endl;
       cout << *it << endl;
       
       cout << &it  << endl;

       cout << &(*it) << endl;    
    }

    auto it  = numbers.begin();
    cout << *(it + 5);
    return 0;
}