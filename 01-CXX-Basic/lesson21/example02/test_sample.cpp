
#include "./include/Sample.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    
    cout << endl << "====创建a1====" << endl;
    A *a1 = new A();//指针变量a1,指向基类A的对象对象

    cout << endl << "====创建b1====" << endl;
    B *b1 = new B();//指针变量b1,指向基类B的对象对象
    //cout << "i=" << b1->i << endl;//i在派生类B中是私有数据成员,不能通过对象访问
    //cout << "j=" << b1->j << endl;//j在派生类B中是保护数据成员,不能通过对象访问
    cout << "main():: k=" << b1->k << endl;//k在派生类B中是公有数据成员,能通过对象访问
    //b1->f3();//通过指针访问派生类B的对象的f3函数,f3()函数是protected保护的,不能访问
    b1->f4();//通过指针访问派生类B的对象的f4函数,f4()函数是public公共的的,能访问
    //cout << "main():: m=" << b1->m << endl;//m在派生类B中是private私有数据成员,不能通过对象访问
    //cout << "main():: n=" << b1->n << endl;//n在派生类B中是protect数据成员,不能通过对象访问
    cout << "main():: t=" << b1->t << endl;//t在派生类B中是public公有数据成员,能通过对象访问

    cout << endl << "====创建c1====" << endl;
    C *c1 = new C();//指针变量c1,指向基类C的对象对象
    //cout << "main():: i=" << c1->i << endl;//不能访问,i是private私有成员,不能被类外访问
    //cout << "main():: j=" << c1->j << endl;//不能访问,j是protected保护成员,不能被类外访问
    cout << "main():: k=" << c1->k << endl;//能访问,k是public公有成员,能被类外访问
    //cout << "main():: m=" << c1->m << endl;//不能访问,m是private私有成员,不能被类外访问
    //cout << "main():: n=" << c1->n << endl;//不能访问,n是protected保护成员,不能被类外访问
    cout << "main():: t=" << c1->t << endl;//能访问,t是public公有成员,能被类外访问
    //cout << "main():: p=" << c1->p << endl;//不能访问,p是private私有成员,不能被类外访问
    //cout << "main():: q=" << c1->q << endl;//不能访问,q是protected保护成员,不能被类外访问
    cout << "main():: r=" << c1->r << endl;
    
    //c1->f1();//不能访问,f1()函数是protected保护成员,不能被类外访问
    c1->f2();//能访问,f2()函数是public公共成员,能被类外访问
    //c1->f3();//不能访问,f3()函数是protected保护成员,不能被类外访问
    c1->f4();
    //c1->f5();//不能访问,f5()函数是protected保护成员,不能被类外访问
    c1->f6();//能访问,f6()函数是public公共成员,能被类外访问

    //释放内存
    cout << endl << "====释放a1====" << endl;
    delete a1;
    
    cout << endl << "====释放b1====" << endl;
    delete b1;
   
    cout << endl << "====释放c1====" << endl;
    delete c1;

    return 0;
}