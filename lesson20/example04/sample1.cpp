#include "./include/Matrix.h"
#include "./include/Matrix2.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Matrix *m1 = new Matrix();
    cout << endl << "======== 请输入 " << M << "*" << N << " 矩阵m1=======" << endl;
    m1->input();//输入矩阵
    cout << endl << "========= m1 矩阵元素是 ==========" << endl;
    m1->display();//显示矩阵

    Matrix *m2 = new Matrix();
    cout << endl << "======== 请输入 " << M << "*" << N << " 矩阵m2=======" << endl;
    m2->input();//输入矩阵
    cout << endl << "========= m2 矩阵元素是 ==========" << endl;
    m2->display();//显示矩阵 

    //矩阵相加,使用取*,获取其指针指向的对象
    Matrix matrix = *m1 + *m2;
    cout << endl << "========= matrix 矩阵元素是 ==========" << endl;
    matrix.display();

    Matrix2 *m3 = new Matrix2();
    cout << endl << "======== 请输入 " << M << "*" << N << " 矩阵m3=======" << endl;
    //m3->input();//输入矩阵
    cin >> *m3;
    cout << endl << "========= m3 矩阵元素是 ==========" << endl;
    //m3->display();//显示矩阵
    cout << *m3;

    //释放内存
    delete m1;
    delete m2;
    delete m3;

    return 0;
}