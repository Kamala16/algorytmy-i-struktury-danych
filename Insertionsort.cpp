//
// Created by ola on 28.08.19.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> v = {8, 1, 5, 2, 4};

    for(int i = 1; i < v.size(); i++){
        int j = i-1;
        int temp = v[i];
        while(j >= 0 && v[j] > temp){
            v[i] = v[j];
            j = j - 1;
        }
        v[j+1] = temp;
    }

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << "\t";
    }
    std::cout << std::endl;
}