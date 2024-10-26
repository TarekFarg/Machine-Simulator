// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "Instructions.h"
#include"machine.h"
using namespace std;

int main()
{
    string file;

    cout << "Please enter file name: ";
    cin >> file;

    file += ".txt";

    ifstream in(file);     // this file have the instructions

    Instructions a;
    vector<Instructions> the_instructions; // to store the instructions here

    // get the instructions from the file
    while (!in.eof())
    {
        string s;
        getline(in, s);
        if (s.size())
        {
            a.set_data(s);
            the_instructions.push_back(a);
        }

    }

    int n = the_instructions.size() ;    // number of instructions

    /*
    // printing the instructions
    for (int i = 0; i < n; i++)
    {
        cout << the_instructions[i].process_number << " " << the_instructions[i].index_R << " ";
        cout << the_instructions[i].index_1M << "/" << the_instructions[i].index_2M << "   ";
        cout << the_instructions[i].decimal_number << endl << endl;
    }
    */

    Machine mac;

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
             mac.add_5(the_instructions[i]);
            break;
        case 11:
                i = mac.jump_B(the_instructions[i], i);
            break;
        case 12:
            return mac.exit_C(the_instructions[i]);
            break;
        }
        //cout << mac.Register[the_instructions[i].index_R] << " ";
    }

}
