#pragma once


#include <string>
#include <iostream>#include fstream

class Netws
{
private:
	std::string name;
	std::string task;
	unsigned int num_params;
public:
	friend std::istream& operator >> (std::istream& in, Netws& nw);
	friend std::ostream& operator << (std::ostream& out, const Netws& nw);
	friend std::ifstream& operator >> (std::ifstream& fin, Netws& nw);
	friend std::ofstream& operator << (std::ofstream& fout, const Netws& nw);

};