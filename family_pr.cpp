#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class person{
    string name;
    int age;
    public:
    person(string name,int age){
        this->name=name;
        this->age=age
    }
    void print(){
        cout<<age<<' '<<name<<endl;
    }
};

class family{
    person members[20];
    member_cnt=0;
    public:
    friend class person;
    void add_member(string name,int age){
        person_members[member_cnt].name=name;
        person_members[member_cnt].age=age;
        member_cnt++;
    }print(){
        for(int i=0;i<member_cnt;i++){
            print(person_members[i].name,person_members[i].age);
        }
    }
}
      


int main() {
      
    return 0;
}
