#include <iostream>
#include <Windows.h>

void loadnig(short duration = 80, short times = 2) // default
{
	for (int i = 0; i < times; i++)
	{
		
		Gotoxy(43, 10);
		cout << "|";
		Sleep(duration);
		Gotoxy(43, 10);
		cout << "/";
		Sleep(duration);
		Gotoxy(43, 10);
		cout << "-";
		Sleep(duration);
		Gotoxy(43, 10);
		cout << "|";
		Sleep(duration);
		Gotoxy(43, 10);
		cout << "/";
		Sleep(duration);
		Gotoxy(43, 10);
		cout << "-";
		Sleep(duration);
		Gotoxy(43, 10);
		cout << "\\";
		Sleep(duration);
		Gotoxy(43, 10);
		cout << "|";
		Sleep(duration);
		Gotoxy(43, 10);
		
		
	}
}

int main()
{
  loading();
  
  return 0;
}
