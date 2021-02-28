#include <iostream>


// create fibonacci
int fab(int n){

    int result = 0;

    if (n == 1 || n == 2)
    {
        result = 1;
        return result;
    }
    else
    {
        result = fab(n-1) + fab(n-2);
        return result;
    }
}

int main()
{
    int numOfSequence;

    std::cout << "Fibonacci Sequence" <<std::endl;
    std::cout << "Enter an interger: ";


    std::cin >> numOfSequence;
    std::cout<< "Result: " <<fab(numOfSequence) <<std::endl;

    return 0;
}
