#include <stdio.h>  
#include <conio.h>  
#include <string.h>  

// declaration of the functions  
void cnvt_to_lwr(char[]);
void sortArr(char[]);

int main()
{
    char str1[] = "course", str2[] = "source";
    int x, y = 0;

    // check the length of each string  
    if (strlen(str1) != strlen(str2))
    {
        printf(" The given strings are not anagram of each other. ");
        return 0;
    }

    else
    {
        // convert string into lowercase  
        cnvt_to_lwr(str1);
        cnvt_to_lwr(str2);

        // call sortArr() function to sort the arrays  
        sortArr(str1);
        sortArr(str2);
        for (x = 0; x < strlen(str1); x++)
        {
            // check string is equal or not  
            if (str1[x] != str2[x])
            {
                printf(" The given strings are not an anagram of each other.");
                return 0;
            }
        }
        printf("Both strings are an anagram of each other. ");
    }
    return 0;

}

// function definition here  
void cnvt_to_lwr(char a1[])
{
    int num;
    for (num = 0; num < strlen(a1) - 1; num++)
    {
        a1[num] = a1[num] + 32;
    }
}

// sorting here  
void sortArr(char a1[])
{
    int temp = 0, i, l;

    for (i = 0; i < strlen(a1) - 1; i++)
    {
        for (l = i + 1; l < strlen(a1); l++)
        {
            if (a1[i] > a1[l])
            {
                temp = a1[i];
                a1[i] = a1[l];
                a1[l] = temp;

            }
        }
    }

}