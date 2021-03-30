#include <iostream>
#include "Direction.hpp"
#include <string>
#include <map>
using std::string;
using namespace std;

namespace ariel {
//     class Board; 
// }
 class Board{
	public:
	unsigned int col=0;
	unsigned int row=0;
	std::map<unsigned int ,map<unsigned int, string>> brd;

  
 	void post(unsigned int row, unsigned int column, Direction direction, std::string message);
	string read(unsigned int row, unsigned int column, Direction direction, unsigned int length);	
	void show();
     
    };
}

