#include<iostream>
#include<string>
using namespace std;



/* Write your code here */
class Person{
    public:
    short int age;
    protected:
    string gender;
    string name;
    public:
    Person(short int age,string gender,string name){
        this->age=age;
        
        this->name=name;
        if(gender=="male" || gender=="female")
            this->gender=gender;
        else{
            this->gender="other";
        }
    }
    short int getage(){
        return age;
    }
    
    void print(){
        cout<<name<<' '<<gender<<' '<<age<<" ";
    }
};


class Employee:public Person{
    int yearly_salary;
    protected:
    static int employee_id;
    int id;
    const string employee_since;
    string designation; 
    string department;
    
    public:
    Employee( string name, string gender,short int  age, string department, string designation,string  e_since,int  yearly_salary):Person(age,gender,name),employee_since(e_since){
         this->yearly_salary=yearly_salary;
        this->id=++employee_id;
        this->department=department;
        this->designation=designation;
    }
    Employee(const Employee &e):Person(e.age,e.gender,e.name),employee_since(e.employee_since){
        this->yearly_salary=e.yearly_salary;
        this->id=1;
        this->department=e.department;
        this->designation=e.designation;
    }
    void print(){
        cout<<'E'<<id<<' ';
        Person::print();
        cout<< department<<' ' <<designation<<' ' <<employee_since<<' '<< yearly_salary<<endl;
    }
    void increment(float inc){
        yearly_salary += (yearly_salary*(inc/100));
    }
    string getdes(){
        return designation;
    }
    void setdes(string des ){
        this->designation=des;
    }
    int getsal(){
        return yearly_salary;
    }
    void setsal(int yearly_salary){
        this->yearly_salary=yearly_salary;
    }
    

};
bool compare(Employee *e1,Employee *e2){
    return (e1->getsal())<(e2->getsal());
}
int Employee::employee_id=1;
class Manager:public Employee{
    protected:
    Employee *direct_reports[10];
    short direct_reports_count ;
    public:
    Manager(const Employee &e):Employee(e){
        direct_reports_count=0;
    }
    
    
    void print(){
//            std::sort(direct_reports,direct_reports+direct_reports_count,compare)
        
        
        for(int i=0;i<direct_reports_count-1;i++){
            for(int j=0;j<direct_reports_count-i-1;j++){
                if(direct_reports[j]->getsal()>direct_reports[j+1]->getsal()){
                    swap(direct_reports[j],direct_reports[j+1]);
                }
            }
        }
        Employee::print();
        for(int i=0;i<direct_reports_count;i++){
            direct_reports[i]->print();
        }
    }
    
    
    void add_direct_report(Employee* e){
        direct_reports[direct_reports_count]=e;
        direct_reports_count++;
    }
    void change_designation(string existing_designation, string new_designation){
        
        for(int i=0;i<direct_reports_count;i++){
            if(direct_reports[i]->getdes()==existing_designation){
                direct_reports[i]->setdes(new_designation);
            }
        }
        
    }
    void increase_salary(string designation,float per){
        
        for(int i=0;i<direct_reports_count;i++){
            if(direct_reports[i]->getdes()==designation){
                int  sal=direct_reports[i]->getsal()*(per/100);
                direct_reports[i]->setsal(sal+direct_reports[i]->getsal());
            }
    }
        
    }

};

int main() {
    string name, gender, department, designation, employee_since;
    short age;
    int yearly_salary;
    cin >> name >> gender >> age >> department >> designation;
    cin >> employee_since >> yearly_salary;
    Employee employee(name, gender, age, department, designation,employee_since, yearly_salary);
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
