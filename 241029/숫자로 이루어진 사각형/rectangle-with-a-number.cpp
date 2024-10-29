#include <iostream>
using namespace std;

void Print_rec(int N){
    int cnt=1;
    for (int i=0;i<N;i++){
        for (int j=1;j<=N;j++){
            cout<<cnt<<" ";
            cnt++;
            if(cnt==10){
                cnt=1;
            }
        }
        cout<<endl;
    }
}

int main() {
    int N;
    cin>>N;
    Print_rec(N);
    return 0;
}