#ifndef POEM_HPP
#define POEM_HPP

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

#endif //POEM_HPP
