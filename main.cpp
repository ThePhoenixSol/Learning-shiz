#include <iostream>

using namespace std;

int main()
{
    int val1 = 0;
    int val2 = 1;
    int fibbo = 0;
    int desiredNum = 0;

    cout << "What is the number range you want to look at? 1 in __?" << endl;

    cin >> desiredNum;

    cout << "The following is a line of Fibonacci numbers. \n" << endl;

    do
    {
        fibbo = val1 + val2;
        val1 = val2;
        val2 = fibbo;

        cout << fibbo << endl;
    }
    while(val1 <= desiredNum);

    cout << "\n End of program" << endl;

    return 0;
}
