#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(1);
    v.push_back(7);
    v[2]=5;

    sort(v.begin(),v.end());
for(int i:v){
    cout<<i<<" "<<&v[i]<<endl;
}

} 
