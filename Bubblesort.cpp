//
// Created by ola on 28.08.19.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> v = {8, 1, 5, 2, 4};

    for(int i = 0; i < v.size()-1; i++){
        for(int j = 1; j < v.size(); j++){
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