#include<iostream>
using namespace std;
void permute(string s,int l,int r){
    if(l==r){
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<r;i++){
        swap(s[l],s[i]);
        permute(s,l+1,r);
        //backtracking
        swap(s[l],s[i]);
    }
}
int main(){
    string s="ABC";
    int n=s.length();
    permute(s,0,n);
    return 0;
}