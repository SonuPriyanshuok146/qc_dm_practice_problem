#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int mini, maxi;
        
        if(a > b && a > c){
            maxi = a;
        }else if(b > c){
            maxi = b;
        }else{
            maxi = c;
        }

        if(a < b && a < c){
            mini = a;
        }else if(b < c){
            mini = b;
        }else{
            mini = c;
        }

        cout << a+b+c-mini-maxi << endl;
    }
    return 0;
}