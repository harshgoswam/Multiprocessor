#include<iostream>
using namespace std;

class College
{
	
	public:
	void set()
	{
		cout<<" College is open"<<endl;
		
	}
};
class University : public College
{

      public:	  
	void set()
    {
    	
    	cout<<"University is open too"<<endl;
    	
    }

};
main()
{   University u;
     u.set();
     u.College ::set();
	
}
