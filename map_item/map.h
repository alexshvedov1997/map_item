#ifndef MAP_H_
#define MAP_H_

#include <string>
using namespace std;

class Pair{
		
public:
	Pair(const string & k ="Null", const string & val = "Null"):key(k), value(val){}
	string key;
	string value;
};

class Map{
	Pair * map;
	int size;
	
public:
	Map(){
		map = new Pair[1];
		size = 1;
	}
	void insert(const string & ,const string &);
	void print_map();
	string& operator[](const string &);
	void delete_element(const string & elem);
	bool find_key(const string&);
	void delete_key(const string & _key);
	void change_key(const string &, const string &);
	~Map();
};

#endif 