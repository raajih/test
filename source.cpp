#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>

using namespace std;

int main()
{
	filesystem::path myCWD;

	myCWD = filesystem::current_path();

	for (const auto& entry : filesystem::directory_iterator(myCWD))
	{
		filesystem::path entryPath = entry.path();
		cout << entryPath.string() << endl;
	}
	


	return 0;
}


