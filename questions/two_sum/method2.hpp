#ifndef METHOD2_HPP
#define METHOD2_HPP

#include <iostream>
#include <array>
#include "header.hpp"

class Method2:public TwoSum
{
public:
    Method2();
    ~Method2();

    virtual int* twoSum(int input);

private:
    std::array<int,4> nums;

};

#endif

//时间复杂度O(n)，空间复杂度O(n)。