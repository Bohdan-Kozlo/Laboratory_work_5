#pragma once
#include <iostream>
#include <string>
using namespace std;
class Folder1
{
private:
	string name_folder1;
public:
	Folder1();
	Folder1(string name);
	~Folder1() {}
	string get_name();
	class Folder2 {
	private:
		string name_folder2;
	public:
		Folder2();
		Folder2(string name);
		~Folder2() {}
		string get_name();
		class File {
		private:
			string name_file;
			string extension_file;
			int size_file;
		public:
			File();
			File(string name, string extension, int size);
			~File() {}
			string get_name();
			string get_extension();
			int get_size();
		};
	};
	void showPath(Folder1 folder1, Folder1::Folder2 folder2, Folder1::Folder2::File file);

};

