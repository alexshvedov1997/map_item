#include <iostream>
#include "map.h"


using namespace std;

int main(){
	Map map;
	map.insert("key1", "value2");
	map.insert("key2", "value2");
	map.insert("key3", "value2");
	map.insert("key4", "value2");
	map.insert("key5", "value2");
	map.print_map();
	cout<<map["key3"]<<endl;
	map["key3"] = "new";
	cout<<map["key3"]<<endl;
	cout<<map.find_key("key4")<<endl;
	cout<<"------------------"<<endl;
	map.delete_key("key4");
	map.change_key("key1", "new key");
	map.print_map();
	return 0;
}