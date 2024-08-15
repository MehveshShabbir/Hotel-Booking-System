#include "hms.h"
#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include <cstdlib>
#include<time.h>
#include<stdlib.h>
using namespace std;

//const int total_rooms = 5;

void Hotel ::menu(){
 	system("CLS");
            cout<<"Status : S"<<endl;
            cout<<"Single Bed Rent : "<<s_rent<<endl;
            cout<<"Double Bed Rent : "<<s_rent+(s_rent*0.3)<<endl;
            cout<<"Mess : Avaialable"<<endl;
            cout<<"Swimming Pool : Available"<<endl;
            cout<<"SPA :  Available"<<endl;
            cout<<"Special order service available"<<endl;
            cout<<"Events : S-Rated "<<endl;
            
            CHOICE:
            string choice;
            cout<<"0-Exit\t\t1-Confirm\nEnter your Choice: ";
            cin>>choice;
            if(choice=="0")         mainMenu();
           else if(choice=="1"){
           	//	if(roomAvailability())			exit;
           	//	else		
				   {
				   		cout<<"Sorry! No room available on this floor\n";
						system("PAUSE");
				   		mainMenu();
				   }				
				 		
		   }
            else  goto CHOICE;      
        	
 } 
        void Hotel::showEvent(){
        	cout<<"Events: "<<s_event<<endl;
        	system("PAUSE");
        	cust_menu();
        	
		}
        void Hotel :: changeEvent(){
        	cout<<"Make changes: ";     cin>>s_event;
        	cout<<"Changes have been made\n";
        	
        	system("PAUSE");
        	manager_menu();
        	
		}
        
        
		void Hotel :: showMess(){
			string temp;

            //to read a file
            ifstream print("data/mess_menu.txt");

            //checking if file is opened or not
            if(print.fail()){
                cout<<"Error opening file\n";
            }
                //Reading the multiple lines

                while(getline(print, temp)){
                cout<<temp<<endl;
                }

                print.close();
                system("PAUSE");
        		cust_menu();
        	
		}
		void Hotel :: changeMess(){
        	string text;
            int line_number;
            
            cout << "Text: ";
            getline(cin, text);
            
            cout << "Line: ";
            cin >> line_number;
            
            fstream read_file;
            
            read_file.open("data/mess_menu.txt");
            
            if (read_file.fail())
            {
                cout << "Error opening file." << endl;
            }
            
            vector<string> lines;
            string line;
            
            while (getline(read_file, line))
                lines.push_back(line);
            
            read_file.close();
            
            
            if (line_number > lines.size())
            {
                cout << "Line " << line_number;
                cout << " not in file." << endl;
                cout << "File has " << lines.size();
                cout << " lines." << endl;
				  // return 1;
            }
            
            ofstream write_file;
                        
			write_file.open("data/mess_menu.txt");
            
            // If the file failed to open, exit with an error message and exit status
            if (write_file.fail())
            {
                cout << "Error opening file." << endl;
              //  return 1;
            }
            
            line_number--;

            for (int i = 0; i < lines.size(); i++)
            {
                if (i != line_number)
                write_file << lines[i] << endl;
                else 
                write_file << text << endl; 
            }
            
            // Close our access to the file since we are done working with it
            write_file.close();
            
            system("PAUSE");
            manager_menu();

            
		}
        void Hotel :: special_order(){
        	 cout<<"Special order: ";	cin.ignore();
            getline(cin, special);
            cout<<"Your order of "<<special<<" have been recieved\n";
            system("PAUSE");
        	cust_menu();
        	
		}
		int Hotel::s_rent=150;
