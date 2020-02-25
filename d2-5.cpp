//print the index value of a container which holds the maximum quantity of water
/*

Input:
6
7 2 6 5 4 8
output :
1
explanation:
here the elemnt 2 's index is printed because this is placed between two numbers 7,6 which forms a capacity of 4 difference
     |
|    |
| |  |
| || |
| ||||
| ||||
||||||
||||||
*/
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int ar[a],br[30],t=0,max=0,num;
    for(int i=0;i<a;i++)
    {
      cin>>ar[i];  
    }
    for(int i=1;i<a-1;i++)
    {
        if(ar[i-1]>ar[i]&& ar[i]<ar[i+1])
           { if(ar[i-1]>ar[i+1])
            {br[t]=ar[i+1]-ar[i];
            //cout<<br[t];
            t++;
            }
            else if(ar[i-1]<ar[i+1])
            {br[t]=ar[i-1]-ar[i];
            t++;}
               for(int r=0;r<t;r++)
               if(br[r]>max)
               {
                   max=br[r];
                   num=i;
               }
           }
    }
cout<<num;
return 0;
}
