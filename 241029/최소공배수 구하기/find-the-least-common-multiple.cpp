#include <iostream>
using namespace std;

void Print_lcm(int n,int m){
    int lcm;
    int num=1;
    while(true){
        if(num%n==0 and num%m==0){
            break;
        }
        num++;

    }    
    lcm=num;
    cout<<lcm;

}

int main() {
    int n,m;
    cin>>n>>m;
    Print_lcm(n,m);
    return 0;
}