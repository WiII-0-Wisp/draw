#include <iostream>
#include <vector>
#include <fstream>

int main() // по-моему комментарии излишни, тут всё очевидно
{
	using namespace std;
	setlocale(0, "");
	int N, m = 0;
	cout << "Введите число бочонков в мешке: ";
	ofstream outf("txt.txt", ios::app);
	cin >> N;
	outf << N << endl;
	vector<bool> V(N, true);
	cout << "Результаты жеребьёвки: ";
	while (m < N) {
		int x = rand() % N + 1;
		if (V[x-1]) {
			cout << x << " ";
			outf << x << " ";
			V[x - 1] = false;
			++m;
		}
	}
	outf << "\n\n";
	outf.close();
}
