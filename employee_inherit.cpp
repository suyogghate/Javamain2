/*Build a system for managing employees. 
Create a base class Employee with attributes such as name, employee ID, and salary. 
Then, derive classes like Manager and Developer, each with its own attributes and methods. 
Implement a common method, like calculate_salary(), in the base class.
*/
#include<iostream>
using namespace std;

class Employee{
	protected:
    int id;
    double salary;
    string name;
    public:
//        void Employee(){};
    	Employee(int id, string name, double salary){
            this->id = id;
            this->name = name;
            this->salary = salary;
        }

        virtual void calculateSalary() = 0;

//        void displayInfo(){
//            cout<<"\nId: "<<id<<", name: "<<name<<" ,salary: "<<salary<<endl;
//        }
};

class Manager : public Employee{
    int id;
    double salary;
    string name;
    double bonus;
    public:
        Manager(int id, string name, double salary, double bonus) : Employee(id, name, salary){
            this->id = id;
            this->name = name;
            this->salary = salary;
            this->bonus = bonus;
        }
        
        void calculateSalary(){
            salary = salary + bonus;
        }
        
        void displayInfo(){
            cout<<"\nId: "<<id<<", name: "<<name<<" ,salary: "<<salary<<endl;
        }
};

class Developer : public Employee{
    int id;
    double salary;
    string name;
    int overtime;
    double hourlyRate;
    public:
        Developer(int id, string name, double salary, int overtime, double hourlyRate) : Employee(id, name, salary){
            this->id = id;
            this->name = name;
            this->salary = salary;
            this->overtime = overtime;
            this->hourlyRate = hourlyRate;
        }

        void calculateSalary(){
            salary = salary + (overtime * hourlyRate);
        }
        
        void displayInfo(){
            cout<<"\nId: "<<id<<", name: "<<name<<" ,salary: "<<salary<<endl;
        }
};

int main(){
//	Employee emp(100, "Amit", 15000);
    Manager mgr(101, "Rahul", 20000.00, 1000.00);
    mgr.calculateSalary();
    mgr.displayInfo();
    
    Developer dpr(102, "Suyog", 15000, 10, 25.0);
	dpr.calculateSalary();
    dpr.displayInfo();


    return 0;
}

