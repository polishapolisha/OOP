#include "Memberp.h"
#include "utils.h"

#define min_rate 0
#define max_rate 100


std::istream& operator >> (std::istream& in, Memberp& member) {

	std::cout << "Input members name: ";
	std::cin.ignore();
	std::getline(std::cin, member.name);
	std::cout << "Input members group: ";
	std::getline(std::cin, member.group);
	std::cout << "Input members rate (min: 0; max: 100): ";
	member.rate = get_num_value(min_rate, max_rate);

	return in;
}

std::ostream& operator << (std::ostream& out, const Memberp& member) {

	std::cout << "=======================================" << std::endl
		<< "Members name: " << member.name << std::endl
		<< "Members group: " << member.group << std::endl
		<< "Members rate: " << member.rate << std::endl
		<< "=======================================" << std::endl;

	return out;
}

std::ifstream& operator >> (std::ifstream& fin, Memberp& member) {
	fin.ignore();
	std::getline(fin, member.name);
	std::getline(fin, member.group);
	fin >> member.rate;

	return fin;
}

std::ofstream& operator << (std::ofstream& fout, const Memberp& member) {
	fout << member.name << std::endl
		<< member.group << std::endl
		<< member.rate << std::endl;

	return fout;
}