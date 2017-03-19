#include <iostream>
#include <cmath>
using namespace std;

int cube(int number);

int main ()
{
        int number,result;

        cout << "Enter a number that you want cubed or a 0 to exit:\n";
        cin >> number;

        while(number!=0){

        result = cube(number);
        cout << result << endl;
        cout << "Enter a number that you want cubed or a 0 to exit:\n";
        cin >> number;
        }
        return 0;

}

int cube(int number)
{
        return number*number*number;
}
~
