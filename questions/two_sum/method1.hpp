#ifndef METHOD1_HPP
#define METHOD1_HPP

#include <iostream>
#include <array>
#include "header.hpp"

class Method1:public TwoSum
{
public:
    Method1();
    ~Method1();

    virtual int* twoSum(int input);

private:

};

static std::array<int,4> nums = {2, 7, 11, 15};

#endif