#include <iostream>
using namespace std;


void Print_gcd(int n, int m){
    int gcd=0;
    int choice=min(n,m);
    for(int i=1;i<=choice;i++){
        if(n%i==0 && m%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
        
    }

int main() {
    int n,m;
    cin>>n>>m;
    Print_gcd(n,m);
    
    return 0;
}