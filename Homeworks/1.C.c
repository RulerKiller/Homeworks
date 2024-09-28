#include <stdio.h>
#include <math.h>

int main()
{
    int a,i,j, s[3];
    float ave,output;
    for (i = 0; i < 3; i++)
        scanf("%d", &s[i]);
    for(i=0;i<2;i++)
        for(j=0;j<2-i;j++)
            if (s[j] < s[j + 1])
            {
                a = s[j];
                s[j] = s[j + 1];
                s[j + 1] = a;
            }
    if (s[2] + s[1] <= s[0])
        printf("Can't");
    else
    {
        ave = (float)(s[2] + s[1] + s[0]) / 2;
        output = (float)sqrt(ave * (ave - s[2]) * (ave - s[1]) * (ave - s[0]));
        printf("%.2f", output);
    }
    return 0;
}