#include  <stdio.h>

typedef struct date
{
    int   year;
    int   month;
    int   day;
}DATE;

typedef struct student
{
    long  studentID;
    char  studentName[10];
    char  studentSex;
    DATE  birthday;
}STUDENT;

int main()
{
    int i;
    STUDENT stu[3] = { {1001011,"ÍõÀö",'F',{1995,10,12}},{1001012,"Àî¾ü",'M',{1995,5,24}},{1001013,"ÕÔ±ó",'M',{1994,2,25}} };
    for (i = 0; i < 3; i++)
        printf("%d %s %c %d/%d/%d\n",stu[i].studentID,stu[i].studentName,stu[i].studentSex,stu[i].birthday.year,stu[i].birthday.month,stu[i].birthday.day);
    return 0;
}