#include <iostream>
#include <unordered_map>
#include <fstream>
#include <string>

using namespace std;

void trim(string &str) {
	//Ту нужно обрабатывать строку....
	// городить огород с удалением всяких символов
	// и отсеиванием русских слов
}

int main()
{
	unordered_map<string, size_t> map;

	ifstream file;
	string buf_str;
	file.open("w2",ios_base::in);
	while (!file.eof()) {
		file >> buf_str;
		trim(buf_str);
		auto n = map.emplace(make_pair(buf_str, 1));
		if (!n.second)
			n.first->second++;
	}

	for (auto& x: map)
		cout << x.first << " - " << x.second << endl;

	return 0;
}

