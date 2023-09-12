#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	double A, B, C, I, J, K;
	cin >> A >> B >> C;
	cin >> I >> J >> K;
	
    double min;
	min = A/I < B/J ? A/I : B/J;
	min = min < C/K ? min : C/K;
	
	cout<< fixed << setprecision(6) << (A - min * I) << ' ' << (B - min * J) << ' ' << (C - min * K);
}
