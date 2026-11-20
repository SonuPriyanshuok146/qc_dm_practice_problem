
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (arr[i] != arr[i + 1]) {
                    if (arr[i + 1] == arr[i + 2]) {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
            else if (i == n - 1) {
                if (arr[i] != arr[i - 1]) {
                    if (arr[i - 1] == arr[i - 2]) {
                        cout << i + 1 << endl;
                        break;
                    }
                }
            }
            else {
                if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
