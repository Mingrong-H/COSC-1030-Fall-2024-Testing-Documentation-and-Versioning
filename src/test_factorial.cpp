#include <iostream>
#include <cassert>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
    return 0;
}

int main() {
   
   cout << "Testing started" << endl;
   
   assert(factorial(1)  == 0);
   cout << "Testing ended" << endl;

   return 0;
}





// source.cpp

