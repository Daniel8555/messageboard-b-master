#include <string>
#include "Direction.hpp"
#include "Board.hpp"
#include "Direction.hpp"
using namespace std;
using std::string;
namespace ariel{

    void Board::post(unsigned int row, unsigned int column, Direction direction, std::string message)
    {
        unsigned int siz=(message.size());
   

       if(direction==Direction::Horizontal)
       {
           unsigned int i=0;
           for(unsigned int x =column;x<siz+column;x++)
           {
               
               brd[row][x]=message.at(i);
                i++;
           }

       }
           if(direction==Direction::Vertical)
       {
           unsigned int i=0;
           for(unsigned int x =row;x<siz+row;x++)
           {
              
               brd[x][column]=message.at(i);
               i++;

           }
           
       }

    }
   string Board::read(unsigned int row, unsigned int column, Direction direction, unsigned int length)
	{
        string result;
          if(direction==Direction::Horizontal)
       {
           for(unsigned int x =column;x<length+column;x++)
           {
               if(brd[row][x].empty())
               {
                    result+="_";
               }
                else 
                {
                    result+=brd[row][x];
                }

           }

       }

             if(direction==Direction::Vertical)
       {
           for(unsigned int x =row;x<length+row;x++)
           {
            
               if(brd[x][column].empty())
               {
                    result+="_";
               }
                else 
                {
                    result+=brd[x][column];
                }

           }
           

       }
           if(this->row>row)
       {
           row=row;
       }
          if(this->col<column)
       {
           col=column;
       }
       return result;
    }
    void Board::show()
    {

    }
}