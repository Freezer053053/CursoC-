#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a, int b, int c, int d){
    int g;
    int h;
    
    if(a-b<0) g=b;
    else g=a;
    if(c-d<0) h=d;
    else h=c;
    if(g-h<0) return h;
    else return g;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n1, n2, n3, n4;
    
    cin>>n1>>n2>>n3>>n4;
    
    cout<<max(n1, n2, n3, n4)<<endl;
    return 0;
}