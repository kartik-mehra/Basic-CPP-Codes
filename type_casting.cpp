#include<iostream>
using namespace std;
class array
{
	int i,arr[10];
	public:
		float s=0;
array(int *a)
{

	for(i=0;i<5;i++)
	{
		s = s + *(a+i);
	}
//	cout<<s;
	
	}
	operator int()
	{
	
		return s;
		
		}	
	operator float()
	{
		float a;
		a = s / 5.0;
		return a;
		
		}	
};
int main()
{
	int a[5] = {1,2,3,4,5};
	array a1 = a;
	int sum=a1;
	
	cout<<sum<<"\n";
	float avg = 0;
	avg = (float)a1;
	cout<<avg;
}
// other way
/*
class array
{
	int i,arr[10];
	public:
		int s=0;
array(int a[])
{

	for(i=0;i<5;i++)
	{
		arr[i] = a[i];
			}
//	cout<<s;
	
	}
	operator int()
	{
	for(i=0;i<5;i++)
	{
		s = s + arr[i];
			}
		return s;
		
		}	
	operator float()
	{
		float a;
		a = s / 5;
		return a;
		
		}	
};
*/


