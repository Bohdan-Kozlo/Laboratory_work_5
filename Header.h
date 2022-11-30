#pragma once
#include <iostream>
#include <string>
using namespace std;
class Folder1
{
private:
	string name;
public:
	Folder1();
	Folder1(string name);
	string getName();
	class Folder2 {
	private:
		string name;
	public:
		Folder2();
		Folder2(string name);
		string getName();
		class File {
		private:
			string name;
			string extension;
			int size;
		public:
			File();
			File(string name, string extension, int size);
			string getName();
			string getExtension();
			int getSize();
		};
	};
	void showPath(Folder1 fol1, Folder1::Folder2 fol2, Folder1::Folder2::File file);
	
};

