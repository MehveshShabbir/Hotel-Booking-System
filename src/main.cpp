#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include <cstdlib>
#include<time.h>
#include<stdlib.h>
using namespace std;
#include "hms.h"


int main(){
	Customer p;
dashboard();

	system("CLS");
    Customer items[3];
    
    int index;
    
   if(!checkRoom(items, &index)){
   	cout<<"\tSorry! No room available \n";
   	system("PAUSE");
   	dashboard();
   }
   else{
   	cout<<"\tRoom avaialable\n";
   }
  //  cout<<"index: "<<index<<endl;
      string Name, Password;
    int Age,Cnic, Days, Room;
    char Pass='S';
    
   input(&Name, &Password, &Age, &Cnic, &Days); 
	Customer obj;
	obj = Customer(index, Name, Password, Age, Cnic, Pass, Days);
   
 cust_input(items, &obj, index);
	//	cust_display(6);
	cout<<"Congragulations! Room B-"<<index<<" is booked in Hotel\n";
 //system("PAUSE");

 dashboard();

 	
//	cout<<"\n-------------------------\n";
 	
// 	Admin h;
// 	h.setName();
// 	h.setCNIC();
// 	h.setPassword();
//
//	ofstream ofss;
//    ofss.open("pFloor.txt", ofstream::out);
//        	ofss << h;
//    ofss.close();
//	ifstream ifss;
// 	ifss.open("pFloor.txt");
// 	 ifss >> h ;
//      cout<<"\nH-Name: "<<h.getName()<<endl;
//      cout<<"H-Cnic: "<<h.getCNIC()<<endl;
//      cout<<"H-Password: "<<h.getPassword()<<endl;
// 		
//	ifss.close();
//	
////	
////	cout<<"\n-------------------------------------\n";
//// 	
// 	Manager m;
// 	m.setName();
// 	m.setCNIC();
// 	m.setPassword();
//
//	ofstream ofs;
//    ofs.open("gFloor.txt", ofstream::out);
//        	ofs << m;
//    ofs.close();
////        
// 	ifstream ifs;
// 	ifs.open("gFloor.txt");
// 	 ifs >> m ;
//      cout<<"\nM-Name : "<<m.getName()<<endl;
//      cout<<"M-Cnic: "<<m.getCNIC()<<endl;
//      cout<<"M-Password: "<<m.getPassword()<<endl;
// 		
//	ifs.close();
return 0;
	}

