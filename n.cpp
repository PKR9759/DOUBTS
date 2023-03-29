#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class engineer{
    int salary;
    string name;
    char team_name;
    public:
    void setsalary(int s){
        salary=s;
    }
    void setname(string  n){
        name=n;
    }
};
class manager{
    int salary;
    string name;
    char region_name;
     public:
    void setsalary(int s){
        salary=s;
    }
    void setname(string  n){
        name=n;
    }
};
class teamleader{
    int salary;
    string name;
    char team_name;
    int team_size;
     public:
    void setsalary(int s){
        salary=s;
    }
    void setname(string  n){
        name=n;
    }    
}



int main() {
    int n;cin>>n;
    while(n--){
    char c;cin>>c;
        switch(c){
            case 'E':
                engineer e;
                int sal;
                cin>>sal
                e.setsalary()
                
                break;
        }
    }
    
    return 0;
}
