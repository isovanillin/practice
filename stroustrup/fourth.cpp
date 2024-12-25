// Write a program that prompts the user to enter two integer values. Store these values in int variables named val1 and val2.
// Write your program to determine the smallest, largest, sum, difference, product, and ratio of these values and report them to the user.

#include <iostream>
#include <algorithm>

int main()
{
    int val1{}, val2{};
    std::cin >> val1 >> val2;

    std::cout << "The smallest number of these two values is " << std::min(val1, val2) << ". The largest number is " << std::max(val1, val2) << ". The sum is " << (val1+val2) << ". The difference is " << abs(val1-val2);
    
    if (val2 == 0)
		std::cout << "We can't divide by zero!";   

	  else
		std::cout << ". The ratio is " << val1/val2 << '.';

}
