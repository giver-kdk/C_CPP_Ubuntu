// This bot(Sia) performs specific task required for the user. 
// It is customized for my personal use. So, it may or may not work on any other system.
// Bot only supports linux OS
// Audio playing requires 'mpg123' package to be installed
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void input(string &str)
{
	system("clear");
	getline(cin, str);
	// Convert command into lowercase
	transform(str.begin(), str.end(), str.begin(), ::tolower);
}

int main()
{
	char ch;
	string command;
	// Introduction and Command List
	system("mpg123 Audio/helloSiaHereHowCanIHelp.mp3");
	system("clear");
	system("mpg123 Audio/listOfCommands.mp3");
	system("clear");
	cout << "Commands\t\t\t\tUse" << endl;
	cout << endl;
	cout << "play music\t\t\tPlays random music from the computer" << endl;
	cout << "stop music\t\t\tPauses music if it is playing" << endl;
	cout << "open browser\t\t\tOpens default Web Browser tab" << endl;
	cout << "open code\t\t\tOpens Visual Studio Code" << endl;
	cout << "open figma\t\t\tOpens Figma Application" << endl;
	cout << "open google\t\t\tOpens Google tab in default browser" << endl;
	cout << "open teams\t\t\tOpens Microsoft Teams tab in default browser" << endl;
	cout << "open gmail\t\t\tOpens Gmail tab in default browser" << endl;
	cout << "open facebook\t\t\tOpens Facebook tab in default browser" << endl;
	cout << "open youtube\t\t\tOpens Youtube tab in default browser" << endl;
	cout << "open github\t\t\tOpens github tab in default browser" << endl;
	cout << "open linkedin\t\t\tOpens LinkedIn tab in default browser" << endl;
	cout << "open discord\t\t\tOpens Discord tab in default browser" << endl;
	cout << "open twitter\t\t\tOpens Twitter tab in default browser" << endl;
	cout << "help\t\t\t\tShows up this command list" << endl;
	cout << "bye\t\t\t\tBot exits" << endl;
	cout << "\nType 'help' for this list again.\n\nPress ENTER to continue" << endl;
	ch = getchar();
	// Command Execution Flow
	while(true)
	{
		system("clear");
		cout << "User ===> ";
		cout << " ";
		input(command);
		system("clear");
		if((command == "hello") || (command == "hi") || (command == "hello sia") || (command == "whats up"))
		{
			// Play mp3 file using 'mpg123' from system
			system("mpg123 Audio/helloUser.mp3");
			system("clear");
		}
		else if((command == "\0"))
		{
			system("clear");
		}
		else if((command == "help"))
		{
			system("mpg123 Audio/howCanIHelp.mp3");
			system("clear");
			cout << "Commands\t\t\t\tUse" << endl;
			cout << endl;
			cout << "play music\t\t\tPlays random music from the computer" << endl;
			cout << "stop music\t\t\tPauses music if it is playing" << endl;
			cout << "open browser\t\t\tOpens default Web Browser tab" << endl;
			cout << "open code\t\t\tOpens Visual Studio Code" << endl;
			cout << "open figma\t\t\tOpens Figma Application" << endl;
			cout << "open google\t\t\tOpens Google tab in default browser" << endl;
			cout << "open teams\t\t\tOpens Microsoft Teams tab in default browser" << endl;
			cout << "open gmail\t\t\tOpens Gmail tab in default browser" << endl;
			cout << "open facebook\t\t\tOpens Facebook tab in default browser" << endl;
			cout << "open youtube\t\t\tOpens Youtube tab in default browser" << endl;
			cout << "open github\t\t\tOpens github tab in default browser" << endl;
			cout << "open linkedin\t\t\tOpens LinkedIn tab in default browser" << endl;
			cout << "open discord\t\t\tOpens Discord tab in default browser" << endl;
			cout << "open twitter\t\t\tOpens Twitter tab in default browser" << endl;
			cout << "help\t\t\t\tShows up this command list" << endl;
			cout << "bye\t\t\t\tBot exits" << endl;
			cout << "\nPress ENTER to continue" << endl;
			ch = getchar();
			system("clear");
		}
		else if((command == "what is your name?") || (command == "what is your name") || (command == "who are you?") || (command == "who are you"))
		{
			system("mpg123 Audio/myName.mp3");
			system("clear");
		}
		else if((command == "who is your creator?") || (command == "who made you?") || (command == "who invented you?") || (command == "who created you?"))
		{
			system("mpg123 Audio/iWasCreatedBy.mp3");
			system("clear");
		}
		else if((command == "where do you live?") || (command == "where is your home?") || (command == "where are you?") || (command == "how can i see you?"))
		{
			system("mpg123 Audio/iLiveInside.mp3");
			system("clear");
		}
		else if((command == "you are beautiful") || (command == "you look beautiful") || (command == "you are awesome") || (command == "you are nice"))
		{
			system("mpg123 Audio/thankYou.mp3");
			system("clear");
		}
		else if((command == "respect me") || (command == "do what i say") || (command == "help me") || (command == "love everybody"))
		{
			system("mpg123 Audio/okaySure.mp3");
			system("clear");
		}
		else if((command == "how are you?"))
		{
			system("mpg123 Audio/iAmFine.mp3");
			system("mpg123 Audio/howAreYou.mp3");
			system("clear");
		}
		else if((command == "open browser"))
		{
			system("exec brave-browser");
			system("mpg123 Audio/openingBrowser.mp3");
			system("clear");
		}
		else if((command == "open code"))
		{
			system("exec code");
			system("mpg123 Audio/openingVsCode.mp3");
			system("clear");
		}
		else if((command == "play music"))
		{

			system("mpg123 Audio/playingMusic.mp3");
			system("rhythmbox-client --play");
			system("clear");
		}
		else if((command == "stop music"))
		{
			system("rhythmbox-client --stop");
			system("mpg123 Audio/musicStopped.mp3");
			system("clear");
		}
		else if((command == "open browser"))
		{
			system("mpg123 Audio/openingBrowser.mp3");
			system("exec brave-browser");
			system("clear");
		}
		else if((command == "open youtube"))
		{
			// System command to open URL website
			system("xdg-open https://youtube.com");
			system("mpg123 Audio/openingYoutube.mp3");
			system("clear");
		}
		else if((command == "open facebook"))
		{
			system("xdg-open https://facebook.com");
			system("mpg123 Audio/openingFacebook.mp3");
			system("clear");
		}
		else if((command == "open discord"))
		{
			system("xdg-open https://discord.com/channels/@me");
			system("mpg123 Audio/openingDiscord.mp3");
			system("clear");
		}
		else if((command == "open google"))
		{
			system("xdg-open https://google.com");
			system("mpg123 Audio/openingGoogle.mp3");
			system("clear");
		}
		else if((command == "open github"))
		{
			system("xdg-open https://github.com");
			system("mpg123 Audio/openingGithub.mp3");
			system("clear");
		}
		else if((command == "open linkedin"))
		{
			system("xdg-open https://www.linkedin.com/feed");
			system("mpg123 Audio/openingLinkedIn.mp3");
			system("clear");
		}
		else if((command == "open twitter"))
		{
			system("xdg-open https://twitter.com/home");
			system("mpg123 Audio/openingTwitter.mp3");
			system("clear");
		}
		else if((command == "open teams"))
		{
			system("xdg-open https://teams.microsoft.com");
			system("mpg123 Audio/openingMsTeams.mp3");
			system("clear");
		}
		else if((command == "open gmail"))
		{
			system("xdg-open https://gmail.com");
			system("mpg123 Audio/openingGmail.mp3");
			system("clear");
		}
		else if((command == "open figma"))
		{
			system("mpg123 Audio/openingFigma.mp3");
			system("exec figma-linux");
			system("clear");
		}
		else if((command == "bye"))
		{
			system("mpg123 Audio/byeBye.mp3");
			system("clear");
			exit(0);
		}
		else
		{
			system("mpg123 Audio/sorryDidntUnderstand.mp3");
			system("clear");
		}
	}
	return 0;
}