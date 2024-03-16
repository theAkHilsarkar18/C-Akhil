#include<iostream>
using namespace std;

class Event
{
	protected : 
	
	int event_id;
	string event_name;
	string event_date;
	
	void adaEventDetail()
	{
		cout << "Set event_id 101 for Movie ...." << endl;
		cout << "Set event_id 102 for Concert ...." << endl;
		cout << "Set event_id 103 for Sports ...." << endl;
		
		cout << "Enter event id : ";
		cin >> event_id;
		cout << "Enter evenr name : ";
		cin >> event_name;
		cout << "Enter event date : ";
		cin >> event_date;
	}	
	
	void displayeEventDetail()
	{
		cout << "event_name : " << event_name << endl;
		cout << "event_date : " << event_date << endl << endl;
	}
	
	
};

class Movie : virtual public Event
{
	protected :
	int ticketAmt;
	
	void bookMovie()
	{	
		if(event_id==101)
		{	
			displayeEventDetail();
			cout << "Enter amount to book ticket : ";
			cin >> ticketAmt;
			cout << "booked successfully !" << endl;
		}
		else                                      
		{    
			printf("There are not ant movies in this event !");
		}
	}
	
};
class Concert : virtual public Event
{
	protected :
	int pass_id;
	void bookConcert()
	{	
		if(event_id==102)
		{	
			displayeEventDetail();
			cout << "Enter pass_id to book ticket : ";
			cin >> pass_id;
			cout << "booked successfully !" << endl;
		}
		else                                      
		{    
			printf("There are not ant Concert in this event !");
		}
	}
};

class Sports : virtual public Event
{
	protected:
	string venue;
	void bookGround()
	{	
		if(event_id==103)
		{	
			displayeEventDetail();
			cout << "Enter venue name to book ground : ";
			cin >> venue;
			cout << "booked successfully !" << endl;
		}
		else                                      
		{    
			printf("There are not ant Concert in this event !");
		}
	}
};

class Booking
{
	protected : 
	int booking_id;
	string username;
	
	void booking()
	{
		cout << "Enter Booking id : ";
		cin >> booking_id;
		cout << "Enter username : ";
		cin >> username;
	}
};

class TicketBookingSystem : public Booking,public Movie,public Sports,public Concert
{
	int res;
		public :
			
			void finalBooking()
			{
				adaEventDetail();
					
				cout << "Enter 1 for movie" << endl;
				cout << "Enter 2 for concert" << endl;
				cout << "Enter 3 for sport" << endl;
				
				cout << "Enter your choice : ";
				cin >> res;
				
				switch(res)
				{
					case 1 : 
					booking();
					bookMovie();
					break;
					case 2 : 
					booking();
					bookConcert();
					break;
					case 3 : 
					booking();
					bookGround();
					break;
					default : cout << "enter valid choice !"<< endl;
				}
			}
};

int main()
{
	TicketBookingSystem t1;
	t1.finalBooking();
}
