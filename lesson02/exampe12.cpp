#include<iostream>

int main()
{
    //循环嵌套
    std::cout << "i\tj\n";

    for(int i = 0;i < 3;i++)
    {
        std::cout << i;
        for(int j = 0;j < 3;j++)
        {
            std::cout << "\t" << j << std::endl;
        }
    }

    return 0;
}