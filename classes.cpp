
#include<iostream>
using namespace std;
class area
{
float a,b;
	public:
		void get()
		{
			cout<<"enter the length and breadth\n";
			cin>>a>>b;
			cout<<"area is "<<a*b;
		}
   
};

class ratio
{
int a,b,c=1,i,k;

public:
	void get()
	{
	
cout<<"enter two values \n";
cin>>a>>b;
k = (a>b)?a:b;

for(i=2;i<=k;i++)
{
	if(a%i==0 && b%i==0)
	{
		c=i;
	}
}
	cout<<"ratio is"<<a/c<<":"<<b/c<<"\n";

}
};
class student
{
char name[50];
int a;
public:
	void get();
	void disp();

};
	void student:: get()
	{
		
		cout<<"enter the student id and name";
		cin>>a;
		cin.ignore();
		cin.getline(name,50);
		disp();
		
	}
	void student:: disp()
	{
		cout<<"student id is "<<a<<" and his name is "<<name;
	}

int main()
{
	int a;
	area a1;
	ratio r1;
	student s1;
	cout<<"1. for area of the rectangle\n";
	cout<<"2. for ratio query\n";
	cout<<"3. student details \n";
    	
	
       cin>>a;
       
       switch(a)
	   {
	   	case 1:
	   	a1.get();
	   	break;	
	   	case 2:
	   	r1.get();	
		break;
		 case 3:
		  s1.get();
		  break;  	
		} 
}
