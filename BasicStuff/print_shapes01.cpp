//
// Created by esevre on 2/3/2021.
//

#include <iostream>
#include <iomanip>

int main()
{
    for (int row = 0; row < 4; ++row) {
        std::cout << "******\n";
    }
    std::cout << " --- Below is my attempt to recreate the for loop above\n";
    {
        int row = 0;
        while(row < 4)
        {
            std::cout << "******\n";

            ++row;
        }
    }
}

