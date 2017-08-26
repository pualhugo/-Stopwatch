#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef unsigned int uint;
void time_clock();
int main()
{
    printf("按下s键开始计时");
    char ch=getchar();
    if(ch == 's')
        time_clock();
    else if(ch == 27)   //退出格式
        exit(0);
    return 0;
}
void time_clock()
{
    uint hour = 0,min = 0,sed = 0;  //初始化元素
    do
    {
        printf("%dhour%dmin%dsed",hour,min,sed);
        sleep(1);   //延时一秒
        sed++;
        system("cls");  //清屏
        if(sed > 59)
        {
            min++;
            sed = 0;
        }
        if(min > 59)
        {
            hour++;
            min = 0;
        }
    }while(1);

}
