#include <vector>
#include <iostream>
using namespace std;
int main(){

    std::vector<std::string>vec;
    vec.push_back("welcome to my fisrt programm!");

    for(int i=0; i<vec.size(); i++){

        std::cout << vec[i] << std::endl;

    }
}