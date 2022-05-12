#include "./include/Compare.h"
#include<cstring>

int main(int arg,char *args[])
{
    //使用模板类获取最大值
    Compare<int> comp1(3,4);
    int max1 = comp1.max();
    int min1 = comp1.min();
    cout << "整数: max1=" << max1 << ",min1=" << min1 << endl; 

    // //释放内存
    // delete comp1;
    Compare<float> comp2(22.3,11.8);
    float maxf = comp2.max();
    float minf = comp2.min();
    cout << "float类型: maxf=" << maxf << ",minf=" << minf << endl; 

    Compare<string> comp3("aaa","bbb");
    string maxs = comp3.max();
    string mins = comp3.min();
    cout << "float类型: maxs=" << maxs << ",mins=" << mins << endl; 

    return 0;
}