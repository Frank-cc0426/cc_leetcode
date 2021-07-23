#include <iostream>
#include "questions/two_sum/header.hpp"
#include "questions/two_sum/method1.hpp"
#include "questions/two_sum/method2.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    int input, mainNum, subNum;
    int* arr;
    cout << "main para:" << argc << endl;
    cout << "please input a number:" << endl;
    cin >> input;

    mainNum = atoi(argv[1]);
    subNum = atoi(argv[2]);
    if(mainNum == 1 && subNum == 1)
    {
        TwoSum* sum = new Method1();
        cout << "two sum, method 1" << endl;
        sum->twoSum(input);
        delete sum;
    }
    if(mainNum == 1 && subNum == 2)
    {
        TwoSum* sum2 = new Method2();
        cout << "two sum, method 2" << endl;
        sum2->twoSum(input);
        delete sum2;
    }

    return 0;
}