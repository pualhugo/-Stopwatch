#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
typedef unsigned int uint;
void time_clock();
int main()
{
    printf("����s����ʼ��ʱ");
    char ch=getchar();
    if(ch=='s')
        time_clock();
    else if(ch==27)
        exit(0);
    return 0;
}
void time_clock()
{
    uint hour=0,min=0,sed=0;
    do
    {
        printf("%dhour%dmin%dsed",hour,min,sed);
        sleep(1);
        sed++;
        system("cls");
        if(sed>59)
        {
            min++;
            sed=0;
        }
        if(min>59)
        {
            hour++;
            min=0;
        }
    }while(1);

}