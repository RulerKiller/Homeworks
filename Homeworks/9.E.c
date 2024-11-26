#include <stdio.h>

typedef struct student
{
    long studentID;
    char studentName[20];
    char studentArea;
    int point1, point2;
} STUDENT;

STUDENT stu[7];

void setStudent()
{
    for (int i = 0; i < 7; i++)
        scanf("%ld %s %c %d %d", &stu[i].studentID, stu[i].studentName, &stu[i].studentArea, &stu[i].point1, &stu[i].point2);
}

void cmpfunc1(STUDENT stu[])
{
    STUDENT temp;
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 6 - i; j++)
            if (stu[j].point1 < stu[j + 1].point1 || (stu[j].point1 == stu[j + 1].point1 && stu[j].point2 < stu[j + 1].point2) || (stu[j].point1 == stu[j + 1].point1 && stu[j].point2 == stu[j + 1].point2 && stu[j].studentID < stu[j + 1].studentID))
            {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
}

void cmpfunc2(STUDENT stu[])
{
    STUDENT temp;
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 6 - i; j++)
            if (stu[j].point2 < stu[j + 1].point2 || (stu[j].point2 == stu[j + 1].point2 && stu[j].point1 < stu[j + 1].point1) || (stu[j].point2 == stu[j + 1].point2 && stu[j].point1 == stu[j + 1].point1 && stu[j].studentID < stu[j + 1].studentID))
            {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
}

void cmpfuncByID(STUDENT stu[])
{
    STUDENT temp;
    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 6 - i; j++)
            if (stu[j].studentID < stu[j + 1].studentID)
            {
                temp = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = temp;
            }
}

void printStudent()
{
    for (int i = 0; i < 7; i++)
        printf("%ld %s %c %d %d\n", stu[i].studentID, stu[i].studentName, stu[i].studentArea, stu[i].point1, stu[i].point2);
}

int main()
{
    int i;
    scanf("%d", &i);
    setStudent();
    if (i == 1)
        cmpfunc1(stu);
    else if (i == 2)
        cmpfunc2(stu);
    else
    {
        printf("I do not know whether the standard is liberal arts or science.\n");
        cmpfuncByID(stu);
    }
    printStudent();
    return 0;
}