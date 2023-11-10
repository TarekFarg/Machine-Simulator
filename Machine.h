#pragma once
#include <vector>
using namespace std;
class Machine
{
private:
	int memory[20][20];
	int Register[20];
public:
	void load();
	void load_2();
	void store();
	void move();
	int add();
	double add_2();
	void jump();


};

