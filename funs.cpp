#include "funs.h"

void funs::add_member() {

	Memberp* p_member = new Memberp();
	std::cin >> *p_member;
	members.push_back(p_member);
}


std::ostream& operator << (std::ostream& out, const funs& sss) {
	if (sss.members.size() == 0)
		std::cout << "There are no members in sss" << std::endl;
	else {
		for (auto p_member : sss.members)
			std::cout << *p_member;
	}

	return out;
}


bool funs::to_file(std::string file_name) {
	std::ofstream fout(file_name);
	if (members.size() == 0) {
		std::cout << "There are no members in sss!" << std::endl;
		return false;
	}
	else if (fout.is_open()) {
		fout << members.size() << std::endl;
		for (auto p_member : members)
			fout << *p_member;
		return true;
	}
	else
		return false;
}


bool funs::from_file(std::string file_name) {

	std::ifstream fin(file_name);
	if (fin.is_open()) {

		int num;
		fin >> num;

		for (int i = 0; i < num; i++) {
			Memberp* p_member = new Memberp();
			fin >> *p_member;
			members.push_back(p_member);
		}

		return true;
	}
	return false;
}


void funs::clear() {
	for (auto p_member : members)
		delete p_member;
	members.clear();
}