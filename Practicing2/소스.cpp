#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {
	queue<int> q;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string com;
		getline(cin, com);
		if (com.substr(0, 3) == "push") {
			string a = com.substr(5);
			int b = stoi(a);
			q.push(b);
		}
		else if (com.substr(0, 2) == "pop") {
			if (q.empty() == true) {
				cout << -1;
			}
			else {
				cout << q.front();
				q.pop();
			}
		}
		else if (com.substr(0, 3) == "size") {
			cout << q.size();
		}
		else if (com.substr(0, 4) == "empty") {
			if (q.empty() == true) {
				cout << 1;
			}
			else {
				cout << 0;
			}
		}
		else if (com.substr(0, 4) == "front") {
			cout << q.front();
		}
		if (com.substr(0, 3) == "back") {
			cout << q.front();
		}
	}
	
}