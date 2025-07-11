#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a{1,3,5,8,9};
    for(const auto& res:a){
        cout<<resgit init<<"\n";
    }
    return 0;
}