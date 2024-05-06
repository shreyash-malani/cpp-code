#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void display_info() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    string student_id;

public:
    Student(string n, int a, string id) : Person(n, a), student_id(id) {}

    void display_info() {
        Person::display_info();
        cout << "Student ID: " << student_id << endl;
    }

    void study() {
        cout << name << " is studying." << endl;
    }
};

class Employee : public Person {
private:
    string employee_id;
    double salary;

public:
    Employee(string n, int a, string id, double sal) : Person(n, a), employee_id(id), salary(sal) {}

    void display_info() {
        Person::display_info();
        cout << "Employee ID: " << employee_id << endl;
        cout << "Salary: $" << salary << endl;
    }

    void work() {
        cout << name << " is working." << endl;
    }
};

int main() {
    Person person1("John", 30);
    person1.display_info();
    cout << endl;

    Student student1("Alice", 20, "S123");
    student1.display_info();
    student1.study();
    cout << endl;

    Employee employee1("Bob", 35, "E456", 50000);
    employee1.display_info();
    employee1.work();

    return 0;
}
