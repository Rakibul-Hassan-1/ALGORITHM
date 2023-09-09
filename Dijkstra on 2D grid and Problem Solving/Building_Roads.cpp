// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// vector<int> adj[N];
// bool visited[N];

// void DFS(int u)
// {
//     visited[u] = true;
//     for (int v : adj[u])
//     {
//         if (visited[v])
//             continue;

//         DFS(v);
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     for (int i = 0; i < m; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> leaders;

//     for (int i = 1; i <= n; i++)
//     {
//         if (visited[i])
//             continue;
//         leaders.push_back(i);
//         DFS(i);
//     }
//     cout << leaders.size() - 1 << endl;

//     for (int i = 0; i < leaders.size() - 1; i++)
//     {
//         cout << leaders[i] << " " << leaders[i + 1] << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool visited[N];

void dfs(int source)
{
    visited[source] = true;
    for (int child : adj[source])
    {
        if (visited[child])
            continue;

        dfs(child);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> head;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        head.push_back(i);
        dfs(i);
    }

    cout << head.size() - 1 << endl;

    for (int i = 0; i < head.size() - 1; i++)
    {
        cout << head[i] << " " << head[i + 1] << endl;
    }
}
