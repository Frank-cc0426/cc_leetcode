#include <method1.hpp>

using namespace std;

Method1::Method1()
  :nums{2, 7, 11, 15}
{
    cout << "construct" << endl;
}

Method1::~Method1()
{
    cout << "destruct" << endl;
}

int* Method1::twoSum(int input)
{
    int arr[2];
    for(int i=0; i<=nums.size(); i++)
    {
        for(int j=i+1; j<=nums.size(); j++)
        {
            int sum = 0;
            sum = nums[i] + nums[j];
            if(sum == input)
            {
                cout << "the number of array is: " << i << " and " << j <<endl;
                arr[0] = nums[i];
                arr[1] = nums[j];
                return arr;
            }
        }
    }
    cout << "Input error." <<endl;
}
