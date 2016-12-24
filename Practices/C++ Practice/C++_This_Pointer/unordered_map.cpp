#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    // create an unordered_map
    std::unordered_map<std::string, int> word_map;

    // insert few elements in map
    word_map.insert({"first", 1});
    word_map.insert({"second",2});
    word_map.insert({"third", 3});

    // overwrite the value of an elements
    word_map["third"] = 30;

    // Iterate over the unordered_map and display elements
    for(std::pair<std::string,int> element : word_map)
        std::cout << element.first << "::" << element.second<<endl;
    
    return 0;
}