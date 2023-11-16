#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student {
public:
    string name;
    int age;
    double grade;

    
    Student(const string& name, int age, double grade) {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

   
    void display() const {
       cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main() {
    
    vector<Student> students = {
        {"Bogdan", 20, 9.8},
        {"Ion", 22, 8.5},
        {"Alex", 21, 7.9},
        
    };

    
    sort(students.begin(), students.end(),
        [](const Student& a, const Student& b) {
            
            if (a.grade!= b.grade) {
                return a.grade > b.grade;
            }

            
            if (a.age != b.age) {
                return a.age < b.age;
            }

            
            return a.name < b.name;
        });

    
    cout << "Sorted List of Students:" <<endl;
    for (const auto& student : students) {
        student.display();
    }

    return 0;
}