string Hotel::s_event="Ali Zafar Concert at 9pm on Thursday\n";
         Customer::Customer(){
    	name="null";
    	password=" ";
    	cnic=0;
    	days=0;
    	room_no=0;
    	age=0;
	}
          Customer::Customer(int const rr,
			string const & scode, 
          string const & sdesc, 
          int const clevel,
          int const rlevel, 
		  char const & p,
		  int const d
          ):room_no(rr),
		  name(scode),
            password(sdesc),
            age(clevel),
            cnic(rlevel),
			pass(p),
			days(d){}
   	void Customer::Display(){
		cout<<"\nRoom no: B-"<<room_no<<endl;
		cout<<"\nName: "<<name<<endl;
		cout<<"CNIC: "<<cnic<<endl;
		cout<<"Pass: "<<pass<<endl;
		cout<<"Days: "<<days<<endl;
		cout<<"Charges: "<<days*s_rent<<endl;
	}	
    void Customer::setName(){
		cout<<"Name: ";		cin.ignore();	getline(cin, name);
	}
	string Customer :: getName(){
		return name;
	}
	
	void Customer :: setCNIC(){
		cout<<"Enter CNIC: ";		cin>>cnic;
	}
	int Customer::getCNIC(){
		return cnic;
	}
	
	void Customer :: setPassword(){
		cout<<"Set Password: ";			cin>>password;
	}
	string Customer:: getPassword(){
		return password;
	}
	
	std::istream& operator >>(istream& is, Customer&  stk)
    {
       if (is) { 
          is 
          	 >> stk.room_no
             >> stk.name
             >> stk.password 
             >> stk.age 
             >> stk.cnic
			 >> stk.pass
			 >> stk.days;
       }
       return is;
    }
	std::ostream& operator <<(std::ostream& os, Customer const& stk)
    {
       os 
       	  << stk.room_no<<' '
          << stk.name << ' '
          << stk.password << ' '
          << stk.age << ' '
          << stk.cnic
          << stk.pass
          << stk.days
          << '\n' //Line break after every object so that you can open and read.
          ;
          return os;
    }
    
    void Manager ::searchByName( string NAME){
			Customer items[3];
			bool temp=true;
			 ifstream fileIn;
      		fileIn.open("data/customer.txt");

 
			 for ( int i = 0; i < 3 ; ++i ) { 
			        fileIn >> items[i] ;
			        if(items[i].getName()==NAME){
			        	items[i].Display();
			        	temp=false;
			        	break;
					}	
					else		continue;   
			     }
			if(temp)		cout<<"Sorry! UserName not found\n";
			
			      fileIn.close();
		}
        
	
		
void checkout(int n){
		cout<<"Working\n";
		Customer items[3];
		
		Customer obj;
		cout<<"Working\n";
	//	obj = Customer(n, "/","/",0, 0, '/', 0);
	//	obj=Customer(0, "null", "null",0,0,'/',0);
		
		ifstream fileIn;
      fileIn.open("data/customer.txt");

 
 for ( int i = 0; i < 3 ; ++i ) { 
        fileIn >> items[i] ;
      // cout<<items[i];
       
}

	fileIn.close();

	   ofstream ofs;
     ofs.open("data/customer.txt", ofstream::out);
     for ( int i = 0; i < 3 ; ++i ) { 
     	if(i!=n)
        ofs << items[i];
        
        else
        ofs<<obj;
     }

     ofs.close();
     
     cout<<"Record for Room B-"<<n<<" is deleted\n";
     
     system("PAUSE");
     manager_menu();
			
			
		}
		
        std::istream& operator >>(istream& is, Manager&  stk)
    {
       if (is) { 
          is 
             >> stk.name
             >> stk.password 
             >> stk.cnic;
       }
       return is;
    }
    std::ostream& operator <<(std::ostream& os, Manager const& stk)
    {
       os 
          << stk.name << ' '
          << stk.password << ' '
          << stk.cnic
          << '\n' //Line break after every object so that you can open and read.
          ;
          return os;
    }
    
    std::istream& operator >>(istream& is, Admin&  stk)
    {
       if (is) { 
          is 
             >> stk.name
             >> stk.password 
             >> stk.cnic;
       }
       return is;
    }
    std::ostream& operator <<(std::ostream& os, Admin const& stk)
    {
       os 
          << stk.name << ' '
          << stk.password << ' '
          << stk.cnic
          << '\n' //Line break after every object so that you can open and read.
          ;
          return os;
    }
