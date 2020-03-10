#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> v = {8, 1, 5, 2, 4};

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(v[i] < v[j]){
                std::swap(v[i], v[j]);
            }
        }
    }
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << "\t";
    }
    std::cout << std::endl;
}