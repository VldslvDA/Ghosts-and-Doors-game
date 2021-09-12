#pragma once

class funcs
{
	public: class gameplay {
		vars::gameplay GPVobj;
		public: int RandomDoorWithGhost() // Randomizing the ghost
		{

			return rand() % 3 + 1;
		}

		public: void DoorOpening() // Opening the door
		{
			system("cls");
			std::cout << "\n Вход в дверь.";
			Sleep(444); system("cls");
			std::cout << "\n Вход в дверь..";
			Sleep(444); system("cls");
			std::cout << "\n Вход в дверь...";
			Sleep(444); system("cls");
		}

		public: void Death() // Death
		{
			std::cout << "\n Вашу душу похитил Призрак." << std::endl;
			std::cout << " Вы мертвы." << std::endl;
			std::cout << " ____________________________" << std::endl;
		}
	};
};
