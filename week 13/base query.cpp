#include<bits/stdc++.h>
using namespace std;
int main() {
	int ans = 0;
	int n, m, x;
	cin >> n;
	//��������Ƹ�λ֮��
	for (int i = 2; i < n; i++) {
		m = n;//����
		while (m > 0) {
			ans += m % i;
			m -= m % i;
			m /= i;
		}//���� i �������λ��
	}
	x = n - 2;//�Ӷ����Ƶ�(n-1)����
	//�����λ֮����������Ƿ��Լ��
	for (int i = 2; i*i < ans; i++) {
		while (ans%i == 0 && x%i == 0) {
			ans /= i;
			x /= i;
		}
	}//Լ��
	cout << ans << '/' << x;
}