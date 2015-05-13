#include <iostream>
#include <unordered_map>
#include <fstream>
#include <string>

using namespace std;

struct Data {
	Data(string &str) :
	        str{str} {}
	Data(string &&str) :
	        str{move(str)} {}
	string str;
	size_t count{1};
};

void trim(string &str) {
	//Ту нужно обрабатывать строку....
	// городить огород с удалением всяких символов
	// и отсеиванием русских слов
}

int main()
{
	hash<std::string> str_hash;
	unordered_map<size_t, Data> map;

	ifstream file;
	string buf_str;
	file.open("w2",ios_base::in);
	while (!file.eof()) {
		file >> buf_str;
		trim(buf_str);
		auto n = map.emplace(make_pair(str_hash(buf_str), Data{buf_str}));
		if (!n.second)
			n.first->second.count++;
	}

//	for (auto& x: map)
//		cout << x.second.str << " - " << x.second.count << endl;

	return 0;
}

