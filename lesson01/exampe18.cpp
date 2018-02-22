#include<iostream>

int main()
{
    //计算汽车的平均速度
    //输入开始距离、结束距离
    //输入开始时间、结束时间

    std::cout << "所有输入数据为整数\n";

    int startPost;//开始里程
    int endPost;//结束里程
    int distant;//距离
    int startHour;//开始时间
    int startMinute;
    int startSecond;
    int endHour;//结束时间
    int endMinute;
    int endSecond;
    int elapsedTS;//消耗总时间(秒)
    double elapsedTime;//消耗总时间(小时)

    std::cout << "开始里程: ";
    std::cin >> startPost;

    std::cout << "输入结束里程： ";
    std::cin >> endPost;

    std::cout << "输入开始时间(时/分/秒): ";
    std::cin >> startHour >> startMinute >> startSecond;

    std::cout << "输入结束时间(时/分/秒): ";
    std::cin >> endHour >> endMinute >> endSecond;

    //距离
    distant = endPost - startPost;

    //输出时间
    // std::cout << startHour << "\t" << startMinute << "\t" << startSecond << std::endl;
    // std::cout << endHour << "\t" << endMinute << "\t" << endSecond << std::endl;
    // std::cout << distant << std::endl;

    //消耗时间(秒)
    elapsedTS = (endHour * 3600 + endMinute * 60 + endSecond) - (startHour * 3600 + startMinute * 60 + startSecond);

    int elapsedHour = elapsedTS / 3600;//时
    int elapsedMinute = elapsedTS % 3600 / 60;//分
    int elapsedSecond = elapsedTS % 60;//秒

    elapsedTime = elapsedHour + (double)elapsedMinute / 60 + (double)elapsedSecond / 3600;//消耗时间(时)

    double velocity = distant / elapsedTime;

    std::cout << "汽车行驶了" << distant << "公里" << std::endl;
    std::cout << "消耗了" << elapsedHour << "时" << elapsedMinute << "分" << elapsedSecond << "秒" << std::endl;
    std::cout << "平均速度: " << velocity << "公里/小时" << std::endl;

    return 0;
}
