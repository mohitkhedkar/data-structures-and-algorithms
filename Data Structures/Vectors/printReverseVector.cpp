#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> numbers;

    for(auto i=0;i<5;i++){
        numbers.push_back(i);
    }

    for(auto i=numbers.rbegin();i<numbers.rend();i++){
        cout<<*i;
    }
    
    cout<<endl;
    numbers.pop_back();
    for (auto i = numbers.begin(); i < numbers.end(); i++)
    {
        cout<< *i;
        numbers.pop_back();
        cout<<endl<<numbers.size();
    }
    

}