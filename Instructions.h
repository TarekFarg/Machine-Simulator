//#pragma once
//#ifndef inst
//#define inst
#include <string> 
using namespace std;

class Instructions
{
    public:
        int process_number;			// 1->load , 3->store , 4->mover ..................
        int index_R;				// the index for the register
        int index_1M , index_2M;	// the index for the memory
        int decimal_number = 0;		//convert xy to decimal and store it here
        void set_data(string s);	// to conver the string to the instruction data 
};

//#endif inst
