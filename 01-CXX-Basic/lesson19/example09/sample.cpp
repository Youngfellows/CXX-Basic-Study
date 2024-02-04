#include "./include/Product.h"

int main(int arg,char *args[])
{
    //创建一个销售产品数组
    Product prods[3] =
    {
        Product(100,5,23.5),
        Product(1001,100,21.5),
        Product(1002,12,24.56)    
    };

    //统计销售情况
    for(int i = 0;i < 3; i++)
    {
        prods[i].total();
    }

    //数组结果
    Product::display();

    return 0;
}