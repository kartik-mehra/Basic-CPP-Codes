#include<iostream>
using namespace std;
 void disp(int a, int b)
 {
 	int c;
 	c=a;
 	a=b;
 	b=c;
 	
 	cout<<"first value is "<<a<<"\n";
    cout<<"second value is "<<b<<"\n";
 }
 void disp(int *a,int *b)
 {
 	int c;
 	c=*a;
 	*a=*b;
 	*b=c;
 	
 }
 void swap(int &d,int &e)
 {
 	int c;
 	c=d;
 	d=e;
 	e=c;
 }
int main()
{
	int a,b;
	/*cout<<"enter the two values";
	cin>>a>>b;
	cout<<"call by value\n";
	disp(a,b);
	cout<<"call by address";
	disp(&a,&b);
	cout<<"add firts value is "<<a<<"\n";
	cout<<"add second value is "<<b<<"\n";
	cout<<"call by reference\n";*/
	cin>>a>>b;
	swap(a,b);
	cout<<"ref first value is "<<a<<"\n";
    cout<<"ref second value is "<<b<<"\n";

 }
  
 

