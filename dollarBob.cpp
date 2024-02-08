#include <iostream>
#include <string>

using namespace std;

typedef string(*stringFunc) ();

string changeActions() {
	return "Change Action function.";
};
string buttonLayout() {
	return "Button Layout function.";
};
string keyBindings() {
	return "Key Bindings function.";
};
string onEventScripts() {
	return "OnEvent Scripts function.";
};
string mainMenuBar() {
	return "Main Menu Bar function.";
};
string miscOptions() {
	return "Misc Options function.";
};
string unlockDragging() {
	return "Unlock Dragging function.";
};
string showButtonIDs() {
	return "Show Button IDs function.";
};
string showActionIDs() {
	return "Show Action IDs function.";
};
string copy() {
	return "Copy function.";
};
string paste() {
	return "Paste function.";
};

int main() {
	stringFunc menuFunc[] = {
		changeActions,
		buttonLayout,
		keyBindings,
		onEventScripts,
		mainMenuBar,
		miscOptions,
		unlockDragging,
		showButtonIDs,
		showActionIDs,
		copy,
		paste
	};

	for (int selection = 1; selection != 0;) {
		cout << "Main Menu Bar\n1. Change Actions\n2. Button Layout\n3. Key Bindings\n4. OnEvent Scripts\n5. Main Menu Bar\n6. Misc Options\n7. Unlock Dragging\n8. Show Button IDs\n9. Show Actions IDs\n10. COPY\n11. PASTE\n\n Make your selection, or input 0 to exit: ";

		cin >> selection;

		if (selection > 11 || selection < 0 || !cin) {
			cout << "Invalid selection." << "\n" << endl;
			selection = 1;
			cin.clear();
			cin.ignore(256, '\n');
		}
		else if (selection == 0) {
			cout << "Bye bye!" << endl;
		}
		else {
			cout << menuFunc[selection - 1]() << "\n" << endl;
		}
		system("pause");
	}
	exit(0);
}