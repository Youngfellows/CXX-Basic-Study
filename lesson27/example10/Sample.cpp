#include "./include/Sample.h"

/**
 * @brief 获取当前系统时间
 *
 */
void test1()
{
    cout << "test1():: ..." << endl;
    auto now = std::chrono::system_clock::now();
    //通过不同精度获取相差的毫秒数
    uint64_t dis_millseconds = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count() - std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count() * 1000;
    time_t tt = std::chrono::system_clock::to_time_t(now);
    auto time_tm = localtime(&tt);
    char strTime[25] = {0};
    sprintf(strTime, "%d-%02d-%02d %02d:%02d:%02d %03d", time_tm->tm_year + 1900,
            time_tm->tm_mon + 1, time_tm->tm_mday, time_tm->tm_hour,
            time_tm->tm_min, time_tm->tm_sec, (int)dis_millseconds);
    std::cout << strTime << std::endl;
    cout << endl;
}

std::string date_time(std::time_t posix)
{
    char buf[20]; // big enough for 2015-07-08 10:06:51\0
    std::tm tp = *std::localtime(&posix);
    return {buf, std::strftime(buf, sizeof(buf), "%F %T", &tp)};
}

/**
 * @brief 毫秒
 *
 * @return std::string
 */
std::string stamp()
{
    using namespace std;
    using namespace std::chrono;

    // get absolute wall time
    auto now = system_clock::now();

    // find the number of milliseconds
    auto ms = duration_cast<milliseconds>(now.time_since_epoch()) % 1000;

    // build output string
    std::ostringstream oss;
    oss.fill('0');

    // convert absolute time to time_t seconds
    // and convert to "date time"
    oss << date_time(system_clock::to_time_t(now));
    oss << '.' << setw(3) << ms.count();

    return oss.str();
}

/**
 * @brief 微秒
 *
 * @return std::string
 */
std::string stamp2()
{
    using namespace std;
    using namespace std::chrono;

    auto now = system_clock::now();

    // use microseconds % 1000000 now
    auto us = duration_cast<microseconds>(now.time_since_epoch()) % 1000000;

    std::ostringstream oss;
    oss.fill('0');

    oss << date_time(system_clock::to_time_t(now));
    oss << '.' << setw(6) << us.count();

    return oss.str();
}

void test2()
{
    cout << "test2():: ..." << endl;
    std::cout << stamp() << std::endl;
    std::cout << stamp2() << std::endl;
    cout << endl;
}

void test3()
{
    cout << "test3():: ..." << endl;
    std::cout << stamp2() << std::endl;
    long start1 = getCurrentTime();
    long start2 = getCurrentTime2();
    cout << "1,当前系统时间:" << start1 << endl;
    cout << "2,当前系统时间:" << start2 << endl;

    //线程休眠116ms
    std::this_thread::sleep_for(std::chrono::milliseconds(116));
    //线程休眠1分钟
    // std::this_thread::sleep_for(std::chrono::minutes(1));
    long end2 = getCurrentTime2();
    long elapsed = end2 - start2;
    cout << "3,休眠了多长时间:" << elapsed << " ms" << endl;
    cout << endl;
}

void test4()
{
    cout << "test4():: ..." << endl;

    struct timeval t1, t2, tresult;
    double timeuse;
    double timeu[2] = {0};
    gettimeofday(&t1, NULL);
    gettimeofday(&t2, NULL);
    timersub(&t2, &t1, &tresult);
    timeuse = tresult.tv_sec + (1.0 * tresult.tv_usec) / 1000000;     //精确到秒
    timeuse = tresult.tv_sec * 1000 + (1.0 * tresult.tv_usec) / 1000; //精确到毫秒
    timeu[0] += timeuse;
    cout << "signale leakage's time:" << timeu[0] << "ms" << endl;
    cout << endl;
}

void test5()
{
    cout << "test5():: ..." << endl;
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::milliseconds(2000)); //休眠2秒
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    std::cout << "等待时间:" << elapsed.count() << " ms" << endl;
    cout << endl;
}

void test6()
{
    cout << "test6():: ..." << endl;
    cout << endl;
}

long getCurrentTime()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000 + tv.tv_usec / 1000;
}

long getCurrentTime2()
{
    auto time_now = chrono::system_clock::now();
    auto duration_in_ms = chrono::duration_cast<chrono::milliseconds>(time_now.time_since_epoch());
    return duration_in_ms.count();
}
