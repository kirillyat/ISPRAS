#include <string>
#include <cctype>

int FrontStringCompare(char* str1, char* str2)
{
    int index1 = 0,
        index2 = 0;

    while ((str1[i] != 0) || (str2[i] != 0)) {
        if (!isalpha(str1[index1])) {
            index1++;
            continue;
        }
        if (!isalpha(str1[index2])) {
            index2++;
            continue;
        }
        if (str1[index1] - str2[index2] != 0) {
            return str1[index1] - str2[index2];
        }
    }
    return str1[index1] - str2[index2];
}

bool  BackStringCompare(char* str1, char* str2)
{
    int index1 = length(str1),
        index2 = length(str2);

    while ((index1 > 0) || (index1 > 0)) {
        if (!isalpha(str1[index1])) {
            index1--;
            continue;
        }
        if (!isalpha(str1[index2])) {
            index2--;
            continue;
        }
        if (str1[index1] - str2[index2] != 0) {
            return str1[index1] - str2[index2];
        }
    }
    return str1[index1] - str2[index2];
}
