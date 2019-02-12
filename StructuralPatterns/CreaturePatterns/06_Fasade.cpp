#include<iostream>
#include<Windows.h>
#include<string>
#include<list>
#include<ctime>
#include<set>

using namespace std;

void SetCol(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}
//----OWN VISUAL STUDIO---

enum THEMES { DARK, WHITE };

class TextRedactor
{
	int size;
public:
	TextRedactor(int c, int s) : size(s)
	{

	}
	void SetSize(int s)
	{
		size = s;
	}
	void SetColor(int c)
	{
		SetCol(c);
	}

	string Code()
	{
		string code;
		cout << "Write: ";
		cin >> code;
		return code;
	}

	void Close()
	{
		cout << "Save\n";
	}
};

class Sound
{
public:
	void PlaySoundOnPressButton()
	{
		for (size_t i = 0; i < 10; i++)
		{
			Beep(200, 50);
			Beep(200, 30);

		}

	}
	void PlaySoundOnExit()
	{
		for (size_t i = 0; i < 10; i++)
		{
			Beep(250, 50);
			Beep(300, 30);
		}
	}
};

class IDE
{
	string theme;
public:
	void SetTheme(THEMES th)
	{
		if (th == THEMES::DARK)
		{
			SetCol(12);
			theme = "dark";
		}
		else
		{
			SetCol(14);
			theme = "white";
		}
	}
	void ShowScreen()
	{
		for (size_t i = 0; i < 20; i++)
		{
			for (size_t j = 0; j < 20; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	void Exit()
	{
		cout << "----nice work! BB\n";
	}
};

class Compiler
{
	set<string> languages;
public:
	Compiler()
	{
		languages.insert("C");
		languages.insert("C++");
		languages.insert("C#");
		languages.insert("VB");
	}
	void EmitationHardWork()
	{
		for (size_t i = 0; i < 50; i++)
		{
			cout << ".";
			Sleep(50);
		}
		cout << endl;
	}
	void CopileOnC(string code)
	{
		cout << "---C---\n";
		cout << "RUN: " << code << endl;
		EmitationHardWork();
	}
	void CopileOnCPlus(string code)
	{
		cout << "---C++---\n";
		cout << "RUN: " << code << endl;
		EmitationHardWork();
	}
	void CopileOnCSharp(string code)
	{
		cout << "---C#---\n";
		cout << "RUN: " << code << endl;
		EmitationHardWork();
	}
	void CopileOnVB(string code)
	{
		cout << "---Visual Basic---\n";
		cout << "RUN: " << code << endl;
		EmitationHardWork();
	}
	bool NoSuchCompile(string lang)
	{
		if (find(languages.begin(), languages.end(), lang) == languages.end())
		{
			cout << "Unaccessible\n";
			return false;
		}
		return true;
	}
};


//----FACADE--------
class VS
{
	TextRedactor * redactor;
	Sound * sound;
	IDE * ide;
	Compiler * compiler;
public:
	VS()
	{
		redactor = new TextRedactor(7, 12);
		sound = new Sound();
		ide = new IDE();
		compiler = new Compiler();
	}

	void Open()
	{
		ide->SetTheme(THEMES::DARK);
		ide->ShowScreen();
		redactor->SetSize(14);
		redactor->SetColor(10);
	}
	string WriteProgram()
	{
		sound->PlaySoundOnPressButton();
		return redactor->Code();
	}
	void RunProgram(string code, string lang)
	{
		if (compiler->NoSuchCompile(lang))
		{
			if (lang == "C") compiler->CopileOnC(code);
			if (lang == "C++") compiler->CopileOnCPlus(code);
			if (lang == "C#") compiler->CopileOnCSharp(code);
			if (lang == "VB") compiler->CopileOnVB(code);
		}
	}
	void Close()
	{
		redactor->Close();
		ide->Exit();
		sound->PlaySoundOnExit();
	}

	~VS()
	{
		delete redactor;
		delete sound;
		delete ide;
		delete compiler;
	}
};


void main()
{
	SetConsoleOutputCP(1251);
	VS *vs = new VS();
	vs->Open();
	string code = vs->WriteProgram();
	vs->RunProgram(code, "C++");
	vs->RunProgram(code, "Pithon");
	vs->Close();
}