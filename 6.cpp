#include<iostream>

using namespace std;
int main()
{
int nilai;
 cout<<"Masukkan Batas Nilai :";
 cin>>nilai;

 for(int a = 1; a <= nilai; a++)
 {
  for(int b = 1; b <= a; b++)
  {
  cout<<b<<" ";
  }
 cout<<endl;
 }


return 0;

}