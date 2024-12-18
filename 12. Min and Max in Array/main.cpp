// https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        sort(arr.begin(), arr.end());
        return {arr[0], arr[arr.size() - 1]};
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<long long int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(arr);
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}