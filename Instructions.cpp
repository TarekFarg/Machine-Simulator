#include "Instructions.h"

void Instructions::set_data(string s)
{
	
	for (int i = 0; i < s.size(); i++)
	{
		int num = 0;
		if (s[i] >= '0' && s[i] <= '9')
			num = s[i] - '0';        // covert char to int
		else
			num = s[i] - 'A' + 10;  // A=10 , B=11 , c=12 ................
		
		if (i == 0)
			process_number = num;
		else if (i == 1)
			index_R = num;
		else if (i == 2)
		{
			index_1M = num;
			decimal_number += num * 16; // to convert hexa to decimal
		}
		else
		{
			index_2M = num;
			decimal_number += num;
		}
	}
}
