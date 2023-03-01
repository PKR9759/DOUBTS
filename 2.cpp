#include <iostream>

using namespace std;
int m(string str) {
	int size=str.size(),cnt=0;
	int last =str[0];
	for(int i=1;i<size;++i){
		if((str[i]+str[i+1])!=1){
		    ++cnt;str[i]=(!last);last=str[i];    
				                                                                                                                                                                   last
		}  
		                                                                                      
                                       
	                                                                                          
	                                                                                               
	}    
	return cnt;                                                                                           
}                                                                                                                                                                                                                                                                                                                
int main()
{
   string s="1011010";
   cout<<m(s);
    return 0;
}
