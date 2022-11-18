
#include<bits/stdc++.h>
using namespace std;

int main(){
    // taking input
    cout << "Enter array size" << endl;
    int n; cin >> n;
    vector<int>arr(n);
    cout << "Enter the elements of the array" << endl;
    for(auto &a: arr) cin >> a;
    // input done
    // (a) Maximum value
    int mx = arr[0];
    for(auto a: arr) mx = max(mx, a);
    cout << "Maximum value is " << mx << endl;
    // (b) Minimum value
    int mn = arr[0];
    for(auto a: arr) mn = min(a, mn);
    cout << "Minimum value is " << mn << endl;
    // (d) Total value
    double sum = 0;
    for(auto a: arr) sum += a;
    cout << "Total value is " << sum << endl;    
    // (c) average value
    sum /= n;
    cout << "Average value is " << sum << endl;
    // (e) Sin value
    cout << "The sin value for all elements are " << endl;
    for(auto a: arr){
        cout << sin(a) << ", ";
    }
    cout << endl;

}