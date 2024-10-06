#pragma once

#include <vector>
#include "Memberp.h"


class funs
{

private:
	std::vector <Memberp*> members;
public:
	void add_member();
	bool to_file(std::string file_name);
	bool from_file(std::string file_name);
	void clear();

	friend std::ostream& operator << (std::ostream& out, const funs& sss);
};