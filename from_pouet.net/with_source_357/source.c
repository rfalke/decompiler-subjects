#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "midasdll.h"

void MIDASerror() {
		printf("MIDAS error: %s\n", MIDASgetErrorMessage(MIDASgetLastError()));
		MIDASclose();
		getch();
		exit(0);
}

int main(void)
{
	MIDASmodule module;
	MIDASmodulePlayHandle playHandle;
	int i;
	FILE *f;

	remove("c:\\crn_cmn.mrk");

	if(!MIDASstartup()) {
		printf("Unable to initialize MIDAS sound system\n");
		getch();
		exit(0);
	}

	if(!MIDASinit()) MIDASerror();
	if(!MIDASstartBackgroundPlay(0)) MIDASerror();

	if((module = MIDASloadModule("cadmium.xm")) == NULL) MIDASerror();

	if((i = WinExec("..\\crn_cmn.exe", SW_SHOWMAXIMIZED )) == 0) {
		printf("Unable to execute crn_cmn.exe\n");
		MIDASclose();
		getch();
		exit(0);
	}

	while(1) {
		sleep(1000);
		if((f = fopen("c:\\crn_cmn.mrk", "rb")) !=  NULL) {
			fclose(f);
			break;
		}
	}

	playHandle = MIDASplayModule(module, TRUE);

	while(1) {
		sleep(1000);
		if((f = fopen("c:\\crn_cmn.mrk", "rb")) ==  NULL) break;
		else fclose(f);
	}

	MIDASclose();

	return 0;
}

