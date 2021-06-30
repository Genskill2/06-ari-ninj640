#include <assert.h>
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string ari(string s) {
    int zero = 0, letters = 0, words = 0, sen = 0, ar;
    float a;
    for (int i = 0; i < strlen(s); i++) {
        if (isalnum(s[i]))
            letters++;
        else if (s[i] == ' ')
            words++;
        else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
            sen++;
        else
            zero++;
    }

    a = (4.71 * ((float)letters / (float)words)) +
        (0.5 * ((float)words / (float)sen)) - 21.43;
    ar = a + 1;

    if (ar == 1)
        return ("Kindergarten");
    if (ar == 2)
        return ("First/Second Grade");
    if (ar == 3)
        return ("Third Grade");
    if (ar == 4)
        return ("Fourth Grade");
    if (ar == 5)
        return ("Fifth Grade");
    if (ar == 6)
        return ("Sixth Grade");
    if (ar == 7)
        return ("Seventh Grade");
    if (ar == 8)
        return ("Eighth Grade");
    if (ar == 9)
        return ("Ninth Grade");
    if (ar == 10)
        return ("Tenth Grade");
    if (ar == 11)
        return ("Eleventh Grade");
    if (ar == 12)
        return ("Twelfth Grade");
    if (ar == 13)
        return ("College student");
    if (ar == 14)
        return ("Professor");
}
