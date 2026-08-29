#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // declaring and initializing an array of size 5
     int arr[5] = {2, 4, 8, 12, 16};

     
    // printing array elements
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << endl;
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "size of the array is: " << n << std::endl;

    vector<int> list;

    list.push_back(arr[1]);
    list.push_back(arr[3]);
    list.push_back(30);
    cout << "Vector elements: ";
    for (size_t i = 0; i < list.size(); i++)
        cout << list[i] << " ";

    vector<int> v = {17, 20, 37, 40, 50};
    int count = 0;

    for (size_t i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 0)
        {
            count++;
        }
    }
    std::cout << count << std::endl;

    return 0;
}
