using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    //[capture clause](paramters){function body};
    std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    std::for_each(v.begin(), v.end(), [](int i){std::cout << i << " ";});
}