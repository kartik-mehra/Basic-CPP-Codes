#include<iostream>
using namespace std;
class fun
{
int a,b;+
public:
	int c;
	fun()
	{
	cout<<"1. for sum of two no.\n";
	cout<<"2. for subtract of two no.\n";
	cout<<"3. for multipley two no.\n";
	cout<<"4. for divide two no.s \n";	
	}
	void operator + ()
	{fun f2;
	 f2.c = a+b;
	 void show();
	}
	void operator - ()
	{fun f2;
	 f2.c = a-b;
	 void show();
	}
	void operator * ()
	{fun f2;
	 f2.c = a*b;
	 void show();
	}
	void operator / ()
	{fun f2;
	 f2.c = a/b;
	 void show();
	}
    void show()
    {
    	cout<<"result is "<<f2.c;
	}
    
};

int main()
{
	int a;
	fun f1;

	cin>>a;
	cout<<"enter the two no.s\n";
	cin>>f1.a;
	cin>>f1.b;
	switch(a)
	{
		case 1:
			{
				f1.a + 
				f1.void operator + ();
				break;
			}
		case 2:
			{
				f1.void operator - ();
				break;
			}
		case 3:
			{
				f1.void  * ();
				break;
			}
		case 4:
			{
				f1.void  / ();
				break;
			}
		
		
			
	}
	
}
