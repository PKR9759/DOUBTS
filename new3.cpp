#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

class Employee{
    string employee_id;
    string employee_name;
    string designation ;
    int salary;
    public:
    friend class Company;
    Employee (){};
    Employee(string employee_id,string employee_name,string designation ,int salary ){
    this->employee_id=employee_id;
    this->employee_name=employee_name;
    this->designation=designation;
    this->salary=salary;
        
    }
    void increment (int i){
        salary+=i;
    }
};
class Company{
    string name;
    int cnt=0;
    Employee arr[10];
    public:
    Company(string name){
        this->name=name;
    }
    void add_employee(Employee e){
        for(int i=0;i<cnt;i++){
        if(e.employee_id=="e.id")
            return;
        }
        arr[cnt]=e;
        ++cnt;
    }
    void print(){
        for(int i=0;i<cnt;i++){
            cout<<arr[i].employee_id<<" "<<arr[i].employee_name<<" "<<arr[i].designation<<" "<<arr[i].salary<<endl;
        }
    }
    void increase_salary(string eid,int i){
        
        for(int i=0;i<cnt;i++){
        if(arr[i].employee_id==eid){
            arr[i].salary=arr[i].salary+i;
            break;
        }
        }
    }
};

int main() {
    string company_name;
    cin >> company_name;
    Company cmp("MyCompany");

    int n;
    cin >> n;
    string employee_id, employee_name, designation;
    int salary;
    Employee emp;
    for(int i = 0; i < n; i++) {
        getchar(); // Removing newline from input buffer
        cin >> employee_id >> employee_name >> designation >> salary;
        emp = Employee(employee_id, employee_name, designation, salary);
        cmp.add_employee(emp);
    }

    int m = 0, increment_amount;
    cin >> m;
    for(int i = 0; i < m; i++) {
        getchar(); // Removing newline from input buffer
        cin >> employee_id >> increment_amount;
        cmp.increase_salary(employee_id, increment_amount);
    }

    cmp.print();

    return 0;
}
