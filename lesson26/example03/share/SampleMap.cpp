#include "../include/SampleMap.h"


/**
*
*	3.4 map/multimap
*		map和multimap都需要#include<map>，唯一的不同是，map的键值key不可重复，而multimap可以，也正是由于这种区别，map支持[ ]运算符，multimap不支持[ ]运算符。在用法上没什么区别。
*		C++中map提供的是一种键值对容器，里面的数据都是成对出现的,如下图：每一对中的第一个值称之为关键字(key)，每个关键字只能在map中出现一次；第二个称之为该关键字的对应值。
*		
*		Map是STL的一个关联容器，它提供一对一（其中第一个可以称为关键字，每个关键字只能在map中出现一次，第二个可能称为该关键字的值）的数据 处理能力，由于这个特性，
*       它完成有可能在我们处理一对一数据的时候，在编程上提供快速通道。这里说下map内部数据的组织，map内部自建一颗红黑树(一 种非严格意义上的平衡二叉树)，这颗树具有对数据自动排序的功能，所以在map内部所有的数据都是有序的。
*
*	3.4.1 基本操作函数
*		 begin()         返回指向map头部的迭代器
*		 clear(）        删除所有元素
*		 count()         返回指定元素出现的次数
*		 empty()         如果map为空则返回true
*		 end()           返回指向map末尾的迭代器
*		 equal_range()   返回特殊条目的迭代器对
*		 erase()         删除一个元素
*		 find()          查找一个元素
*		 get_allocator() 返回map的配置器
*		 insert()        插入元素
*		 key_comp()      返回比较元素key的函数
*		 lower_bound()   返回键值>=给定元素的第一个位置
*		 max_size()      返回可以容纳的最大元素个数
*		 rbegin()        返回一个指向map尾部的逆向迭代器
*		 rend()          返回一个指向map头部的逆向迭代器
*		 size()          返回map中元素的个数
*		 swap()           交换两个map
*		 upper_bound()    返回键值>给定元素的第一个位置
*		 value_comp()     返回比较元素value的函数
*
*	3.4.2 声明
*		//头文件
*		#include<map> 
*		map<int, string> ID_Name; 
*		// 使用{}赋值是从c++11开始的，因此编译器版本过低时会报错，如visual studio 2012
*		map<int, string> ID_Name = {
*						{ 2015, "Jim" },
*						{ 2016, "Tom" },
*						{ 2017, "Bob" } };
*	3.4.3 迭代器
*		共有八个获取迭代器的函数：* begin, end, rbegin,rend* 以及对应的 * cbegin, cend, crbegin,crend*。
*		二者的区别在于，后者一定返回 const_iterator，而前者则根据map的类型返回iterator 或者 const_iterator。const情况下，不允许对值进行修改。如下面代码所示：
*
*		map<int,int>::iterator it;
*		map<int,int> mmap;
*		const map<int,int> const_mmap;
*		 
*		it = mmap.begin(); //iterator
*		mmap.cbegin(); //const_iterator
*		 
*		const_mmap.begin(); //const_iterator
*		const_mmap.cbegin(); //const_iterator
*		返回的迭代器可以进行加减操作，此外，如果map为空，则 begin = end。
*  
*   3.4.4 插入操作 
*	    3.4.4.1 用insert插入pair数据
*	    3.4.4.2 用insert函数插入value_type数据 
*	    3.4.4.3 用insert函数进行多个插入 
*	    3.4.4.4 用数组方式插入数据 
*	
*   3.4.5 查找、删除、交换
*	    查找
*		    // 关键字查询，找到则返回指向该关键字的迭代器，否则返回指向end的迭代器
*		    // 根据map的类型，返回的迭代器为 iterator 或者 const_iterator
*		    iterator find (const key_type& k);
*		    const_iterator find (const key_type& k) const;
*
*	    删除
*		    // 删除迭代器指向位置的键值对，并返回一个指向下一元素的迭代器
*		    iterator erase( iterator pos )
*		 
*		    // 删除一定范围内的元素，并返回一个指向下一元素的迭代器
*		    iterator erase( const_iterator first, const_iterator last );
*		 
*		    // 根据Key来进行删除， 返回删除的元素数量，在map里结果非0即1
*		    size_t erase( const key_type& key );
*	 
*	    清空map，清空后的size为0
*		    void clear();
*
*	    交换 
*		    // 就是两个map的内容互换
*		    void swap( map& other );
*
*	3.4.6 容量
*		// 查询map是否为空
*		bool empty();
*		 
*		// 查询map中键值对的数量
*		size_t size();
*		 
*		// 查询map所能包含的最大键值对数量，和系统和应用库有关。
*		// 此外，这并不意味着用户一定可以存这么多，很可能还没达到就已经开辟内存失败了
*		size_t max_size();
*		 
*		// 查询关键字为key的元素的个数，在map里结果非0即1
*		size_t count( const Key& key ) const; 
*		
*	3.4.7 排序
*		map中的元素是自动按Key升序排序，所以不能对map用sort函数；
*		这里要讲的是一点比较高深的用法了,排序问题，STL中默认是采用小于号来排序的，以上代码在排序上是不存在任何问题的，因为上面的关键字是int 型，它本身支持小于号运算，在一些特殊情况，比如关键字是一个结构体或者自定义类，涉及到排序就会出现问题，因为它没有小于号操作，insert等函数在编译的时候过 不去，下面给出两个方法解决这个问题。
*       3.4.7.1 小于号 < 重载
*       3.4.7.2 仿函数的应用，这个时候结构体中没有直接的小于号重载 
*/
void mapTest1()
{
    cout << "mapTest1():: ..." << endl;
    //map初始化,使用列表
    map<string,string> student = {{"name","张无忌"},{"age","18"},{"konghu","乾坤大挪移"},{"wife","赵敏"},{"city","光明顶"}};

    //遍历元素
    map<string,string>::iterator iter;
    for(iter = student.begin(); iter != student.end(); iter++)
    {
        string key = iter->first;//获取key
        string value = iter->second;//获取value
        cout << key << ":" << value << endl;
    }
    cout << endl;
}

