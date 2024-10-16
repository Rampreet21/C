#include <stdio.h>
#include <unistd.h>

int main()
{
    int h, m, s;
    for (h = 0; h <= 60; h++)
    {
        for (m = 0; m <= 60; m++)
        {
            for (s = 0; s < 60; s++)
            {
                printf("\rTime: %d:%d:%d ", h, m, s);
                sleep(1);
            }
        }
    }
    return 0;
}
