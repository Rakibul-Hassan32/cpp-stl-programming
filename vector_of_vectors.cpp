#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //v.push_back({5,2});
    cout<<endl;
}
int main(){
     int n;
     cin>>n;
     vector<vector<int>> v;
     for(int i=0;i<n;i++){
        int N;
        cin>>N;
        vector<int> temp;
        for(int j=0;j<N;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
     }

    v[0].push_back(10);
    v.push_back(vector<int> ());

     for(int i=0;i<v.size();i++){
       printVec(v[i]);
     }
     
    cout<<v[0][1];
    return 0;
}