#include <vector>
#include <string>

using std::vector;
using std::string;

int main () {
    vector<int> ints = {};
    // We can add values of the same type...
    ints.push_back(1);
    ints.push_back(2);

    // but not of others!
    ints.push_back("hello"); // Causes compilation to fail

    vector<string> strings = {"hello", "world"};

    // Add another string.
    strings.push_back("!");

    // Once again, only the type specified will be accepted!
    strings.push_back(1); // Causes compilation to fail
}