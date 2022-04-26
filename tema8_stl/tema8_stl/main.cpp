#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
	string text;
	ifstream my_file("input.txt");
	if (!my_file)
	{
		printf("eroare la deschidere!");
		return 0;
	}
	if (!getline(my_file, text)) //getline --> Get line from stream into string
	{
		printf("eroare la citire!");
		return 0;
	}
	printf("Sirul citit este: %s\n", text.c_str()); //c_str --> Get C string equivalent

	map<string, int> m;
	//Creare mapa
	int found = text.find_first_of(" ,.?!"); //Searches the string for the first character that matches ANY of the characters specified
	string word;
	while (found != string::npos) //If no matches are found, the function returns string::npos
	{
		word = text.substr(0, found); //aici copiem cuvantu, care e separat
		if (word.length() != 0)
			m[word] += 1;
		text.erase(0, found + 1); //stergem tot de la 0 pana la found din sir
		found = text.find_first_of(" ,.?!"); //updatam found pt sirul curent
	}
	/*
		V1 pt afisare
	for (auto pair : m)
		cout << '"' << pair.first << '"' << " : " << pair.second << '\n';
		V2 pt afisare
	for(auto pair = m.begin(); pair != m.end(); pair++)
		cout << '"' << pair->first << '"' << " : " << pair->second << '\n';
	
	//helppp
	priority_queue<map<string, int>> q;
	for (auto pair : m)
	{
		q.push(pair);
	}
	while (!q.empty())
	{
		cout << q.top()->first << " => " << q.top()->second << '\n';
		q.pop();
	}*/

}