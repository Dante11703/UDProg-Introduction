#include "std_lib_facilities.h"
//int a,b;
double a,b,lk=9999999,ln=-99999999;
char unit[10];

int main()
{
      constexpr double cm_per_inch=2.54;
      constexpr double cm_per_meter=100;
      constexpr double inch_per_feet=12;
    /*while(cin>>a>>b)*/ while(cin>>a>>unit)
    {
    	//cout<<a<<" "<<b; //elso feladat
    	/*if(a<b)
    	cout<<"The smaller value is: "<<a<<"\nThe larger value is: "<<b<<"\n";
    	else if(a>b)
    	cout<<"The smaller value is: "<<b<<"\nThe larger value is: "<<a<<"\n";
    	else if(a==b)
    	cout<<"The numbers are equal.\n";*/ //masodik es harmadik feladat
    	/*if(abs(a-b)<=0.01)
    	cout<<"The numbers are almost equal.\n";*/ //otodik feladat
    	/*if(a<=lk)
    	{
        lk=a;
    	cout<<lk<<" Is the smallest so far,\n";
    	}
    	if(a>=ln)
    	{
    	ln=a;
    	cout<<ln<<" Is the largest so far,\n";
    	}*/ //hatodik feladat
    	
    } 
    return 0;
}