
#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include <cstdlib>
#include<time.h>
#include<stdlib.h>
using namespace std;
#ifndef CLS_H
#define CLS_H

void mainMenu();
void dashboard();
void login();
void forgot();   
class Hotel {
    protected:
    	string special;
        static int s_rent ;
        static string s_event;
        
    public:
    
        void menu();
        void showEvent();
        void changeEvent();
        void showMess();
        void changeMess();
        void special_order();
    };
    class Customer : public Hotel{
    protected:
        int  payment, age, cnic, days, room_no;
        string name, password;
         char pass; // S/G/P
    public:
    Customer();
    Customer(int const rr,
			string const & scode, 
          string const & sdesc, 
          int const clevel,
          int const rlevel, 
		  char const & p,
		  int const d
          );
    void Display();
    void setName();
    string getName();
    void setCNIC();
    int getCNIC();
    void setPassword();
    string getPassword();
    friend std::istream& operator >>(istream& is, Customer&  stk);
    friend std::ostream& operator <<(std::ostream& os, Customer const& stk);
    };
    class Manager : public Customer{
	protected:
		
	public:
		Manager(){
			name=" ";
			password=" ";
			cnic=0;
		}
		
		void searchByName(string NAME);
	
		friend std::istream& operator >>(istream& is, Manager&  stk);
		friend std::ostream& operator <<(std::ostream& os, Manager const& stk);
	};
	class Admin : public Customer{
	public:
	Admin(){
			name=" ";
			password=" ";
			cnic=0;
		}	
		
	 friend std::istream& operator >>(istream& is, Admin&  stk);
	 friend std::ostream& operator <<(std::ostream& os, Admin const& stk);
};
void cust_display( int index);
bool checkString(string const &Name);
void input(string *Name, string *Password, int *Age, int *Cnic, int *Days);
void cust_input(Customer (&items)[3], Customer *obj ,int n);
bool checkRoom(Customer (&items)[3],int *index);
void mainMenu();
void dashboard();
void login();
void forgot();
void menu();
void cust_menu();
void manager_menu();
void Admin_menu();
void checkout(int index);
#endif

