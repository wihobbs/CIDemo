#include <assert.h>
#include <iostream>
#include <string>

#include "arithmetic.h"

// These include statements are NOT like Python libraries.
// You need to have direct access to the files in your working directory,
// unless they're included in the main C++ stuff. It's called "vendored libraries"
// I believe, because you added all of a vendor's code into your codebase.

int Arithmetic::addition(int x, int y) {
    return (x+y);
}

int Arithmetic::subtraction(int x, int y) {
    return (x-y);
}

int Arithmetic::multiplication(int x, int y) {
    return (x*y);
}

int Arithmetic::division(int x, int y) {
    return (x/y);
}

int main(int argc, char* argv[]) {
    // Assert that we have "add", etc. and two numbers. 
    // The first argument (bc there are four) is "./arithmetic" (the invocation)
    assert(argc == 4);

    // atoi converts arguments to integers. You HAVE to do this or it doesn't compile.
    int x = atoi(argv[2]);
    int y = atoi(argv[3]);

    // Here's another important C++ distinction I forgot
    // You can't just access class methods; you have to instantiate the class first
    // Honestly should've used a namespace for this
    Arithmetic a;

    // This evaluates the command-line input on whether you're adding or whatever
    // Try to mess it up by doing division

    if(std::string("add").compare(argv[1]) == 0) {
        std::cout << a.addition(x, y) << std::endl;
    } else if (std::string("subtract").compare(argv[1]) == 0) {
        std::cout << a.subtraction(x, y) << std::endl;
    } else if (std::string("multiply").compare(argv[1]) == 0) {
        std::cout << a.multiplication(x, y) << std::endl;
    } else if (std::string("divide").compare(argv[1]) == 0) {
        std::cout << a.division(x, y) << std::endl;
    } else {
        std::cout << "Unrecognized function call" << std::endl;
        return -1;
    }
    return 0;
}
