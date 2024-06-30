#include<bits/stdc++.h>
using namespace std;


class abc{
    public:
    bool operator()(int a, int b){ // operator is keyword
        return a>b;
    }
};

bool cmp(int a, int b){
    return a<b;
}
int main(){
  
    vector<int>arr{3,45,2,34,12,98,3,5,6};
    sort(arr.begin(), arr.end(), abc());


    for(auto ele : arr){
        cout<<ele<<" ";
    }

    
    sort(arr.begin(), arr.end(), cmp);

    // try sort(arr.begin(), arr.end(), cmp);   in leetcode  with class overloding function object



    for(auto ele : arr){
        cout<<ele<<" ";
    }
    return 0;
}