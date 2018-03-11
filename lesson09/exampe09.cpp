#include<iostream>

class Location
{
    private:
        double longitude;//经度
        double latitude;//纬度

    public:     
        Location();
        Location(double lon,double lan);
        Location(const Location &p);//复制构造函数
        ~Location();
        void getLocation();
};

//把对象xxx的数据复制到形参 location
void bjLocation(Location location)
{
    std::cout << "把对象xxx的数据复制到形参location" << std::endl;
    location.getLocation();
}

//函数返回类类型时，通过复制构造函数建立临时对象  
Location getLoca()
{
    Location loca(89.7,58.9);
    return loca;
}

Location::Location()
{
    std::cout << "Location()不带参数的构造函数" << std::endl;
}

Location::Location(double lon,double lan)
{
    std::cout << "Location()构造函数" << std::endl;
    longitude = lon;
    latitude = lan;
}

Location::Location(const Location &p)
{
    std::cout << "Location(const Location &p) 复制构造函数" << std::endl;
    longitude = p.longitude;
    latitude = p.latitude;
}

Location::~Location()
{
    std::cout << "~Location()析构函数" << std::endl;
}

void Location::getLocation()
{
    std::cout << "经度: " << longitude << " ,纬度: " << latitude << std::endl;
}



int main()
{
    //复制构造函数
    //函数返回类类型时，通过复制构造函数建立临时对象  
    Location location(24.8,49.7);
    bjLocation(location);

    std::cout << std::endl << std::endl;
    Location bLoca;
    bLoca = getLoca();
    bLoca.getLocation();

    return 0;
}