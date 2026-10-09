#include "address.h"
#include <iostream>

Address::Address(){
	street = " ";
	city = " ";
	state = " ";
	zip = " ";
}// end address
void Address::init(std::string s, std::string c, std::string st, std::string z){
	street = s;
	city = c;
	state = st;
	zip = z;
}// end declaration 
 void Address::printAddress(){
	 std::cout << street << std::endl;
	 std::cout << city << "," << state << "," << zip << std::endl;
	}//end print address
	
