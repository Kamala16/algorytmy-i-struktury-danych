// #include <iostream>
// #include <vector>
// #include <algorithm>

// void selectionSort(std::vector<int> list){
//     for(int i = 0; i < list.size(); i++){
//         int minEl = i;
//         for(int j = i + 1; j < list.size(); j++){
//             if(minEl > list[j]){
//                 minEl = list[j];
//             }
//         }
//         std::swap(list[i], minEl);
//     }
// }

// int main(){
//     std::vector<int> list;
    
//     for(int i = 0; i < 5; i++){
//         int x;
//         std::cin >> x;
//         list.push_back(x); 
//     }
//     selectionSort(list);
//     for(auto i: list){
//         std::cout << i;
//     }
//     return 0;
// }
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