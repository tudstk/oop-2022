#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <fstream>
#include <queue>

using namespace std;

int main()
{
	//citim string-ul din fisierul txt

	std::string Sir;
	ifstream file("text_file.txt");
	if (file.is_open())
	{
		getline(file, Sir);
		std::cout << Sir << '\n';
		file.close();
	}
	else
		std::cout << "File not open";
	
	std::map<string, int> Words;
	std::string temp;
	int left=0, right=0;
	for (int i = 0; i < Sir.size(); i++)
	{
		if (Sir[i] == ' ' || Sir[i] == ',' || Sir[i] == '?' || Sir[i] == '.')
		{
			right = i;
			int word_count=1;
			temp = Sir.substr(left, right-left);
			transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
			//std::cout << temp << '\n';

			pair<map<string, int>::iterator, bool> Value;
			Value = Words.insert(pair<string, int>(temp, word_count));
			if (Value.second == false)
				++Value.first->second;

			//verificam cati separatori avem pana la urmatorul cuvant

			int j = i, sep_count = 0;
			while (Sir[j] == ' ' || Sir[j] == ',' || Sir[j] == '?' || Sir[j] == '.')
			{
				sep_count++;
				j++;
			}
			left = i + sep_count;
			i = j; //se muta i-ul la prima pozitie pe care se afla un caracter diferit de separator

		}
	}

	map<string, int>::iterator it;
	for (it = Words.begin(); it != Words.end(); it++)
		cout << it->first << " " << it->second << '\n';

	return 0;
}