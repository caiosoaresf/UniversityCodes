#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

class Employee {
    protected:
        string name;
        double baseSalary;
    
    public:
        Employee(const string& n, double salary) : name(n), baseSalary(salary) {}
    
        virtual double calculateSalary() const {
            return baseSalary;
        }
    
        void displayData() const {
            cout << "Name: " << name << endl;
            cout << "Salary: $" << calculateSalary() << endl;
        }
    
        virtual ~Employee() {} 
};

class Manager : public Employee {
    const double bonus = 2000.0;

    public:
        Manager(const string& n, double salary) : Employee(n, salary) {}
    
        double calculateSalary() const override {
            return baseSalary + bonus;
        }
};

// Developer class
class Developer : public Employee {
    int completedProjects;

    public:
        Developer(const string& n, double salary, int projects) : Employee(n, salary), completedProjects(projects) {}
    
        double calculateSalary() const override {
            const double projectBonus = 500.0;
            return baseSalary + (completedProjects * projectBonus);
        }
};


class Intern : public Employee {
    float scholarshipPercentage; 

    public:
        Intern(const string& n, double salary, float percentage) 
            : Employee(n, salary), scholarshipPercentage(percentage) {
            if (percentage < 0.0 || percentage > 1.0) {
                scholarshipPercentage = 0.5; 
            }
        }
    
        double calculateSalary() const override {
            return baseSalary * scholarshipPercentage;
        }
};

int main() {
    vector<Employee*> employees;

    employees.push_back(new Manager("John Smith", 8000.0));
    employees.push_back(new Developer("Alice Johnson", 5000.0, 3));
    employees.push_back(new Intern("Bob Wilson", 2000.0, 0.7f));
    
    cout << "Employee Salary Report:\n" << endl;
    for (const auto& emp : employees) {
        emp->displayData();
    }

    for (auto emp : employees) {
        delete emp;
    }
    employees.clear();

    return 0;
}
