#include <iostream>
#include <cmath>
#include <climits>


using namespace std;
double factorial(int number)
{
    if (number == 0)
    {
        return 1;
    }
    else
        {
            return number * factorial(number - 1);
        }
}


int main()
{
    double x = 0.0;
    bool typeFail;

    do
    {
        cout << "Enter correct double value (-117.0 <= X <= 117.0) (the power  of the Euler number) \n";
        cin >> x;

        typeFail = cin.fail();
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    }
    while ((typeFail) || (x > 117.0) || (x < -117.0));

    cout << "x = " << x << "\n";

    const int row_border = 150;
    double exponent_x = 0.0;

    for (int n = 0; n < row_border; n++)
    {
        exponent_x = exponent_x + pow(x,n) / factorial(n);
    }

    cout.precision(15);
    cout << "exp(x) = " << exponent_x;
    return 0;
}