void cust_display( int index){
	Customer items[3];
   ifstream fileIn;
      fileIn.open("data/customer.txt");

 
 for ( int i = 0; i < 3 ; ++i ) { 
      fileIn >> items[i] ;
      //items[i].Display();
       
        
     }
	 items[index].Display();

      fileIn.close();
      
      system("PAUSE");
      Admin_menu();
      
}
bool checkString(string const &Name) {
    return Name.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ") ==
       string::npos;
}
void input(string *Name, string *Password, int *Age, int *Cnic, int *Days){
	NAME:
		cin.ignore();
	cout<<"Name: ";				getline(cin, *Name);
 if(!checkString(*Name))  { 
	cout<<"Please only enter  alphabets\n";
	goto NAME;     
 } 
 cout<<"Password: ";cin>>*Password;
/*	cout<<"Age: ";
	while(!(cin>>*Age))	{
		cin.clear();
		cin.ignore(1000,'\n');
		cout<<"Invalid age...Try again\n";
	}	*/
	bool f;
	do{
		try{
			cout<<"Age: ";
			cin>>*Age;
			if((*Age>=18)&&(*Age<=99)){
				f=true;
			}
			else if(cin.fail()){
				cin.clear();
				cin.ignore(256,'\n');
				throw(*Age);
			}
			else{
				throw(*Age);
			}
		}
		catch(int myage){
			cout<<"Enter age between 18 and 99\n";
			f=false;
		}
	}while(f==false);
	
	bool c;
	do{
		try{
			cout<<"CNIC: ";
			cin>>*Cnic;
			if((*Cnic>=0000)&&(*Cnic<=9999)){
				c=true;
			}
			else if(cin.fail()){
				cin.clear();
				cin.ignore(256,'\n');
				throw(*Cnic);
			}
			else{
				throw(*Cnic);
			}
		}
		catch(int mycnic){
			cout<<"Enter CNIC between 0000 to 9999\n";
			c=false;
		}
	}while(c==false);
	
	cout<<"How many days would you like to stay: ";
	cin>>*Days;
//	cout<<"CNIC: "<<*Cnic;
//	cout<<"Days: "<<*Days;

}
void cust_input(Customer (&items)[3], Customer *obj ,int n){
	
	 ifstream fileIn;
      fileIn.open("data/customer.txt");

 
 for ( int i = 0; i < 3 ; ++i ) { 
        fileIn >> items[i] ;
      // cout<<items[i];
       
}

	fileIn.close();

	   ofstream ofs;
     ofs.open("data/customer.txt", ofstream::out);
     for ( int i = 0; i < 3 ; ++i ) { 
     	if(i!=n)
        ofs << items[i];
        
        else
        ofs<<*obj;
     }
		

	

     ofs.close();
}
bool checkRoom(Customer (&items)[3],int *index){
	bool temp=false;
	ifstream fileIn;
	  fileIn.open("data/customer.txt");
	
	
	for ( int i = 0; i < 3 ; ++i ) { 
	    fileIn >> items[i] ;
	    if(items[i].getCNIC()==0){
	    	*index=i;
	    	temp=true;
	    	break;
		}
		else				continue;
	}
	fileIn.close();	
	return temp;		
}

void mainMenu(){
    string choice;

    MENU:           // goto flag
    system("CLS");
    cout<<"---------Services type----------------\n";
    cout<<"S - Standard\n";
    cout<<"G - Gold\n";
    cout<<"P - Platinum\n";
    cout<<"E - Exit\n";
    cout<<"Which service would you like to avail? ";

    cin>>choice;
    
        if(choice=="S")
        {
          Hotel s;
		  s.menu();  
        }
        else if(choice=="E")
        {
            dashboard();
        }
        else
        {
        	"You enetred a wrong choice\n";
			goto MENU;		
		}
    }
void dashboard(){
    string choice;

    DASHBOARD:          //label
    system("CLS");
    string temp_name, temp_password;
    system("Color E4");
    cout<<"\n\t\t------------Welcome to Hotel----------------------\n";
    cout<<"\t\t\t\t1-Login\n\t\t\t\t2-Forgot Password\n\t\t\t\t3-Book Room\n\n\t\t\t\tYour Choice: ";
    cin>>choice;
    cin.ignore();
    if (choice=="1")   {  
    system("Color B5");
	 login();
	 	}  
    else if(choice=="2")   
	{
		system("Color F6");
	  forgot();
	  	}  
    else if(choice=="3")     {
    	system("Color 0A");
  		menu();
  	} 
    else
    {   system("Color DE");
    	cout<<"\t\tYou entered wrong entity.Try again\n";
    	system("PAUSE");
    	goto DASHBOARD;
	}
	}
