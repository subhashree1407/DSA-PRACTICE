#include<bits/stdc++.h>
using namespace std;
char* reverseString(char* s) {
    // Code Here
    int n=strlen(s);
    for(int i=0;i<n/2;i++){
        char temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
        
    }
    return s;
}