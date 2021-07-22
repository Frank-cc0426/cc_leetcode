#include <iostream>
#include <array>

using namespace std;

array<int,4> nums = {2, 7, 11, 15};

int* twoSumMethod1(int dest)
{
    int arr[2];
    for(int i=0; i<=nums.size(); i++)
    {
        for(int j=i+1; j<=nums.size(); j++)
        {
            int sum = 0;
            sum = nums[i] + nums[j];
            if(sum == dest)
            {
                cout << "the number of array is" << i << "and" << j <<endl;
                arr[0] = nums[i];
                arr[1] = nums[j];
                return arr;
            }
        }
    }
    cout << "Input error." <<endl;
}

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