#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    map<string, string> myDictionary;
    myDictionary.insert(pair<string,string>("apple","der apfel"));
    myDictionary.insert(pair<string,string>("banaa","der banana"));
    myDictionary.insert(pair<string,string>("apple","der apfel"));

    myDictionary["strawberry"] = "Die Erdberra";
    
    for(auto pair : myDictionary){
        cout << pair.first << " - " <<pair.second << endl;
    }
    return 0;
}