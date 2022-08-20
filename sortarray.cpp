#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
  int i = m - 1;
  int j = n - 1;
  int l = m + n - 1;
  num1.insert(num1.end(), n, 0);
  while (i >= 0 && j >= 0) {
    if (num1[i] < num2[j]) {
        num1[l--] = num2[j--];
    } else {
        num1[l--] = num1[i--];
    }
  }
  while (j >= 0) num1[l--] = num2[j--];
  while (i >= 0) num1[l--] = num1[i--];
}

int main() {
    vector<int> a, b;
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    b.push_back(2);
    b.push_back(4);
    b.push_back(6);  
    int m = a.size();
    int n = b.size();  
    merge(a, m , b, n);
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;
    return 0;
}


