#include <bits/stdc++.h> 
using namespace std; 
const int maxx = 100005; 
vector<int> graph[maxx]; 
  
// Function to perform the DFS calculating the  
// count of the elements in a connected component 
void dfs(int curr, int& cnt, int*  
             visited, vector<int>& duringdfs) 
{ 
    visited[curr] = 1; 
  
    // Number of nodes in this component 
    ++cnt; 
  
    // Stores the nodes which belong  
    // to current component 
    duringdfs.push_back(curr); 
    for (auto& child : graph[curr]) { 
  
        // If the child is not visited 
        if (visited[child] == 0) { 
            dfs(child, cnt, visited, duringdfs); 
        } 
    } 
} 
  
// Function to return the desired  
// count for every node in the graph 
void MaximumVisit(int n, int k) 
{ 
    // To keep track of nodes we visit 
    int visited[maxx]; 
  
    // Mark every node unvisited 
    memset(visited, 0, sizeof visited); 
    int ans[maxx]; 
  
    // No of connected elements for each node 
    memset(ans, 0, sizeof ans); 
    vector<int> duringdfs;  
    for (int i = 1; i <= n; ++i) { 
        duringdfs.clear(); 
        int cnt = 0; 
  
        // If a node is not visited, perform a DFS as  
        // this node belongs to a different component 
        // which is not yet visited 
        if (visited[i] == 0) { 
            cnt = 0; 
            dfs(i, cnt, visited, duringdfs); 
        } 
  
        // Now store the count of all the visited 
        // nodes for any particular component. 
        for (auto& x : duringdfs) { 
            ans[x] = cnt; 
        } 
    } 
     
    // Print the result 
    for (int i = 1; i <= n; ++i) { 
        cout << ans[i] << " "; 
    } 
    cout << endl; 
    return; 
} 
  
// Function to build the graph 
void MakeGraph(){ 
    graph[1].push_back(2); 
    graph[2].push_back(1); 
    graph[2].push_back(3); 
    graph[3].push_back(2); 
    graph[3].push_back(4); 
    graph[4].push_back(3); 
    graph[5].push_back(6); 
    graph[6].push_back(5); 
    graph[6].push_back(7); 
    graph[7].push_back(6); 
    graph[5].push_back(7); 
    graph[7].push_back(5); 
} 
  
// Driver code 
int main() 
{ 
    int N = 7, K = 6; 
      
    // Build the graph 
    MakeGraph(); 
     
    MaximumVisit(N, K); 
    return 0; 
} 
