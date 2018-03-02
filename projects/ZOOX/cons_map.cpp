#include <map>
#include <iostream>

int main()
{
	map<char, int> firstMap;
	firstMap['a']=10;
	firstMap['b']=11;
	firstMap['c']=12;
	firstMap['d']=14;

	firtMap::iterator = it;
	for(it=firstMap.begin(); it !=firstMap.end(); ++it)
		cout<<"key: "<<it->first<<"value: "<<it->second<<endl;

	return 0;
}