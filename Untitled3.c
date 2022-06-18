#include<stdio.h>
int main()
{
int hours,minutes,totalminutes,totalseconds;
int minutesanhour=60;
int secondsanhour=3600;
printf("Enter hours:");
scanf("%d",&hours);
printf("Enter minutes:");
scanf("%d",&minutes);
totalminutes=minutes+(hours*minutesanhour);
totalseconds=minutes*60+(hours*secondsanhour);
printf("minutes are:%d\n",totalminutes);
printf("seconds are:%d\n",totalseconds);
return 0;


}
