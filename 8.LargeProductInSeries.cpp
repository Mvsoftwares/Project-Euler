#include <bits/stdc++.h>


using namespace std;

//link -:https://www.hackerrank.com/contests/projecteuler/challenges/euler008/problem

int main(){
    int t;
    int temp, max1=0;;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        int k;
        cin >> n >> k;
        string a;
        cin>>a;
        
        for(int i=0;i<n;++i)
        {

            if(n-i<k)
                break;
            temp=a[i]-'0'; //Ascii of 0 is 48 and like 23451 , ascii of 2 is 50 so to get value 2 in int temp;
            for(int j=i+1;j<n-(n-k)+i;++j)
            {
                temp=temp*(a[j]-'0'); //same here;
            }
            if(temp>max1)
              max1=temp;
        }

        cout<<max1<<endl;
        max1=0;

    }

    return 0;
}
