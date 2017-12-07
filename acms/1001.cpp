/**
 * Catcher是MCA国的情报员
 * 他工作时发现敌国会用一些对称的密码进行通信
 * 比如ABBA，ABA，A，123321等
 * 但是他们有时会在开始或结束时加入一些无关的字符以防别国破解
 * 比如进行下列变化ABBA->12ABBA,ABA->ABAKK,123321->51233214
 * 因为截获的串太长了
 * 而且存在多种可能的情况（abaaab可看作是aba或baaab的加密形式）
 * Cathcer的工作量实在是太大了
 * 他只能向电脑高手求助
 * 你能帮Catcher找出最长的有效密码串吗？
 */
#include <iostream>
#include <string>
using namespace std;
int cert(string a,int m) {
	int max = m;
	for (int i = 0; i < a.length() - 1; i++) {
		if (a[i] == a[i + 1]) {
			int t = 0;
			for (int j = i, k = i + 1; j >= 0 && k < a.length(); j--, k++){
				if (a[j] == a[k]){t += 2;}
				else {break;}
			}
			max = t > max ? t : max;
		}
	}
	return max;
}
int main() {
	string a,b="";
	cin>>a;
	int m1 = cert(a,1);
	for (int k = 0; k < a.length()-1; k++)
		b += (char)(a[k] + a[k + 1]);
	int m2 = cert(b,0)+1;
	cout << (m1>m2?m1:m2) <<endl;
	return 0;
}