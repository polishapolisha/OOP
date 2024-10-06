#pragma once

#include <string>
#include <iostream>
#include <fstream>


class Memberp
{
private:
	std::string name;
	std::string group;
	unsigned int rate;

public:
	friend std::istream& operator >> (std::istream& in, Memberp& member);
	friend std::ostream& operator << (std::ostream& out, const Memberp& member);
	friend std::ifstream& operator >> (std::ifstream& fin, Memberp& member);
	friend std::ofstream& operator << (std::ofstream& fout, const Memberp& member);

};