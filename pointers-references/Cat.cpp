#include <iostream>
using namespace std;

struct Cat
{
    string name;
};

void pass_by_reference(Cat &c_ref)
{
    cout << "c_ref name (before): " << c_ref.name << "\n";
    c_ref.name = "Nermal";
    cout << "c_ref name (after): " << c_ref.name << "\n";
}

void pass_by_value(Cat c_val)
{
    cout << "c_val name (before): " << c_val.name << "\n";
    c_val.name = "Socks";
    cout << "c_val name (after): " << c_val.name << "\n";
}

int main()
{
    Cat cat1;
    cat1.name = "Garfield";

    cout << "cat1 name (before): " << cat1.name << "\n";
    pass_by_reference(cat1);
    cout << "cat1 name (after): " << cat1.name << "\n";

    Cat cat2;
    cat2.name = "Tom";

    cout << "cat2 name (before): " << cat2.name << "\n";
    pass_by_value(cat2);
    cout << "cat2 name (after): " << cat2.name << "\n";

    return 0;
}
