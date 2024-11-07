#include <iostream>

using namespace std;




int main (){
    // integer 
    int a = 10;
    // declaration of a pointer variable
    int *p;
    // "referencing" pointer p to address of a
    p = &a;  
    
    // value of a
    cout << a << endl;
    // dereferencing pointer p to get the value of a 
    cout << *p << endl;
    // print the pointer itself , which is ADDRESS of a 
    cout << p << endl;
    
    int A[5] = {2,4,6,8,10};
    //declare pointer to array
    int *q;
    // do not need & to reference array
    q=A;
    // or p=&A[0];
    for ( int i = 0; i<5; i++ )
    cout << q[i] << endl;
    return 0;
   // array in heap 
   int *w = new int[5];
    w[0] = 10; w[1] = 20; w[2] = 30; w[3] = 40; w[4] = 50;
    for ( int i = 0; i<5; i++)
    cout << w[i] <<endl;
    delete [ ] w;



    return 0;
}
