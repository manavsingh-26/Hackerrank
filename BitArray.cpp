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
        
        curr = (prev*P+Q) % mod; //condition in the question
        if(curr != prev){
            prev = curr;   //previous value gets swapped if the current and the previous values were different(for distinct cases)
            count++;   //increases count for distinct values
        }
        else {
        loop_continue = false; //loop will stop if the values are same
        }
        i++;
    }
   cout<<count;
    
    return 0;
}
