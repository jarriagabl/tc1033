#ifndef BRANCH_H
#define BRANCH_H

#include <string>

using std::string;

class Branch
{
    string name, address;

public:
    Branch(string name, string address): name{name}, address{address}
    {
    }

    string to_string();
};
#endif