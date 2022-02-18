#include <iostream>

//Recursive function: calculate the nth fibonacci number
/**
 *@brief Calculate the nth fib number
 *
 *@param n designates which number in the sequense we desire.
 *@return int the nth number in the fibonacci sequence.
 */
int fib(int);


int main ( )
{
    for (int i{0}; i < 6; ++i){
    std::cout << "fib(" << i << ") = " << fib(i) << std::endl;
    }
    return 0;
}

int fib(int n){
    if (n == 0 or n == 1){
        //base case
        return n;
    }
    return fib(n-1) + fib(n-2);
}
