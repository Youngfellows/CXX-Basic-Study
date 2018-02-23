#include<iostream>

int main()
{
    //goto语句
    int i = 0;
    long int sum = 0;

    loop: if( i <= 100)
    {
        sum += i;
        i++;
        goto loop;
    }
    std::cout << "sum = " << sum << std::endl;
    return 0;
}