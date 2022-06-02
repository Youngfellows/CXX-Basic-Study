#ifndef SORT_H
#define SORT_H

#include "./Global.h"
#include "./Student2.h"

class Sort
{
    public:
        bool operator() (Student2 const &_A, Student2 const &_B) const
        {
            cout << "_A.id:" << _A.id << ",_B.id:" << _B.id << endl;
            if (_A.id < _B.id)
                return true;
            if (_A.id == _B.id)
                return _A.name.compare(_B.name) < 0;
            return false;
        }
};

#endif