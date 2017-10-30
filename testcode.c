#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alp1,alp2,alp3,alp4;

    for(alp1='A'; alp1<='Z'; alp1++)
    {
        for(alp2='A'; alp2<='Z'; alp2++)
        {
            for(alp3='A'; alp3<='Z'; alp3++)
            {
                for(alp4='A'; alp4<='Z'; alp4++)
                {
                    printf("%c%c%c%c ",alp1,alp2,alp3,alp4);
                }
            }
        }
    }
    return 0;
}
