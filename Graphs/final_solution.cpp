#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

vector<int> componentsInGraph(const vector<vector<int>> &edges) {
    int maxNode = 0;

    // Menentukan node terbesar
    for (const auto &edge : edges) {
        maxNode = max(maxNode, max(edge[0], edge[1]));
    }

    vector<vector<int>> adjacency(maxNode + 1);
    vector<bool> visited(maxNode + 1, false);

    // Membangun adjacency list
    for (const auto &edge : edges) {
        int u = edge[0], v = edge[1];
        adjacency[u].push_back(v);
        adjacency[v].push_back(u);
    }

    int minSize = INT_MAX;
    int maxSize = INT_MIN;

    // Menemukan komponen terhubung
    for (int i = 1; i <= maxNode; ++i) {
        if (!visited[i] && !adjacency[i].empty()) {
            int size = 0;
            queue<int> q;
            q.push(i);
            visited[i] = true;

            while (!q.empty()) {
                int current = q.front(); q.pop();
                size++;

                for (int neighbor : adjacency[current]) {
                    if (!visited[neighbor]) {
                        visited[neighbor] = true;
                        q.push(neighbor);
                    }
                }
            }

            if (size >= 2) {
                minSize = min(minSize, size);
                maxSize = max(maxSize, size);
            }
        }
    }

    return {minSize, maxSize};
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    vector<vector<int>> edges(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        string edge_input;
        getline(cin, edge_input);

        vector<string> parts = split(rtrim(edge_input));
        edges[i][0] = stoi(parts[0]);
        edges[i][1] = stoi(parts[1]);
    }

    vector<int> result = componentsInGraph(edges);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];
        if (i != result.size() - 1) fout << " ";
    }

    fout << "\n";
    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );
    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;
    string::size_type start = 0, end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(str.substr(start));
    return tokens;
}
