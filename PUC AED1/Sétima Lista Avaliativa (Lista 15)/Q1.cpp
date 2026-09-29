#include <iostream>
#include <iomanip>
using namespace std;

class Person{
    string name;
    int age;
    float height;
    
    public:
        Person(string name, int age, float height){
            this -> name = name;
            this -> age = age;
            this -> height = height;
        }
    
        void setName(string name){
            this -> name = name;
        }
        
        void setAge(int age){
            this -> age = age;
        }
        
        void setHeight(float height){
            this -> height = height;
        }
    
        string getName(){
            return name;
        }
        
        int getAge(){
            return age;
        }
        
        float getHeight(){
            return height;
        }
        
        void PrintData(){
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Height: " << height << endl;
        }
};

int main(){
    string name;
    int age;
    float height;
    
    Person p1("John", 25, 1.75);
    
    Person p2("", 0, 0.0f);
    
    cout << "Insert the name of the second person: ";
    getline(cin,name);
    p2.setName(name);
    
    cout << "Insert the age of the second person: ";
    cin >> age;
    p2.setAge(age);
    
    cout << "Insert the height of the second person: ";
    cin >> height;
    p2.setHeight(height);
    
    cout << "Data of the first person: ";
    p1.PrintData();
    
    cout << "Data of the second person: ";
    p2.PrintData();
    
    return 0;
}
