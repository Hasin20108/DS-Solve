#include<bits/stdc++.h>
using namespace std;

int main (){
    int x;
    vector <int> ar = {23,33,44,55,66};
    cout << "Enter the number : ";
    cin >> x;
    ar.push_back(x);
    int n = ar.size();
    for(int i = n-1; i > 0; i--){
        if(ar[i] < ar[i-1]){
            swap(ar[i],ar[i-1]);
        }
    }
    cout << "Current Array : ";
    for(int a : ar){
        cout << a << " ";
    }
    
    vector <string> names = {"Arif","Aslam","Esha","Fahim","Hasin"};
    string t;
    cout << "Enter name : ";
    cin >> t;
    names.push_back(t);
    int n = names.size();
    for(int i = n2-1; i >0; i--){
        if(names[i] < names[i-1]){
            swap(names[i],names[i-1]);
        }
    }
    cout << "Current Array : ";
    for(string a : names){
        cout << a << " ";
    }

    int num,pos;
    vector <int> ar2 = {12,34,25,47,8,10};
    cout << "Enter number and position : ";
    cin >> num >> pos;
    int len = ar2.size();
    int count = 1;
    for(int i = 0; i < len; i++){
        if(i >= pos-1){
            swap(num,ar2[i]);
        }
    }
    ar2.push_back(num);
    cout << "Current Array : ";
    for(int a : ar2){
        cout << a <<" ";
    }cout << endl;
    return 0;


    vector <string> names = {"Arif","Aslam","Esha","Fahim","Hasin"};
    string t;
    int pos;
    cout << "Enter name and pos : ";
    cin >> t >> pos;
    int n = names.size();
    for(int i = 0;i < n; i++){
        if(i >= pos-1){
            swap(names[i],t);
        }
    }
    names.push_back(t);
    cout << "Current Array : ";
    for(string a : names){
        cout << a << " ";
    }
    cout << endl;    

}