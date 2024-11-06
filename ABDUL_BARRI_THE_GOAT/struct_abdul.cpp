#include <iostream>

using namespace std;

struct Rectangle{
    int length;
    int breath;
    char x;

};



int main (){

    struct Rectangle r1= {10,5};
    r1.length = 15;
    r1.breath = 10;
    r1.x = 'j';
    cout<< sizeof(r1)<<endl;

    cout << "length is " << r1.length << endl;
    cout<< "breath is " << r1.length << endl;
    cout<<"char is " <<  r1.x << endl;



return 0;

}