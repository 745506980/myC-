#include<iostream>
using namespace std;
int maxArea(int* height, int heightSize) {
    int i;
    int max_;

    int* top = height;
    int* end = height + (heightSize - 1);
    int max_t = *top;
    for (i = 0; i < heightSize; i++)
    {
        if (max_t < *(top + 1))
        {
            max_t = *(top + 1);
            top++;
        }
    }

    max_ = *end * ((end - top));
    for (i = 0; i < heightSize; i++)
    {
        if (max_ < *end * ((end-1 - top)))
        {
            max_ = *end * ((end-1 - top));
            end--;
        }

    }
    return max_;
}

int main____00000()
{
    int a[] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
   // cout<<maxArea(a, sizeof(a) / 4);
    int* top = a;
    int* end = a + 8;
    cout << "top" << top << "end" << end << endl;
    cout << end - top << endl;
    cout << *end << endl; 
    return 0;
}