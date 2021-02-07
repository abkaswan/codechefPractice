// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
#include <iostream>

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a1[1001],a2[1001];
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            cin>>a1[i];
        }
        for(int i=0;i<n;i++)
        {
            a2[i]=0;
        }
        for(int i=0;i<m;i++)
        {
            // cout<<a1[i-1]<<endl;
            a2[a1[i]-1]=1;
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            // cout<<a2[i]<<endl;
            if(a2[i]!=1 && flag==0)
            {
                cout<<i+1<<" ";
                flag=1;
                a2[i]=1;
            }
            if(a2[i]!=1 && flag==1)
            {
                flag=0;
            }
        }
        cout<<endl;
        int flag2=0;
        for(int i=0;i<n;i++)
        {
            if(a2[i]!=1)
            {
                cout<<i+1<<" ";
                flag2=1;
            }
        }
        // if(flag2==0)
        // {
        //     cout<<endl;
        // }
        cout<<endl;
    }
    return 0;
}
//someone else`s solution 
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long int
// #define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
// #define f first
// #define s second

// void solve()
// {
//    int n,m;
//    cin>>n>>m;
//    int a[m];
//    for(int i=0;i<m;i++){
//     cin>>a[i];
//    }
//    sort(a,a+m);
//    vector <int> v;
//    int j=0;
//    for(int i=0;i<n;i++){
//         if(a[j]!=i+1)
//           v.push_back(i+1);
//           else
//             j++;
//    }
//    if(v.size()!=0){
//    for(int i=0;i<v.size();i=i+2){
//     cout<<v[i]<<" ";
//    }
//    cout<<"\n";
//    for(int i=1;i<v.size();i=i+2){
//      cout<<v[i]<<" ";
//    }
//    cout<<"\n";
//    }
//    else
//     cout<<"\n";
// }
// int main()
// {
//     fast
//     int t;cin>>t;while(t--)
//     solve();
//     return 0;
// }
