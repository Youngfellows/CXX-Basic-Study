#include<iostream>

using namespace std;

//定义Book类 - 书
class Book
{
    private:
        char const *bookName;//书名
        long long sn;//序列码
        char const *author;//作者
        double price;//价钱

    public:
        //构造函数
        Book();
        //析构函数
        ~Book();

        //重载函数1
        void set(char const *bookName);
        void set(char const *bookName,char const *author);
        void set(char const *bookName,long long sn,char const *author,double price);

        //普通函数
        void display();
};

//在类外定义函数 - 构造函数
Book::Book()
{
    cout << "Book()构造函数" << endl;
}

//在类外定义函数 - 构造函数
Book::~Book()
{
    cout << "~Book()析构函数" << endl;
}

//在类外定义函数 - set()函数
void Book::set(char const *bookName)
{
    this->bookName = bookName;
}

//在类外定义函数 - 重载set()函数
void Book::set(char const *bookName,char const *author)
{
    this->bookName = bookName;
    this->author = author;
}

//在类外定义函数 - 重载set()函数
void Book::set(char const *bookName,long long sn,char const *author,double price)
{
    this->bookName = bookName;
    this->author = author;
    this->sn = sn;
    this->price = price;
}

//在类外定义函数 - display()函数
void Book::display()
{
    cout << endl;
    if (this->bookName != NULL)
    {
        cout << "书名:" << this->bookName << endl;
    }
    if (this->author != NULL)
    {
         cout << "作者:" << this->author << endl;
    }
    cout << "SN:" << this->sn << endl;
    cout << "价钱:" << this->price << endl;
    cout << endl;
}

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Book *book = new Book();
    char const *bookName = "C++数据结构";
    char const *author = "王涛";
    long long sn = 9876543210;
    double price = 314.55;
    book->set(bookName);
    book->display();

    book->set(bookName,sn,author,price);
    book->display();

    //释放内存
    delete book;
    return 0;
}