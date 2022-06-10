#ifndef COMPARE_PERSON_H
#define COMPARE_PERSON_H

#include "./Global.h"
#include "./Person.h"

//定义仿函数ComparePerson
class ComparePerson
{
    public:
        //名字大的在前面，如果名字相同，年龄大的排前面
        bool operator()(const Person &p1,const Person &p2) const
        {
            if(p1.name == p2.name)
            {
                return p1.age > p2.age;
            }
            return p1.name > p2.name;
        }
};

#endif