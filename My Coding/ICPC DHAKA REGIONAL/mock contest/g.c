#include <stdio.h>
#include <string.h>
char line[205];
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    { 
        fgets(line, sizeof(line), stdin);
        line[strcspn(line, "\n")] = '\0';
        char actual[205];
        int len = 0;
        int i = 0;
        while (line[i] != '\0')
        {
            if (line[i] == '\\' && line[i + 1] == '0')
            {
                actual[len++] = '\0';
                i += 2;
            }
            else
            {
                actual[len++] = line[i++];
            }
        }
        actual[len] = '\0';
        int sf = len + 1;
        int sl = 0;
        while (actual[sf] != '\0')
            sl++;
        printf("%d %d\n", sf, sl);
    }
    return 0;
}


