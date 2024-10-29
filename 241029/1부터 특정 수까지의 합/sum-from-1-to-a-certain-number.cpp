#include <iostream>
using namespace std;

int Print_result(int N){
    int sum=0;
    int result;
    for(int i=1;i<=N;i++){
        sum+=i;
    }
    return sum/10;
}


int main() {
    int N;
    cin>>N;
    cout<<Print_result(N);

    return 0;
}