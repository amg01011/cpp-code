#include<bits/stdc++.h>
using namespace std ;
bool search_fun(vector< int> v , int n )
{
    vector<int > :: iterator it ;
    for(auto it =v.begin(); it!=v.end();it++){
        if(*it==n ){
            return true ;
        }
    }
    return false ;
}
int main()
{
    int p, q ;
    cin>>p>>q ;
    string a[q] ;
    for(int i=0;i< q;i++){
        getline(cin, a[i] );
    }
    vector<vector<int> > v (5, vector<int> (p+1));
    v[0].push_back(int('A')) ;
    v[1].push_back(int('B')) ;
    v[2].push_back(int('C')) ;
    v[3].push_back(int('D')) ;
    v[4].push_back(int('E')) ;
    for(int i=1;i<=p;i++){
        v[0].push_back(i) ;
    }
    for(int i=0;i< q;i++){
        int src = int(a[i][0]) ;
        int dest = int(a[i][1]) ;
        bool  ans  = search_fun(v[src] , a[i][3]) ;
        if(ans){
            vector<int> :: iterator it ;
            it = remove(v[src].begin(), v[src].end(),a[i][3] ) ;
            v[dest].push_back(a[i][3]) ;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j< p+1;j++){
            if(j==0){
                cout<<char(v[i][j]) ;
            }
            else{
                cout<<v[i][j] ;
            }
        }
        cout<<endl ;
    }

}
/*10 11
AB 2
AB 5
AB 8
AB 4
AB 9
BC 5
BC 8
BC 9
CB 5
CD 8
CE 9
*/
terminate called after throwing an instance of 'std::bad_alloc'
  what():  std::bad_alloc
