#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

double getN() // only numbers input
{
    double dub;
    std::string line;
    while (std::getline(std::cin, line))
    {
        std::stringstream ss(line);
        if (ss >> dub)
        {
            if (ss.eof())
            {
                break;
            }
            else
            {
                std::cout << "Please enter a number." << std::endl;

            }
        }
    }
    return dub;
}


int main()
{

    std::cout << "a: ";
    double a = getN();
    std::cout << "b: ";
    double b = getN();
    std::cout << "c: ";
    double c = getN();

    // got all the numbers to begin calculating the formula
    
    double yellow = -4 * a * c; // calculating yellow
    double bM = -b; // -b
    double bP = pow(b, 2.0);  // b^2
    double red = bP + yellow; // calculating red
    double sqrtred = sqrt(red); // square root of red
    double a2 = 2 * a; // 2a

    double res1 = bM - sqrtred; // result 1 before dividing by 2a
    double res2 = bM + sqrtred; // result 2 before dividing by 2a

    res1 = res1 / a2; // final result 1
    res2 = res2 / a2; // final result 2

    // checking if given equation have result

    if (isnan(res1) || isnan(res2))
    {
        std::cout << "X1 =  NO RESULT" << std::endl;
        std::cout << "X2 =  NO RESULT" << std::endl;

    }
    else
    {
        std::cout << "X1 = " << res1 << std::endl;
        std::cout << "X2 = " << res2 << std::endl;
    }

    return 0;
}