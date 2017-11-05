#include<iostream>
using namespace std;
class student
{
int rn;
protected:
char course[10];
public:
void set_rn()
{
cin>>rn;
}
int get_rn()
{
return rn;
}
};
class result:student
{
int marks[5];
public:
void get()
{
cout<<"roll no is:";
set_rn();
cout<<"course is:";
cin>>course;
cout<<"marks are";
for(int i=0;i<2;i++)
cin>>marks[i];
}
int total()
{
int s=0;
for(int i=0;i<2;i++)
s=s+marks[i];
return s;
}
void disp()
{
cout<<"roll number is:"<<get_rn()<<"\n";
cout<<"course is"<<course<<"\n";
cout<<"total is:"<<total();
}
};
main()
{
result s1;
s1.get();
s1.disp();
}
