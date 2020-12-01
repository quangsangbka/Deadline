#include<iostream>

using namespace std;

int indexOf(char* s, char c)
{
    int i = 0;
    while (true)
    {
        if (*(s + i) == NULL) return -1;
        if (*(s + i) == c) return i;
        i++;
    }
}

int main()
{
    char a[20] = { "QuangSang1" };
    char* s = a; char c = 'S';

    cout << "\n Vi tri cua " << c << " trong chuoi . QuangSang1. la : " << indexOf(s, c) << endl;
}