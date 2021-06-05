

//Bit Array in C++ - Hacker Rank Solution
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
   
    unsigned long mod = (pow(2,31));
    
    unsigned long N,S,P,Q;
    cin>> N>>S>>P>>Q;
    unsigned long prev = S % mod;
    unsigned long curr =0;
    unsigned long count =1;
    unsigned loop_continue = true;
    unsigned long i=1;
    
    while(i < N && loop_continue){
        
        curr = (prev*P+Q)%mod;
        if(curr != prev){
            prev = curr;
            count++;
        }
        else {
        loop_continue = false;
        }
        i++;
    }
   cout<<count;
    
    return 0;
}
