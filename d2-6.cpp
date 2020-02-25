/*
print the combinations of two arrays in the phone key pad
example:
input:
1,2
output:
ad ae af
bd be bf
cd ce cf
*/
#include <iostream>

using namespace std;

int main()
{
    char ar[8][4]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},
                {'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    int i=3,j=3,a,b;
    cin>>a>>b;
    if(a==7 || a==9)
    i=4;
    if(b==7 || b==9)
    j=4;
    for(int k=0;k<i;k++)
    {
        for(int l=0;l<j;l++)
        {
            cout<<ar[a-2][k]<<ar[b-2][l]<<" ";
        }
        cout<<endl;
    }
}