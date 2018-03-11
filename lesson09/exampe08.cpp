#include<iostream>

class Location
{
    private:
        double longitude;//经度
        double latitude;//纬度

    public:     
        Location(double lon,double lan);
        Location(const Location &p);//复制构造函数
        ~Location();
        void getLocation();
};

Location::Location(double lon,double lan)
{
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
    Location aLoc(23.5,47);
    Location bLoc(aLoc);
    bLoc.getLocation();
    return 0;
}