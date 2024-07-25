#include <iostream>
#include "person.cpp"
using namespace std;

int main() {
    Person eyad = Person("Eyad");
    Person bassam = Person("Bassam", "", &eyad);
    Person firas = Person("Firas", "30/04/2002", &bassam);
    firas.set_occupation("Engineer");

    if (bassam.has_children())
        cout << "Bassam's first child is: " << bassam.get_first_child()->get_name() << endl;
    else
        cout << "Bassam does not have any children.\n";
    
    cout << "Firas's occupation is: " << firas.get_occupation() << endl;

    cout << "Firas's grandfather is: " << firas.get_father()->get_father()->get_name() << endl;
    return 0;
}