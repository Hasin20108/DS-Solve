#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout << "Enter the size of a sorted Array : ";
    cin >> n;
    vector <int> ar(n);
    cout << "Enter the sorted array : ";
    for(int &a : ar){
        cin >> a;
    }
    int x;
    cout << "Enter the number : ";
    cin >> x;
    ar.push_back(x);
    for(int i = n; i > 0; i--){
        if(ar[i] < ar[i-1]){
            swap(ar[i],ar[i-1]);
        }
    }
    cout << "Current Array : ";
    for(int a : ar){
        cout << a << " ";
    }
}