void mapTest2()
{
    cout << "mapTest2():: ..." << endl;
    //数据的插入 -- 第一种：用insert函数插入pair数据 
    //map对象初始化,动态申请内存
    map<int,string> *mapStudent = new map<int,string>();
    mapStudent->insert(pair<int,string>(1001,"张无忌"));
    mapStudent->insert(pair<int,string>(1002,"周芷若"));
    mapStudent->insert(pair<int,string>(1003,"令狐冲"));
    mapStudent->insert(pair<int,string>(1004,"风清扬"));
    mapStudent->insert(pair<int,string>(1005,"郭靖"));
    mapStudent->insert(pair<int,string>(1006,"小龙女"));
    mapStudent->insert(pair<int,string>(1007,"西门吹雪"));

    //查找元素 - find()函数
    map<int,string>::iterator iter =  mapStudent->find(1002);
    if(iter != mapStudent->end())
    {
        int key = iter->first;//获取key
        string value = iter->second;//获取value
        cout << "查询到:: " << key << ":" << value << endl;
    }else
    {
        cout << "没有查询到" << endl;
    }

    //查询元素 - count()函数
    int size = mapStudent->count(1003);
    if(size != 0)
    {
        string value = (*mapStudent)[1003];//获取value,使用下标
        cout << "查询到:: 1003" << ":" << value << endl;  
    }else
    {
        cout << "没有查询到" << endl;
    }

    //遍历元素 - 使用迭代器
    for(iter = mapStudent->begin(); iter != mapStudent->end(); iter++)
    {
        int id = iter->first;//获取key
        string name = iter->second;//获取value
        cout << id << ":" << name << endl;
    }

    //删除元素 - 查找并删除
    iter = mapStudent->find(1005);
    if(iter != mapStudent->end())
    {
        mapStudent->erase(iter);//删除元素
    }

    //遍历元素 - 使用迭代器
    for(iter = mapStudent->begin(); iter != mapStudent->end(); iter++)
    {
        int id = iter->first;//获取key
        string name = iter->second;//获取value
        cout << id << ":" << name << endl;
    }

    //删除元素 - 查找并删除
    size = mapStudent->count(1002);
    if(size != 0)
    {
        //删除元素
        int count =  mapStudent->erase(1002);
        cout << "delete count:" << count << endl;
    }
    
    //遍历元素 - 使用迭代器
    for(iter = mapStudent->begin(); iter != mapStudent->end(); iter++)
    {
        int id = iter->first;//获取key
        string name = iter->second;//获取value
        cout << id << ":" << name << endl;
    }

    //释放内存
    delete mapStudent;
    cout << endl;
}

