#include <iostream>
using namespace std;

class hello
{
private:
public:
    void sayhi();
};


void hello::sayhi() {
    cout << "Hello, World!\n";
}

int main()
{
    hello hi = hello();
    hi.sayhi();
    return 0;
}