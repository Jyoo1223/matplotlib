#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a{1, 3, 5, 8, 9};  // Initialize the vector
    for(const auto& res : a){       // Loop through each element in the vector
        cout << res << "\n";         // Print the value of each element
    }
    return 0;
}
