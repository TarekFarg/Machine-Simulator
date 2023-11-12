// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
//#include "Instructions.h"
#include"machine.h"
//using namespace std;

int main()
{
    int n;    // number of instructions
    cin >> n;

    Machine mac;
    
    Instructions a;
    vector<Instructions> the_instructions; // to store the instructions 
    
    string s;
    
    // store the instructons
    for (int i = 0; i < n; i++)
    {
        cin >> s; 
        a.set_data(s);
        the_instructions.push_back(a);

        //cout << the_instructions[i].process_number << " " << the_instructions[i].index_R << " " << the_instructions[i].index_1M << "/" << the_instructions[i].index_2M << "   " << the_instructions[i].decimal_number << endl;
    }


    // loop over the instructions and apply them
    for (int i = 0; i < n; i++)
    {
        int process = the_instructions[i].process_number;
        switch (process)
        {
        case 1:
            mac.load_1(the_instructions[i]);
            break;
        case 2:
            mac.load_2(the_instructions[i]);
            break;
        case 3:
            mac.store_3(the_instructions[i]);
            break;
        case 4:
            mac.move_4(the_instructions[i]);
            break;
        case 5:
            //do
            break;
        case 6:
            //do
            break;
        case 11:
            if(mac.Register[the_instructions[i].index_R] == mac.Register[0])
            {
                i = mac.jump_B(the_instructions[i]);
            }
            else
                continue;
            break;
        case 12:
            return mac.exit_C(the_instructions[i]);
            break;
        }
        //cout << mac.Register[the_instructions[i].index_R] << " ";
    }

}
