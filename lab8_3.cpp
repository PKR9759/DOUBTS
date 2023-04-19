#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/* Write your code here */
class Person(){
    short int age;
    protected:
    string gender;
    string name;
    public:
    Person(short int age,string gender,string name){
        this->age=age;
        
        this->name=name;
        if(gender=='male' || gender=='female')
            this->gender=gender;
        else{
            this->gender="other";
        }
    }
    void print(){
        cout<<name<<' '<<age<<' '<<gender<<endl;
    }
}


class Employee:public Person{
    int yearly_salary;
    protected:
    string employee_id;
    const string employee_since;
    string designation; 
    string department;
    
    public:
    Employee( string name, string gender,short int  age, string department, string designation,string  employee_since,int  yearly_salary){

    }
    void print(){
        cout<<employee_id<<name<< gender<< age<< department<< designation <<employee_since<< yearly_salary<<endl;
    }
    void increment(float inc){
        yearly_salary += (yearly_salary*(inc/100));
    }


}

class Manager:public Employee{
    protected:
    Employee direct_reports[10];
    short direct_reports_count ;
    public:
    Manager(const &Employee e){
        direct_reports_count=0;
    }
    void print(){
        // read and updteas given   
    }
    void add_direct_report(Employee* e){
        direct_reports[direct_reports_count]=e;
    }
    void change_designation(){
        // rEAD AND add this
    }
    increase_salary(string desig,float per){
        for(int i=0;i<direct_reports_count;i++){
            direct_reports[i].yearly_salary += (direct_reports[i].yearly_salary*(inc/100));
        }
        
    }

}
int main() {
    string name, gender, department, designation, employee_since;
    short age;
    int yearly_salary;
    cin >> name >> gender >> age >> department >> designation;
    cin >> employee_since >> yearly_salary;
    Employee employee(name, gender, age, department, designation,
                      employee_since, yearly_salary);
    Manager manager(employee);
    
    int direct_reports_count = 0;
    cin >> direct_reports_count;
    
    Employee *employee_ptr;
    for(int i = 0; i < direct_reports_count; i++) {
        getchar(); // removing newline from input buffer
        cin >> name >> gender >> age >> department >> designation;
        cin >> employee_since >> yearly_salary;
        employee_ptr = new Employee(name, gender, age, department,
                                    designation, employee_since,
                                    yearly_salary);
        manager.add_direct_report(employee_ptr);
    }
    
    getchar(); // Removing newline from input buffer
    string existing_designation, new_designation;
    cin >> existing_designation >> new_designation;
    manager.change_designation(existing_designation, new_designation);

    float increment_percentage;
    cin >> designation >> increment_percentage;
    manager.increase_salary(designation, increment_percentage);

    manager.print();
    
    return 0;
}
