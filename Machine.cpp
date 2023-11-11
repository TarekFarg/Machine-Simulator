#include<iostream>
#include "machine.h"
//#include"instructions.h"

void Machine::load_1(Instructions s)
{
    Register[s.index_R] = memory[s.index_1M][s.index_2M];
}

void Machine::load_2(Instructions s)
{
    Register[s.index_R] = s.decimal_number;
}

void Machine::store_3(Instructions s)
{
    if(s.index_1M == 0 && s.index_2M == 0)
    {
        std::cout << Register[s.index_R] << " ";
        return;
    }

    memory[s.index_1M][s.index_2M] = Register[s.index_R];
}
