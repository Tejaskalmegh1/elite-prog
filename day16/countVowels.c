// 09 feb 2026

// Task 58: Count Vowels
// Description: Count the number of vowels in a string.
// Input: Education
// Output: Vowels = 5

#include<stdio.h>

int main() 
{
    char str[] = "education";
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {
        //char ch = tolower(str[i]);
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    printf("Vowels = %d", count);

    return 0;
}