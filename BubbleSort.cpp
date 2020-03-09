#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> v = {8, 1, 5, 2, 4};

    for(int i = 0; i < v.size()-1; i++){
        for(int j = 0; j < v.size()-i-1; j++){
            if(v[j + 1] < v[j]){
                std::swap(v[j + 1], v[j]);
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] << "\t";
    }
    std::cout << std::endl;

    return 0;
}