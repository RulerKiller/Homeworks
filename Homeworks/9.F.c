#include  <stdio.h>

typedef struct date
{
    int point1;
    int point2;
    int point3;
    int ave;
}DATE;

typedef struct student
{
    long studentID;
    char studentName[10];
    char studentSex[3];
    DATE point;
}STUDENT;

STUDENT stu;

void averageScore(STUDENT *stu)
{
    stu->point.ave = (stu->point.point1 + stu->point.point2 + stu->point.point3) / 3;
}


int main()
{
    scanf("%ld %s %s %d %d %d", &stu.studentID, stu.studentName, stu.studentSex, &stu.point.point1, &stu.point.point2, &stu.point.point3);
    averageScore(&stu);
    printf("%ld %s %s %d %d %d %d\n", stu.studentID, stu.studentName, stu.studentSex, stu.point.point1, stu.point.point2, stu.point.point3, stu.point.ave);
    return 0;
}