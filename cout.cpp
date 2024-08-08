#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int coutDigits(int n){
    int cnt=0;
    while(n>0){
        cnt = cnt+1;
        n=n/10;
    }
    return cnt;
}
int main(){
    int N=329823;
    cout<<"N:"<<N<<endl;
    int digits=coutDigits(N);
    cout<<"number of digits: "<<digits<<endl;
    return 0;
}
