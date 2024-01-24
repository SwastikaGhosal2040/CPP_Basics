//predict the output:
#include<iostream>
using namespace std;
int main()
{
    int p = 1;
    int q = 2;
    int r = 2;
    cout<<(p==q==r);
}

/**
 * Output: 0
 * Explanation:
 * (p==q==r) -> 1==2==2 
 * 1==2 -> false
 * false==2(non zero->true)
 * false==true (condition false->0)
*/