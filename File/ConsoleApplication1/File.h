#include<iostream>
using namespace std;
const int N = 100;
class File
{
public:
	File();
	~File();
	void SetFile(char*, char*, int, int);
	void SetName(char*);
	void SetDate(char*);
	void SetTheSize(int);
	void SettheNumOfReqwest(int);
	void DisplayFile();
	int GettheNumOfReqwest();
	char* GetName();
	char* GetDate();
	int GetTheSize(){};
private:
	char name[N];
	char date[N];
	int the_size = 0;
	int theNumOfReqwest = 0;
};



