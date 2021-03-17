#include <iostream>
#include <vector>
using namespace std;
/*
** UF木のクラスを定義します

*/
template <typename T>
struct UFTree{

  vector<T> node;
  vector<T> rank;

  UFTree(T n){
    node.resize(n); rank.resize(n);
    for(T i=0; i<n; i++){
      node[i]=i;
      rank[i]=0;
    }
  }

  T root(T ndnum){
    if(node[ndnum]==ndnum)return ndnum;
    else return node[ndnum]=root(node[ndnum]);
  }

  bool is_same(T ndnum, T _ndnum){
    return root(ndnum)==root(_ndnum);
  }

  bool merge(T gnum, T snum){

    gnum=root(gnum); snum=root(snum);
    if(gnum==snum) false;
    if(rank[gnum]<rank[snum])  swap(gnum, snum);
    if(rank[gnum]==rank[snum]) rank[gnum]++;
    if(!is_same(gnum, snum)) node[root(gnum)]=root(snum);
    return true;
  }
};

/* Debug */
int main(){

  int N=5;
  UFTree test(N);
  cout<<test.is_same(1, 2)<<endl;
  cout<<test.merge(1, 2)<<endl;
  cout<<test.node[1]<<" "<<test.node[2]<<endl;
  cout<<test.is_same(1, 2)<<endl;
  return 0;
}
