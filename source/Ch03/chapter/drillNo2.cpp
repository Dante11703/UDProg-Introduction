#include "std_lib_facilities.h"

int main()
{
    string first_name,friend_name;
    int age;
    char sex;
	cout <<"Please enter your first name:\n";
	cin>>first_name;
	cout <<"Please enter your friends name:\n";
	cin>>friend_name;
	cout <<"Is "<<friend_name<<" a male or a female?(Enter 'm' for male, or 'f' for female):";
	cin>>sex;
	cout<<"How old are you?:";
	cin>>age;

	if(age<=0 || age>=150)
	   {
		  simple_error("You're kidding!");
	   }
	   
	cout<<"Dear "<<first_name<<",\nI haven't heard from you in a while. How are you? How is life in Michigan?\nI will be visiting soon, i hope we can meet up sometime.\n\nHave you seen "<<friend_name<<" lately?";

	if(sex='m')
	  {
	     cout<<"\nIf you see "<<friend_name<<" please ask him to call me.";	
	  }
	  else if(sex='f')
	     {
	     	cout<<"\nIf you see "<<friend_name<<" please tell her to call me.";
	     }

	cout<<"I hear you just had a birthday and you turned "<<age<<".\n";

	if(age<=12)
	  {
	  	cout<<"Next year you will be"<<age+1;
	  }
	  else if(age==17)
	     {
	     	cout<<"Next year you will be able to vote.";
	     }
	     else if(age>=70)
	        {
	        	cout<<"I hope you are enjoying retirement.";
	        }

	 cout<<"\nYours sincerely,\n\nDavid!";
}