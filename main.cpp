#include <iostream>
#include "Graph.h"
#include<bits/stdc++.h>

using namespace std;

int n,e,i,j;
vector<vector<pair<int,int> > > graph;
vector<int> color;
bool vis[100011];

void colour(int node)
{
    queue<int> q;
    int c=0;
    set<int> already_colored;
    if(vis[node])
        return;
    vis[node]=1;

    for(i=0;i<graph[node].size();i++)
    {
        if(color[graph[node][i].second]!=-1)
        {
            already_colored.insert(color[graph[node][i].second]);
        }
    }

    for(i=0;i<graph[node].size();i++)
    {
        if(!vis[graph[node][i].first])
        {
            q.push(graph[node][i].first);
        }
        if(color[graph[node][i].second]==-1)
        {
            while(already_colored.find(c)!=already_colored.end())
                c++;
            //cout<<graph[node][i].second+1<<" "<<c<<"\n";
            color[graph[node][i].second]=c;
            already_colored.insert(c);
            c++;
        }
    }
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        colour(temp);
    }
    return;
}
int main()
{
    int x,y;
    set<int> empty;
    Graph g;
    g.read_file("/home/nicolas/CLionProjects/AD70_TP/graph.txt");
    cout<<"\n";
    n = g.nodes.size();
    e = g.edges.size();
    graph.resize(n); //  Number of Vertices.
    color.resize(e,-1); // Number of Edges.
    memset(vis,0,sizeof(vis));
    int o = 0;
    map<char, int> force;
    for (auto i = g.edges.begin(); i != g.edges.end(); ++i)
    {
        Edge e = *i;

        x = (int)e.src - 65;
        y = (int)e.dest - 65;

        graph[x].push_back(make_pair(y,o));
        graph[y].push_back(make_pair(x,o));
        o++;
    }
    colour(0);
    for(i=0;i<e;i++)
    {
        cout<<"Sommet "<<i+1<<" couleur numéro "<<color[i]+1<<"\n";
    }
}
