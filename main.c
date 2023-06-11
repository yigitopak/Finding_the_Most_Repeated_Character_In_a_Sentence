#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    int lowercaseCount[26] = {0};
    int i = 0;
    int mostFrequent;
    char sentence[100];
    
    printf("Please enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i])
    {
        if (sentence[i] >= 'a' && sentence[i] <= 'z')
        {
            lowercaseCount[sentence[i] - 'a']++;
        }
        i++;
    }

    mostFrequent = lowercaseCount[0];
    for (int j = 1; j < 26; j++)
    {
        if (lowercaseCount[j] != 0)
        {
            if (lowercaseCount[j] > mostFrequent)
            {
                mostFrequent = lowercaseCount[j];
                character = j + 'a';
            }
        }
    }

    printf("The most frequently used character: %c\n", character);

    return 0;
}
