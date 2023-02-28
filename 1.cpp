#include <iostream>

using namespace std;

int fun(int &num){
	num++;
	return num;
}

int main(){

	int i=8;
	const int &r=fun(i);
	;
	cout<<r<<' '<<i<<endl;
	cout<<&r<<' '<<&i;
}
