// --------------
// Assertions.c++
// --------------

// http://en.cppreference.com/w/cpp/error/assert

#include <cassert>  // assert
#include <iostream> // cout, endl

int cycle_length (int n) {
    assert(n > 0);
    int c = 1;
    while (n > 1) {
        if ((n % 2) == 0)
            n = (n / 2);
        else
            n = (3 * n) + 1;
        ++c;}
    assert(c > 0);
    return c;}

int main () {
    using namespace std;
    cout << "Assertions.c++" << endl;

    assert(cycle_length( 1) == 1);
    assert(cycle_length( 5) == 6);
    assert(cycle_length(10) == 7);

    cout << "Done." << endl;
    return 0;}

/*
% g++ -pedantic -std=c++14 -Wall -Weffc++ Assertions.c++ -o Assertions
% ./Assertions
Assertions.c++
Assertion failed: (c > 0), function cycle_length, file Assertions.c++, line 19.



% g++ -pedantic -std=c++14 -DNDEBUG -Wall -Weffc++ Assertions.c++ -o Assertions
% Assertions
Assertions.c++
Done.
*/
