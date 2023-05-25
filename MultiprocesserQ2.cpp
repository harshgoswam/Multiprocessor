#include<iostream>
#include<string.h>


using namespace std;

class Hotel
{
	public:
		 void Data()
		 
		 {
		 	cout<<"Hotel Name is Taj"<<endl;
		 	
		 }	
		 void Data(int n)
		 {
		 	cout<<"Taj Hotel Total Rooms:-"<< n <<endl;
		 }
		 void Data(char h[] ,int a)
		 {
		 	cout<<"Hotel Address:-"<< h<<endl<<"Hotel Total Staff :-"<< a <<endl;
		 }
		 void Data(char b[],float c,int d)
		 {
		 	cout<<"Hotel Contact No:-"<< b<<endl<<"Hotel Rooms Size:-"<< c<<endl <<"Hotel No Of Restaurants:-"<< d <<endl;
		 }
	

};
main()
{
	Hotel h;
	h.Data();
	h.Data( 560);
	h.Data("Mumbai,Maharashtr",1001);
	h.Data("13245689",20.20f,9);
}




