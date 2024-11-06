#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breath;
    char x;

};



int main (){

    struct Rectangle r1= {10,5};

    cout<< sizeof(r1)<<endl;


return 0;

}