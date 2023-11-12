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
        void move_4(Instructions s);
        int add_5();
        //double add_6();
        int jump_B(Instructions s);
        int exit_C(Instructions s);


};

//#endif
