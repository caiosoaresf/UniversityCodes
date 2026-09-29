#include <iostream>
#include <string>
using namespace std;

class Employee {
    protected:
        string name;
        double baseSalary;
        double taxRate;
    
    public:
        Employee() : name(""), baseSalary(0.0), taxRate(0.0) {}
        Employee(string n, double salary, double tax) : name(n), baseSalary(salary), taxRate(tax) {}
    
        string getName() const { return name; }
        double getBaseSalary() const { return baseSalary; }
        double getTaxRate() const { return taxRate; }
    
        void setName(string n) { name = n; }
        void setBaseSalary(double salary) { baseSalary = salary; }
        void setTaxRate(double tax) { taxRate = tax; }
};

class Salesperson : public Employee {
    private:
        double salesAmount;  
        double commissionRate;
    
    public:
        Salesperson() : Employee(), salesAmount(0.0), commissionRate(0.0) {}
        Salesperson(string n, double salary, double tax, double sales, double commission) : Employee(n, salary, tax), salesAmount(sales), commissionRate(commission) {}
    
        double calculateSalary() const {
            double grossSalary = baseSalary + (commissionRate * salesAmount);
            double netSalary = grossSalary * (1.0 - taxRate);
            return netSalary;
        }
    
        double getSalesAmount() const { return salesAmount; }
        double getCommissionRate() const { return commissionRate; }
    
        void setSalesAmount(double sales) { salesAmount = sales; }
        void setCommissionRate(double commission) { commissionRate = commission; }
};

int main() {
    Salesperson sp1("John Smith", 2000.0, 0.15, 5000.0, 0.1); 
    Salesperson sp2("Sarah Johnson", 2500.0, 0.2, 8000.0, 0.15);

    cout << "Salesperson 1:" << endl;
    cout << "Name: " << sp1.getName() << endl;
    cout << "Net Salary: $" << sp1.calculateSalary() << endl << endl;

    cout << "Salesperson 2:" << endl;
    cout << "Name: " << sp2.getName() << endl;
    cout << "Net Salary: $" << sp2.calculateSalary() << endl;

    return 0;
}
