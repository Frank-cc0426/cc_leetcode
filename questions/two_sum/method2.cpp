#include <map>
#include "method2.hpp"

using namespace std;

Method2::Method2()
  :nums{2, 7, 11, 15}
{
    cout << "construct" << endl;
}

Method2::~Method2()
{
    cout << "destruct" << endl;
}

int* Method2::twoSum(int input)
{
    int arr[2];
    map<int, int>  arrMap;
    for(int i=0; i<nums.size(); i++)
    {
        arrMap[i] = nums[i];
    }
    for(int j=0; j<nums.size(); j++)
    {
        int diff = input - nums[j];
        map<int, int>::iterator  ite;
        for(ite=arrMap.begin(); ite!=arrMap.end(); ite++)
        {
            if(ite->second == diff)
            {
                cout << "the number of array is: " << j << " and " << ite->first <<endl;
                arr[0] = j;
                arr[1] = ite->first;
                return arr;
            }
        }
    }
    cout << "input error" <<endl;
    return nullptr;
}
