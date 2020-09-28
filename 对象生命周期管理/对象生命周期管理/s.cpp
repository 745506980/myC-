#include<iostream>
using namespace std;

int lengthOfLastWord(const char* s)
{
    int number = 0;
    while (*s != '\0')
    {
        s++;
        if (*s == '\0')
        {
            s--;
            if (*s == ' ')
            {
                return number;
            }
            while (*s != ' ')
            {
                s--;
                number++;
                if (*s == ' ')
                {
                    return number;
                }
            }
        }
    }
}
int main00000()
{
    cout<<lengthOfLastWord("a");
    return 0;

}