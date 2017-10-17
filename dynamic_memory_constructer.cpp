#include<iostream>
using namespace std;
class jai
{
	public:
		int b,*arr,l=0,m=0;
	jai(int a)
	{
		b=a;
		arr = new int(b);
		cout<<"enter the no. \n";
		for(int i=0;i<b;i++)
		{
			cin>>arr[i];
		if(arr[i]%2==0)
		{
			l++;
		}
		else
		m++;	
		}
		
	}
};
int main()
{
	int a;
	cout<<"enter the no. of elements do u want to enter\n";
	cin>>a;
	jai b1(a);
cout<<"even no. are "<<b1.l<<"\n";
cout<<"odd no. are "<<b1.m<<"\n";

}
