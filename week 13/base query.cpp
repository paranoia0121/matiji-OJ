#include<bits/stdc++.h>
using namespace std;
int main() {
	int ans = 0;
	int n, m, x;
	cin >> n;
	//计算各进制各位之和
	for (int i = 2; i < n; i++) {
		m = n;//备份
		while (m > 0) {
			ans += m % i;
			m -= m % i;
			m /= i;
		}//计算 i 进制里各位和
	}
	x = n - 2;//从二进制到(n-1)进制
	//计算各位之和与进制数是否可约分
	for (int i = 2; i*i < ans; i++) {
		while (ans%i == 0 && x%i == 0) {
			ans /= i;
			x /= i;
		}
	}//约分
	cout << ans << '/' << x;
}