void mapTest3()
{
    cout << "mapTest3():: ..." << endl;
    //数据的插入 -- 第一种：用insert函数插入pair数据 
    //map对象初始化,动态申请内存
    map<int,string> *mapStudent = new map<int,string>();
    mapStudent->insert(pair<int,string>(1001,"张无忌"));
    mapStudent->insert(pair<int,string>(1002,"周芷若"));
    mapStudent->insert(pair<int,string>(1003,"令狐冲"));
    mapStudent->insert(pair<int,string>(1004,"风清扬"));
    mapStudent->insert(pair<int,string>(1005,"郭靖"));
    mapStudent->insert(pair<int,string>(1011,"小龙女"));
    mapStudent->insert(pair<int,string>(1007,"西门吹雪"));
    
    //数据的插入 -- 第二种：用insert函数插入value_type数据
    mapStudent->insert(map<int,string>::value_type(1008,"田伯光"));
    mapStudent->insert(map<int,string>::value_type(1009,"岳不群"));
    mapStudent->insert(map<int,string>::value_type(1010,"任我行"));

    //返回插入位置以及是否插入成功
    pair<map<int,string>::iterator,bool> ret;
    ret =  mapStudent->insert(pair<int,string>(1006,"乔峰"));
    if(ret.second == true)
    {
        cout << "插入1006成功" << endl;
    }else
    {
        cout << "插入1006失败 ..." << endl;
    }

    ret =  mapStudent->insert(pair<int,string>(1005,"小尼姑"));
    if(ret.second == true)
    {
        cout << "插入1005成功" << endl;
    }else
    {
        cout << "插入1005失败 ..." << endl;
    }

    //指定位置插入
    map<int,string>::iterator iter  =  mapStudent->find(1004);
    mapStudent->insert(iter,pair<int,string>(1027,"段誉"));
    mapStudent->insert(iter,pair<int,string>(1022,"王语嫣"));

    //范围多值插入
    map<int,string> *hero = new map<int,string>();
    hero->insert(pair<int,string>(1024,"欧阳修"));
    hero->insert(pair<int,string>(1021,"司马光"));
    hero->insert(pair<int,string>(1026,"虚竹"));
    hero->insert(pair<int,string>(1029,"傅红雪"));

    //范围多值插入
    //mapStudent->insert(hero->begin(),hero->find(1026));
    mapStudent->insert(hero->begin(),hero->end());

    //列表形式插入
    mapStudent->insert({{1030,"李寻欢"},{1031,"谢晓峰"},{1028,"燕十三"}});

    //用数组方式插入数据
    (*mapStudent)[1032] = "张三丰";
    (*mapStudent)[1033] = "慕容秋蝶";
   
    //查找元素 - find()函数
    iter =  mapStudent->find(1002);
    if(iter != mapStudent->end())
    {
        int key = iter->first;//获取key
        string value = iter->second;//获取value
        cout << "查询到:: " << key << ":" << value << endl;
    }else
    {
        cout << "没有查询到" << endl;
    }

    //查询元素 - count()函数
    int size = mapStudent->count(1003);
    if(size != 0)
    {
        string value = (*mapStudent)[1003];//获取value,使用下标
        cout << "查询到:: 1003" << ":" << value << endl;  
    }else
    {
        cout << "没有查询到" << endl;
    }

    //遍历元素 - 使用迭代器
    for(iter = mapStudent->begin(); iter != mapStudent->end(); iter++)
    {
        int id = iter->first;//获取key
        string name = iter->second;//获取value
        cout << id << ":" << name << endl;
    }

    //删除元素 - 查找并删除
    iter = mapStudent->find(1005);
    if(iter != mapStudent->end())
    {
        mapStudent->erase(iter);//删除元素
    }

    //遍历元素 - 使用迭代器
    for(iter = mapStudent->begin(); iter != mapStudent->end(); iter++)
    {
        int id = iter->first;//获取key
        string name = iter->second;//获取value
        cout << id << ":" << name << endl;
    }

    //删除元素 - 查找并删除
    size = mapStudent->count(1002);
    if(size != 0)
    {
        //删除元素
        int count =  mapStudent->erase(1002);
        cout << "delete count:" << count << endl;
    }
    
    //遍历元素 - 使用迭代器
    for(iter = mapStudent->begin(); iter != mapStudent->end(); iter++)
    {
        int id = iter->first;//获取key
        string name = iter->second;//获取value
        cout << id << ":" << name << endl;
    }

    //是否为空
    bool isEmpty = mapStudent->empty();
    //大小
    size = mapStudent->size();
    cout << "是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;

    //清空容器
    mapStudent->clear();
    isEmpty = mapStudent->empty(); //是否为空
    size = mapStudent->size();//大小
    cout << "清空后,是否为空,isEmpty:" << isEmpty << ",大小,size:" << size << endl;

    //释放内存
    delete hero;
    delete mapStudent;
    cout << endl;
}

