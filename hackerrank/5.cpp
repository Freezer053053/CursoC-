#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


bool esPar(int num){
    return num%2==0?true:false;
}
    


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int nu;
    string nom;
    
    cin>>n>>nu;
    
    for(int i=n; i>=n && i<=nu; i++){
        if(i>=1 && i<=9){
            if(i==1) nom="one";
            else if(i==2) nom="two";
            else if(i==3) nom="three";
            else if(i==4) nom="four";
            else if(i==5) nom="five";
            else if(i==6) nom="six";
            else if(i==7) nom="seven";
            else if(i==8) nom="eight";
            else if(i==9) nom="nine";
            
            cout<<nom<<endl;
            
        }else if(i>9){
            if(esPar(i)==true){
                cout<<"even"<<endl;
            }else{
                cout<<"odd"<<endl;
            }
            
        }
    }
    return 0;   
} 