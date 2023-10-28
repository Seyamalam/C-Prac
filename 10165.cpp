#include <iostream>
#include <vector>
#include <algorithm>
#include <queue> // Include the <queue> header for priority_queue

using namespace std;

int main() {
    int caseNumber = 1;
    int N;
    
    while (true) {
        cin >> N;
        if (N == 0) break;
        
        vector<int> containers(N);
        for (int i = 0; i < N; i++) {
            cin >> containers[i];
        }
        
        int M;
        cin >> M;
        vector<int> additions(M);
        for (int i = 0; i < M; i++) {
            cin >> additions[i];
        }

        cout << "Case " << caseNumber << "#" << endl;
        caseNumber++;

        priority_queue<int> maxHeap; // Define maxHeap as a priority_queue

        for (int i = 0; i < N; i++) {
            maxHeap.push(containers[i]);
        }

        for (int i = 0; i < M; i++) {
            int maxContainer = maxHeap.top();
            maxHeap.pop();
            maxContainer += additions[i];
            maxHeap.push(maxContainer);
        }

        vector<int> result;
        while (!maxHeap.empty()) {
            result.push_back(maxHeap.top());
            maxHeap.pop();
        }

        for (int i = 0; i < N; i++) {
            cout << result[i];
            if (i < N - 1) {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
