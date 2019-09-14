#include <iostream>

using namespace std;

int main(){
	
	int b,c,e;
	
	cout<<"Membuat garis miring karakter (*)"<<endl;
	cout<<"=================================="<<endl;
	cout<<"masukan angka: ";
	cin>>e;
	
	for(b=1; b<=e; b++)

	{

		for(c=1;c<=b;c++ )
			cout<<" ";
			cout<<"*";
			cout<<endl;
	}
		

	
	
	return 0;
	
	
}
