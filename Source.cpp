#include <iostream>
#include <Windows.h>
#include "vars.h"
#include "funcs.h"
funcs::gameplay FGobj;
vars::gameplay GPVobj;
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru"); SetConsoleTitle(L"Doors and Ghosts 0.1.0");

	while (true)
	{
	start:
		srand(time(NULL));
		GPVobj.DoorWithGhost = FGobj.RandomDoorWithGhost();

		cout << "\n �������� ����� 1 | 2 | 3: ";
		cin >> GPVobj.ChoosedDoor;

		if ((GPVobj.ChoosedDoor != 1) & (GPVobj.ChoosedDoor != 2) & (GPVobj.ChoosedDoor != 3)) {
			MessageBox(NULL, L"�� ������ ���� ������ 1, 2 ��� 3!", L"Doors and Ghosts", MB_ICONERROR);
			return 0;
		}

		FGobj.DoorOpening();

		if (GPVobj.ChoosedDoor == GPVobj.DoorWithGhost)
		{
			FGobj.Death();
			cout << " �����: " << GPVobj.Score << "\n\n\n\n";
			cout << " ������� ESC ����� �����..." << endl;

			while (true) {
				if (GetAsyncKeyState(VK_ESCAPE))
				{
					return 0;
				}
			}
		}
		else {
			GPVobj.Score++;
		}
	}
}