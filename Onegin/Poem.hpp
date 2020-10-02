#ifndef POEM_LIB
#define POEM_LIB

#include <iostream>
#include <cstring>
#include <cctype>
#include <fstream>
#include <cstdio>
#include <sys/mman.h>

typedef int (*StringCompareMethod)(char[], char[]);
int FrontStringCompare(char* str1, char* str2);
int  BackStringCompare(char* str1, char* str2);

class Poem {
private:
    const char* text;
    char** lines
    FILE* file;
    long NumberOfLines;
    Poem();
public:
    Poem(char* FileName);
    ~Poem();
    void PrintPoem() const;
    void SortPoem(StringCompareMethod);
    int  WriteToFile(char* FileName);
}

#endif //POEM_LIB
