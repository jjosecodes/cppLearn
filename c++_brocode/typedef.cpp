#include <iostream>

#include <vector>
// typedef is replaced by the using keyword

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

 //typedef std::string text_t;
using text_t = std::string;
using number_t = int;

int main(){
//  pairlist_t pairlist;

    text_t firstName = "Bro";
    number_t age = 21;


    std::cout << firstName << '\n';
    std::cout << age << '\n';
    
    return 0;
}