void login(){
			string temp_name, temp_password;
			Customer items[3];
		
		
			LOGIN:
				system("CLS");
				cin.ignore();
			cout<<"\n\t\tLOGIN\n";
			cout<<"\n\t\tUsername: ";			getline(cin, temp_name);//cout<<"\nusss: "<<temp_name<<endl;
			cout<<"\t\tPassword: ";		getline(cin, temp_password);
			//cout<<"\npasss: "<<temp_password<<endl;
				bool c;
//	do{
//		try{
//			cout<<"Password: ";
//			cin>>temp_cnic;
//			if((*Cnic>=0000)&&(*Cnic<=9999)){
//				c=true;
//			}
//			else if(cin.fail()){
//				cin.clear();
//				cin.ignore(256,'\n');
//				throw(temp_);
//			}
//			else{
//				throw(*Cnic);
//			}
//		}
//		catch(int mycnic){
//			cout<<"Enter CNIC between 0000 to 9999\n";
//			c=false;
//		}
//	}while(c==false);
//			
			bool temp=true;
			 
	//customer
			ifstream filec;
      		filec.open("data/customer.txt");
      		
			 for ( int i = 0; i < 3 ; ++i ) { 
			        filec >> items[i] ;
			        if((items[i].getName()==temp_name)&&(items[i].getPassword()==temp_password)){
			        	temp=false;	
			        	cout<<"\n\t\tW E L C O M E  "<<temp_name<<endl;
						cust_menu();
			        	break;
					}	
					else		continue;  
					filec.close(); 
			}
			
		//manager
			if(temp){
				Manager m;
//				ifstream filem;
//				filem.open("data/manager.txt");
//				filem>>m;
 	ifstream ifs;
 	ifs.open("data/manager.txt");
 	 ifs >> m ;
				if((m.getName()==temp_name)&&(m.getPassword()==temp_password)){
			        manager_menu();
			        
			        	temp=false;
				}
				ifs.close();		
			}
		//Admin	
			if(temp){
					Admin h;
//				ifstream fileh;
//				fileh>>h;
//				fileh.open("data/admin.txt");
	ifstream ifss;
 	ifss.open("data/admin.txt");
 	 ifss >> h ;
				if((h.getName()==temp_name)&&(h.getPassword()==temp_password)){
						Admin_menu();
			        	temp=false;
				}	
				ifss.close();	
			}
			if(temp){
				string choice;
				cout<<"Username or password is wrong. \n";
				CHOICE:
				cout<<"1-Try again!\n";
				cout<<"0-Go Back\n\nChoice: ";
				cin>>choice;
				if(choice=="0")  dashboard();
				else if(choice=="1")   
				goto LOGIN;
				else{
					cout<<"Wrong choice.Choose again\n";
					goto CHOICE;
				}
			}
		
	}
void forgot(){
	string temp_name;
	int temp_cnic;
	Customer items[3];
	Manager m;
	Admin h;
	LOGIN:
		system("CLS");
		cin.ignore();
		cout<<"Username: ";
		getline(cin,temp_name);
		cout<<"CNIC: ";cin>>temp_cnic;
		
//			bool c;
//	do{
//		try{
//			cout<<"CNIC: ";
//			cin>>temp_cnic;
//			if((temp_cnic>=0000)&&(temp_cnic<=9999)){
//				c=true;
//			}
//			else if(cin.fail()){
//				cin.clear();
//				cin.ignore(256,'\n');
//				throw(temp_cnic);
//			}
//			else{
//				throw(temp_cnic);
//			}
//		}
//		catch(int mycnic){
//			cout<<"Enter CNIC between 0000 to 9999\n";
//			c=false;
//		}
//	}while(c==false);
//		
//		
		bool temp=true;
		
//Customer
		ifstream filec;
		filec.open("data/customer.txt");
		for(int i=0;i<3;i++){
			filec>>items[i];
			if((items[i].getName()==temp_name)&&(items[i].getCNIC()==temp_cnic)){
				 ofstream ofc;
			     ofc.open("data/customer.txt", ofstream::out);
			     for ( int j = 0; j < 3 ; ++j ) { 
			     	if(j!=i)
			        ofc << items[j];
			        
			        else
			        items[j].setPassword();
			        ofc<<items[j];
				 }
			     ofc.close();
			        
				temp=false;
				break;
			}
			else
			continue;
			filec.close();
		}
		
//manager
		if(temp){
			ifstream filem;
			filem.open("data/manager.txt");
			filem>>m;
			if((m.getName()==temp_name)&&(m.getCNIC()==temp_cnic)){
				 ofstream ofm;
			     ofm.open("data/manager.txt", ofstream::out);
			       // ofm << m;
			        m.setPassword();
			        ofm<<m;
			     ofm.close();
				temp=false;
			}
			filem.close();
		}
		
//Admin
		if(temp){
			ifstream fileh;
		
			fileh.open("data/admin.txt");
				fileh>>h;
				if((h.getName()==temp_name)&&(h.getCNIC()==temp_cnic)){
				ofstream ofh;
			     ofh.open("data/admin.txt", ofstream::out);
			        //ofh << h;
			        h.setPassword();
			        ofh<<h;
			     ofh.close();
				temp=false;
			}
			fileh.close();
		}
		if(temp){
			string choice;
			CHOICE:
				cout<<"Username or CNIC is wrong.\n1-Try Again!\n";
				cout<<"0-Go back\nChoice: ";
				cin>>choice;
				if(choice=="0") dashboard();
				else if(choice=="1")  goto LOGIN;
				else{
					cout<<"Wrong choice.Choose again\n";
					goto CHOICE;
				}
		}
		
		system("PAUSE");
        	dashboard();
}

