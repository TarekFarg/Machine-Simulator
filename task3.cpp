// task3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Instructions.h"
#include <vector>
using namespace std;

int main()
{
    int n;    // number of instructions
    cin >> n;
    vector<Instructions> the_instructions; // to store the instructions 
    Instructions a;
    string s;
    // store the instructons
    for (int i = 0; i < n; i++)
    {
        cin >> s; 
        a.set_data(s);
        the_instructions.push_back(a);
    }

    // loop over the instructions and do it
    for (int i = 0; i < n; i++)
    {
        int process = the_instructions[i].process_number;
        switch (process)
        {
        case 1:
            //do
            break;
        case 2:
            //do
            break;
        case 3:
            //do
            break;
        case 4:
            //do
            break;
        case 5:
            //do
            break;
        case 6:
            //do
            break;
        case 7:
            //do
            break;
        default:
            break;
        }
    }
}


