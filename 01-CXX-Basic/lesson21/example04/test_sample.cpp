// #include "./include/Teacher.h"
// #include "./include/Cadre.h"
// #include "./include/Person.h"

#include "./include/Sample.h"

int main(int arg,char *args[])
{
    //创建对象,动态申请内存
    Teacher *teacher = new Teacher("风清扬",'F',65,"中国.深圳","136983284","班主任");
    teacher->display();

    Cadre *cadre = new Cadre("岳不群",'M',70,"中国.华山","133983233","华山派掌门");
    cadre->display();

    Person *person1 = new Person("任我行",'F',65,"中国.深圳","136983284","班主任","校长",36870);
    person1->display();

    //释放内存
    delete teacher;
    delete cadre;
    delete person1;

    return 0;
}