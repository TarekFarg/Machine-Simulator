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
        std::cout << hex << Register[s.index_R] << " ";
        return;
    }

    memory[s.index_1M][s.index_2M] = Register[s.index_R];
}

void Machine::move_4(Instructions s)
{
    int temp = 0;

    temp = Register[s.index_1M];
    Register[s.index_1M] = Register[s.index_2M];
    Register[s.index_2M] = temp;
}

int Machine::jump_B(Instructions s, int i)
{
    if (Register[s.index_R] == Register[0])
        return s.decimal_number;
    else
        return i;
}

void Machine::add_5(Instructions s)
{
  Register[s.index_R]=  Register[s.index_1M]+  Register[s.index_2M];
}

int Machine::exit_C(Instructions s)
{
    return 0;
}
