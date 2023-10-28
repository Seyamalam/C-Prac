#include <bits/stdc++.h>
using namespace std;
int Cx[] = {+0, +0, +1, -1, +1, -1, -1, +1};
int Cy[] = {+1, -1, +0, +0, +1, +1, -1, -1};
bool visited[100][100];
int arr[100][100];
struct Node
{
    int x;
    int y;
};
stack <Node> a;
int m, n;
void reset()
{
    memset(visited, false, sizeof visited);
    while(!a.empty())
        a.pop();
}
int DFS(int sX,int sY,int eX,int eY)
{
    int flag = 0;
    Node u, v;
    u.x = sX;
    u.y = sY;
    a.push(u);
    visited[sX][sY];
    while(!a.empty()){
        u = a.top();
        a.pop();
        if(u.x == eX && u.y == eY){
            flag = 1;
            break;
        }
        for(int i = 0;i < 8;i++){
            v.x = u.x+Cx[i];
            v.y = u.y+Cy[i];
            if(v.x >= 0 && v.x < m && v.y >= 0 && v.y < n && visited[v.x][v.y] == false && arr[v.x][v.y] == 1){
                visited[v.x][v.y] = true;
                a.push(v);
            }
        }
    }
    return flag;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        reset();
        cin>>m>>n;
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                cin>>arr[i][j];
            }
        }
        int sX, sY, eX, eY;
        cin>>sX>>sY>>eX>>eY;
        sX-=1;
        sY-=1;
        eX-=1;
        eY-=1;

        int flag = DFS(sX, sY, eX, eY);
        if(flag == 1){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";

    }
}