void mapTest4()
{
    cout << "mapTest4():: ..." << endl;
    //自定义sort排序,创建map,动态申请内存
    map<Student,double> *mapStudent = new map<Student,double>();

    //添加元素
    Student student;
    student.id = 1004;
    student.name = "张无忌";
    mapStudent->insert(pair<Student,double>(student,88.5)); 

    student.id = 1001;
    student.name = "周芷若";
    mapStudent->insert(pair<Student,double>(student,99.5)); 

    student.id = 1002;
    student.name = "周伯通";
    mapStudent->insert(pair<Student,double>(student,77.5)); 

    student.id = 1003;
    student.name = "田伯光";
    mapStudent->insert(pair<Student,double>(student,92.5)); 

    //遍历map
    map<Student,double>::iterator iter;
    for(iter = mapStudent->begin(); iter != mapStudent->end(); iter++)
    {
        Student student = iter->first;//获取key
        double score = iter->second;//获取value
        int id = student.id;
        string name = student.name;
        cout << "学号:" << id << ",姓名:" << name << ",成绩:" << score << endl;
    }

    cout << endl;
    //释放内存
    delete mapStudent;
}

void mapTest5()
{
    cout << "mapTest5():: ..." << endl;
    //自定义sort排序,创建map,动态申请内存
    map<Student2,double,Sort> *mapStudent = new map<Student2,double,Sort>();

    // //添加元素
    Student2 student;
    student.id = 1004;
    student.name = "张无忌";
    mapStudent->insert(pair<Student2,double>(student,88.5)); 

    student.id = 1001;
    student.name = "周芷若";
    mapStudent->insert(pair<Student2,double>(student,99.5)); 

    student.id = 1002;
    student.name = "周伯通";
    mapStudent->insert(pair<Student2,double>(student,77.5)); 

    student.id = 1003;
    student.name = "田伯光";
    mapStudent->insert(pair<Student2,double>(student,92.5)); 

    //遍历map
    map<Student2,double>::iterator iter;
    for(iter = mapStudent->begin(); iter != mapStudent->end(); iter++)
    {
        Student2 student = iter->first;//获取key
        double score = iter->second;//获取value
        int id = student.id;
        string name = student.name;
        cout << "学号:" << id << ",姓名:" << name << ",成绩:" << score << endl;
    }

    cout << endl;
    //释放内存
    delete mapStudent;
}

void mapTest6()
{
    cout << "mapTest6():: ..." << endl;
    cout << endl;
}

void mapTest7()
{
    cout << "mapTest7():: ..." << endl;
    cout << endl;
}

void mapTest8()
{
    cout << "mapTest8():: ..." << endl;
    cout << endl;
}

void mapTest9()
{
    cout << "mapTest9():: ..." << endl;
    cout << endl;
}