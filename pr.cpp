#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class point{
     public:
    int x,y;
   
    point(int x,int y){
        this->x=x;
        this->y=y;
    }
};
class rect{
    
    point p[4];
    public:
    rect(point p1[]){
        for(int i=0;i<4;i++){
            this->p[i]=p1[i];
        }
    }
    //friend class point;
    void mu(int u){
        p[0].y+=u;
        p[1].y+=u;
        p[2].y+=u;
        p[3].y+=u;
    }
    void mr(int u){
        p[0].x+=u;
        p[1].x+=u;
        p[2].x+=u;
        p[3].x+=u;
    } 
    void ml(int u){
        p[0].x-=u;
        p[1].x-=u;
        p[2].x-=u;
        p[3].x-=u;
        
    } 
    void md(int u){
        p[0].y-=u;
        p[1].y-=u;
        p[2].y-=u;
        p[3].y-=u;
        
    }
    
    
    
    void du(int u){
        p[0].y-=u;
        p[1].y-=u;
       
    }
    void dr(int u){
       
        p[1].x-=u;
        p[2].x-=u;
        
    } 
    void dl(int u){
        p[0].x+=u;
        
        p[3].x+=u;
        
    } 
    void dd(int u){
       
        p[3].y+=u;
        p[2].y+=u;
       
        
    }
    

    void iu(int u){
        p[0].y+=u;
        p[1].y+=u;
        
    }
    void ir(int u){
        
        p[1].x+=u;
        p[2].x+=u;
        
    } 
    void il(int u){
        
        p[0].x-=u;
        p[3].x-=u;
        
    }
    void id(int u){
        
        p[2].y-=u;
        p[3].y-=u;
    } 
    
    void print(rect &r){
        cout<<r.p[0].x<<' '<<r.p[0].x<<endl;
        cout<<r.p[1].x<<' '<<r.p[1].x<<endl;
        cout<<r.p[2].x<<' '<<r.p[2].x<<endl;
        cout<<r.p[3].x<<' '<<r.p[3].x<<endl;
        
    }
    
        
    
    
};
int main() {
    point p[4];
    for(int i=0;i<4;i++){
        
        cin>>p[i].x>>p[i].y;
        
        
    }
    rect mp(p);
       
    
    
    int n;
    cin>>n;
    while(n--){
    char dir;cin>>dir;
    switch(dir)
    {
      case 'L':
        int ul;
        mp.ml(ul);
        break;
      case 'R':
        int ur;
        mp.mr(ur);
        break;
      case 'U':
        int uu;
        mp.mu(uu);
        break;
      case 'D':
        int ud;
        mp.md(ud);
        break;
       case 'A':
            char di;cin>>di;
            switch(di){
                case 'D':
                    char d;cin>>d;
                    switch(d){
                      case 'L':
                        int udl;
                        mp.dl(udl);
                        break;
                      case 'R':
                        int udr;
                        mp.dr(udr);
                        break;
                      case 'T':
                        int udt;
                        mp.du(udt);
                        break;
                      case 'B':
                        int udb;
                        mp.dd(udb);
                        break;
                    }
                case 'I':
                    char i;cin>>i;
                    switch(i){
                      case 'L':
                        int uil;
                        mp.il(uil)
.                       break;
                      case 'R':
                        int uirr;
                        mp.ir(uirr);
                        break;
                      case 'T':
                        int uit;
                        mp.iu(uit);
                        break;
                      case 'B':
                        int uib;
                        mp.id(uib);
                        break;
                    }
            }
    }
    }
        rect.print();
    }
 