void menu(){
	system("CLS");
			cout<<"\n\n\t\t\t-----Room Services------"<<endl;
            cout<<"\t\tPass : S"<<endl;
            cout<<"\t\tSingle Bed Rent : "<<150<<endl;
            cout<<"\t\tDouble Bed Rent : "<<150+(150*0.3)<<endl;
            cout<<"\t\tMess : Avaialable"<<endl;
            cout<<"\t\tSwimming Pool : Available"<<endl;
            cout<<"\t\tSPA :  Available"<<endl;
            cout<<"\t\tSpecial order service available"<<endl;
            cout<<"\t\tEvents : S-Rated "<<endl;
            
            CHOICE:
            string choice;
            cout<<"\t\t0-Exit\t\t1-Confirm\n\t\tEnter your Choice: ";
            cin>>choice;
            if(choice=="0")         dashboard();
           else if(choice=="1")		exit;
            else{
            	cout<<"\n\t\tplease select 0 or 1\n";
            	system("PAUSE");
            	goto CHOICE;	
			}        
        	
}

void cust_menu(){
	Customer obj;
	
	CHOOSE:
		system("CLS");
						string choose;		
	cout<<"What do you want to do?\n0-Exit\n1-Food Menu\n2-Special Order\n3-Coming Events\n4-Reset Password\n\nChoice: ";
	cin>>choose;
					if(choose=="0"){
					login();
					}
					else if(choose=="1"){
						system("Color F5");
						obj.showMess();
					}
					else if(choose=="2"){
						system("Color 0A");
						obj.special_order();
					}
					else if(choose=="3"){
						system("Color F5");
						obj.showEvent();
					}
					else if(choose=="4"){
						system("Color 0A");
						forgot();
					}
					else
					{	system("Color 3C");
						cout<<"You enetered wrong choice\nRe-enter your choice:\n";
						system("PAUSE");
						goto CHOOSE;
					}
}

void manager_menu(){
			Manager m;
			CH:
					int room=1;
						system("CLS");
					string ch;
			        	//mainMenu();
	cout<<"What do you want to do?\n0-Exit\n1-Change Mess\n2-Delete record\n3-Change Event\n4-Reset password\n\nChoice: ";
	//cout<<"Enter your choice\n";
	getline(cin,ch);
						if(ch=="0"){
							login();
						}
			        	else if(ch=="1"){
			        		//system("Color E5");
			        		m.changeMess();
						}
						else if(ch=="2"){
//							cout<<"Enter room no. ";
//							cin>>room;
							//system("Color E5");
							checkout(room);
						}
						else if(ch=="3"){
							system("Color B4");
							m.changeEvent();
						}
						else if(ch=="4"){
							system("Color B4");
							forgot();
						}
						else
						{
							cout<<"You entered wrong choice\nRe-enter you choice:";
							goto CH;
						}
						
}

void Admin_menu(){
	Admin h;
			CH:
					int room;
						system("CLS");
					string ch;
			        	//mainMenu();
	cout<<"What do you want to do?\n0-Exit\n1-Show record\n2-Reset password\n\nChoice: ";
	//cout<<"Enter your choice\n";
	getline(cin,ch);
						if(ch=="0"){
							login();
						}
			        	else if(ch=="1"){
			        		//system("Color E5");
			        		cout<<"Enter room no. ";
			        		cin>>room;
							if (room > 0 && room <= 3) {
								cust_display(room);
							} else {
								cout << "Invalid room number. Please try again." << endl;
							}

						}
						else if(ch=="2"){
							forgot();
						}
						else
						{
							cout<<"You entered wrong choice\nRe-enter you choice:";
							goto CH;
						}
						
}
