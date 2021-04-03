/*
二次元の迷路問題を解くアルゴリズム（ABC007-C）
*/

#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main(){
  
  //R,C:盤面の大きさ
  //sx,sy:スタート地点
  //gx,gy:ゴール地点
  //bf:盤面情報
  //que:探索する経路
  int i, j, R, C, sx, sy, gx, gy;
  vector<vector<char>> bf(R, vector<char>(C));
  vector<vector<int>> check(R, vector<int>(C, -1));
  queue<P> que;
  vector<int> dx={1, 0, -1, 0}, dy={0, 1, 0, -1};
  que.push(P(sx-1, sy-1));
  check[sx-1][sy-1]=1;
  for(i=0; i<R; i++){
    for(j=0; j<C; j++){
      cin>>bf[i][j];
    }
  }
    
  
  while(que.size()){
    
    P pos=que.front(); que.pop();
    int x=pos.first, y=pos.second;
    for(i=0; i<4; i++){      
      int x_=x+dx[i], y_=y+dy[i];
      if(x_==gy-1 && y_==gx-1){
        cout<<check[y][x]<<endl;
        return 0;
      }
      if(bf[y_][x_]=='.' && check[y_][x_]==-1 && x_>=0 && y_>=0 && x_<C && y_<R){
        que.push(P(x_, y_));
        check[y_][x_]=check[y][x]+1;
      }
    }
  }
}