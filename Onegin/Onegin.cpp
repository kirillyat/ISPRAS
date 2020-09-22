
#include "Onegin.hpp"


/*

class text {
private:
    FILE* InputText;
    FILE* OutputText;
public:

}

text::text()
{
    InputText = fopen("onegin.txt", 'r');


}

*/

int FrontStringCompare(char* str1, char* str2)
{
    int index1 = 0,
        index2 = 0;

    while ((str1[index1] != 0) || (str2[index2] != 0)) {
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

/*
int BackStringCompare(char* str1, char* str2)
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
*/
