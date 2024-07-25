#include <string>
#include <vector>

class Person {
public:
    Person(const std::string& name, const std::string& birthdate = "", Person* father = nullptr, Person* mother = nullptr);
    virtual ~Person() = default;

    const std::string& get_name();
    const std::string& get_birthdate();
    Person* get_father();
    Person* get_mother();

    void set_occupation(const std::string&);
    std::string get_occupation();
    bool has_children();
    Person* get_first_child();
    void add_child(Person*);

private:
    std::string name;
    std::string birthdate;
    Person* father;
    Person* mother;

    std::string occupation = "unoccupied";
    std::vector<Person*> children;
};
