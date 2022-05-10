#include "./include/EditString.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请
    char *address = "深圳市";
    SimpleString *s1 = new SimpleString();
    s1->setContent(address);
    int length = s1->getLength();
    cout << "length:" << length << endl;
    s1->print();

    address = "广东省南山区粤海街道大冲商务中心";
    s1->setContent(address);
    length = s1->getLength();
    cout << "length:" << length << endl;
    s1->print();

    cout << "\n===================================\n" << endl;

    //创建字符串editS2
    EditString *editS2 = new EditString();
    editS2->setContent(s1->getContent());
    editS2->print();
    editS2->moveCursor(10);

    cout << "\n=============插入字符后============\n" << endl;
    //插入字符   
    char *city = "深圳市";
    SimpleString *newCity = new SimpleString(city);
    editS2->insert(newCity);
    editS2->print();

    cout << "\n=============替换字符后============\n" << endl;
    //替换字符   
    char *city2 = "广州市";
    SimpleString *newCity2 = new SimpleString(city2);
    editS2->replace(newCity2);
    editS2->print();

    cout << "\n=============删除字符后============\n" << endl;
    editS2->moveCursor(4);
    editS2->deleteStr(2);
    editS2->print();

    delete s1;
    //delete newCity;
    delete editS2;

    return 0;
}