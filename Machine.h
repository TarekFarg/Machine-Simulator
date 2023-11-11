//#pragma once
//#ifndef MAC
//#define MAC
#include <vector>
#include"instructions.h"

using namespace std;

class Machine
{
    private:

    public:
        int memory[20][20];
        int Register[20];
        void load_1(Instructions s);
        void load_2(Instructions s);
        void store_3(Instructions s);
        void print_3();
        void move_4();
        int add_5();
        double add_6();
        void jump_B();
        void exit_C();


};

//#endif
