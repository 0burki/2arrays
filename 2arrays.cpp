#include<iostream>
using namespace std;
int main()
{
    const unsigned int sizeOfArray = 20;
    int numberArray[sizeOfArray];
    int first[20], second[20], sum[20], c, n;

    cout << "Enter the number of elements in the array:";
    cin >> n;
    
    for (c = 0; c < n; c++)
    {
        numberArray[c] = rand() % 50;
        cout << numberArray[c] << endl;
    }
    cin >> first[c];

    cout << "Enter the number of elements in the array:";
    cin >> n;
    
    for (c = 0; c < n; c++)
    {
        numberArray[c] = rand() % 50;
        cout << numberArray[c] << endl;
    }
    cin >> second[c];

    cout << "Sum of elements of the arrays:" << endl;

    for (c = 0; c  < sizeOfArray; c++) {
        sum[c] = first[c] + second[c];
        cout << sum[c] << endl;
    }
    return 0;
}


