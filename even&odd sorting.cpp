#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int sort(int x[],int n){
int y = 0;
 for(int i=1;i<n;i++)
    if (x[i]%2==0)
     for(int j =i+1;j<n;j++){
        if (x[j]%2 != 0){
        y= x[i];
        x[i] = x[j];
        x[j] = y;
        break;
            }
else if(x[j]<x[i]){
     y= x[i];
    x[i] = x[j];
    x[j] = y;
        }
        }

}

int main()
{
int n;
cin>>n;
int x[n];
 for(int i=0;i<n;i++)
    x[i] = i+1;
sort(x,n);
for(int i=0;i<n;i++)
        cout<<x[i]<<" ";

}
