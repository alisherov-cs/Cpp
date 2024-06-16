#include <iostream>
#include <string>
using namespace std;

class Human {
    private:
        string name;
        int age;
    public:
        string getName() {
            return this->name;
        }
        int getAge() {
            return this->age;
        }
        Human(string name, int age) {
            this->name = name;
            this->age = age;
        }
};

class Person : public Human {
    private:
        string job;
    public:
        string getJob() {
            return this->job;
        }
        Person(string name, int age, string job) : Human(name, age) {
            this->job = job;
        }
};

int main() {
    Person john("John", 20, "Developer");
    Person* bob = new Person("Bob", 24, "Polic");

    cout << john.getName();
    cout << bob->getAge();
}
