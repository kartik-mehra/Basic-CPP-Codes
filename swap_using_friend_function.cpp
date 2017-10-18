#include<iostream>
using namespace std;
class b;
class a
{
int x;
public:
void get()
{
	cin>>x;
	}
	friend void swap(a&,b&);
	void print()
	{
		cout<<x<<"\n";
	}
	void swap(a &obj1,b &obj2)
{
	int c;
	c = obj1.x;
	obj1.x = obj2.y;
	obj2.y = c;
}
};
class b
{
int y;
public:
void get()
{
	cin>>y;
	}	
	friend void swap(a&,b&);
		void print()
	{
		cout<<y<<"\n";
	}
};

int main()
{
	a o1;
	b o2;
	o1.get();
	o2.get();
     swap(o1,o2);
	o1.print();
	o2.print();
	
	
}


