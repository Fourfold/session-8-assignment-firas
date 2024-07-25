#include "person.h"

Person::Person(const std::string& name, const std::string& birthdate, Person* father, Person* mother) :
    name(name), birthdate(birthdate), father(father), mother(mother) {
        if (father != nullptr) {
            father->add_child(this);
        }
        if (mother != nullptr) {
            mother->add_child(this);
        }
    }
const std::string& Person::get_name() {
    return name;
}
const std::string& Person::get_birthdate() {
    return birthdate;
}
Person* Person::get_father() {
    return father;
}
Person* Person::get_mother() {
    return mother;
}
void Person::set_occupation(const std::string& occupation) {
    this->occupation = occupation;
}
std::string Person::get_occupation() { 
    return occupation;
}
bool Person::has_children() {
    return children.size() > 0;
}
Person* Person::get_first_child() {
    if (has_children())
        return children[0];
    else
        return nullptr;
}
void Person::add_child(Person* child) {
    if (child) {
        children.push_back(child);
    }
}