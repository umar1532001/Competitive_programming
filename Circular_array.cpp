#include <iostream>

using namespace std;

void print(char arr[], int n, int ind)
{
    for (int i = ind; i < ind + n; i++)
    {
        cout << arr[i % n] << " ";
    }
}

int main()
{
    int ind;
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    cin >> ind;
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n, ind);
}
