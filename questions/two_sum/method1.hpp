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
    std::array<int,4> nums;

};

#endif

//时间复杂度O(n^2)，空间复杂度O(1)。