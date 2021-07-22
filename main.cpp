#include <iostream>
#include "questions/two_sum/method1.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    int input, mainNum, subNum;
    int* arr;
    cout << "main para:" << argc << endl;
    cout << "please input a number:" << endl;
    std::cin >> input;

    mainNum = atoi(argv[1]);
    subNum = atoi(argv[2]);
    if(mainNum == 1 && subNum == 1)
    {
        cout << "two sum, method 1" << endl;
        twoSumMethod1(input);
    }

    return 0;
}