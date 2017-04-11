#include <iostream>
#include "File.h"
using namespace std;
File* InitFileArray(int);
void DisplayArrayFile(File*, int);
File InitFile();
void SortByAlphabet(File*, int);
void DisplayArrayFileMaxSize(File* a, int n);
void DisplayArrayFileMaxReqw(File* a, int n);
void Swap(File& a, File& b);
const int M = 256;
int maxsize = 0, maxreq = 0;
int main()
{
	while (true)
	{
		int n = 0;
		cout << "the size of array:";
		cin >> n;
		cout << "zadat max size of file(KLB):";
		cin >> maxsize;
		cout << "zadat max number of reqwest:";
		cin >> maxreq;
		File* file = InitFileArray(n);
		system("cls");
		cout << "Files sorted by alphabet:\n";
		SortByAlphabet(file, n);
		DisplayArrayFile(file, n);
		cout << "------------------------\n";
		cout << "Files, which size is more than limit:\n";
		DisplayArrayFileMaxSize(file, n);
		cout << "------------------------\n";
		cout << "the number of reqwest is more than limit:\n";
		DisplayArrayFileMaxReqw(file, n);
		break;
	}
	system("pause");
	return 0;
}
void SortByAlphabet(File* a, int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (a[j].GetName() > a[j + 1].GetName())
			{
				Swap(a[j], a[j + 1]);
			}

}
void Swap(File& a, File& b)
{
	File c = a;
	a = b;
	b = c;
}
File* InitFileArray(int n)
{
	File* a = new File[M];
	for (int i = 0; i < n; i++)
	{
		a[i] = InitFile();
	}
	return a;
}
File InitFile()
{
	char name[M], data[M];
	int size = 0, thenumofreqw = 0;
	File c;
	cout << "Enter the Name of file:\n";
	cin.ignore();
	cin.get(name, M, '\n');
	cout << "Release data:\n";
	cin.ignore();
	cin.get(data, M, '\n');
	cout << "Enter The Size(KLB):\n";
	cin >> size;
	cout << "Enter The Number of reqwest:\n";
	cin.ignore();
	cin >> thenumofreqw;
	c.SetFile(name, data, size, thenumofreqw);
	return c;
}
void DisplayArrayFile(File* a, int n)
{
	for (int i = 0; i < n; i++)
		a[i].DisplayFile();
	cout << endl;
}
void DisplayArrayFileMaxSize(File* a, int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].GetTheSize() > maxsize)
			a[i].DisplayFile();
	cout << endl;
}
void DisplayArrayFileMaxReqw(File* a, int n)
{
	for (int i = 0; i < n; i++)
		if (a[i].GettheNumOfReqwest() > maxreq)
			a[i].DisplayFile();
	cout << endl;
}