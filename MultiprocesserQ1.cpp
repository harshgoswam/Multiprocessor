#include<iostream>
#include<string.h>

using namespace std;

class Friend
{
	private:
		 char F[];
		 
		 public:
		 	Friend(char n[])
		 	{
		 		strcpy(F,n);
			 }
			 void set()
			 {
			 	cout<<"tody my  friend birthdy"<<endl;
			 }
			 void set(char n[])
			 {
			 	cout<<F<<" "<<n;
			 }
		 			 	
		 
};

main()
{
	Friend f("happy birthdy friend  ");
	f.set();
	f.set("friend");
	
}
