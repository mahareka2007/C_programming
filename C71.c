#include <stdio.h>

int main()
{
    int runnerA = 0, runnerB = 10;

    while (runnerA <= runnerB)
    {
        printf("Runner A at: %d, Runner B at: %d\n", runnerA++, runnerB--);
    }

    return 0;
}
