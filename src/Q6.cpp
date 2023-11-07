#include<stdio.h> 

int main()
{
    char str[100] = "Hello, world!";
    char hi_char;
    int i;
    int freq[256] = { 0 };
    int highest = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("The frequency of %c is %d\n", i, freq[i]);
            if (highest < freq[i]) {
                freq[i] = highest;
                hi_char = i;
            }
        }
    }

    printf("The highest frequency is %c %d times", i, highest);
    return 0;
}