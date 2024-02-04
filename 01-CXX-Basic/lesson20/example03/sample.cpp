#include "./include/Complex.h"
#include "./include/Complex2.h"
#include "./include/Complex3.h"
#include "./include/Complex4.h"

int main(int arg,char *args[])
{
    /**
     * 编译参考
     * 
     * 编译Makefile文件: make
     *       
     * 编译My.mk文件: make -f My.mk
     *                     make clean -f My.mk
     *       
     * 编译My1.mk文件: make -f My1.mk
     *                     make clean -f My1.mk
     *   
     *                   
     * 
     */

    //创建对象c1,c2
    Complex c1(1.1,2.2);
    Complex c2(2.3,3.3);

    Complex c3 = c1 + c2;
    
    cout << endl << "=========Complex1=========" << endl;
    cout << "c1 = " ;
    c1.display();
    cout << "c2 = " ;
    c2.display();
    cout << "c3 = " ;
    c3.display();

    cout << endl << "=========Complex2=========" << endl;

    //创建对象c4,c5,动态申请内存
    Complex2 c4(4.5,6.7);
    Complex2 c5(1.3,3.4);
    Complex2 c6 = c4 - c5;
    
    cout << "c4 = " ;
    c4.display();
    cout << "c5 = " ;
    c5.display();
    cout << "c6 = " ;
    c6.display();

    cout << endl << "=========Complex3=========" << endl;
    Complex3 c7(4.5,6.7);
    Complex3 c8(1.3,3.4);
    Complex3 c9 = c7 * c8;
    
    cout << "c7 = " ;
    c7.display();
    cout << "c8 = " ;
    c8.display();
    cout << "c9 = " ;
    c9.display();


    cout << endl << "=========Complex4=========" << endl;
    Complex4 c10(4.5,6.7);
    Complex4 c11(3.3,4.4);
    Complex4 c12 = c10 + c11;

    int i = 6;

    Complex4 c13 = c10 + i;
    Complex4 c14 = i + c11;


    cout << "c10 = " ;
    c10.display();
    cout << "c11 = " ;
    c11.display();
    cout << "c12 = " ;
    c12.display();
    cout << "c13 = " ;
    c13.display();
    cout << "c14 = " ;
    c14.display();

    cout << endl;
    return 0;
}