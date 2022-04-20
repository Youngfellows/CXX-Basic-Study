#include<iostream>
using namespace std ;
class A
{ 
    public:
        A ( int x ) : a ( x ) { }
        int a ;
};

class B
{ 
    public:
        B( int x, int y ) : aa( x ),  b( y ) { }
        void out()
        { 
            cout << "aa = " << aa.a << endl << "b = " << b << endl ;
        }
  
    private:
        int b ;
        A aa ;
};

int main ()
{ 
    B  objB(3,5) ;
    objB.out() ;
} 