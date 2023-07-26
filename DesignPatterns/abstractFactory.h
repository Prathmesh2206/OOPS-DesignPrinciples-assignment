#include<bits/stdc++.h>
using namespace std;

class Button
{
public:
    virtual void paint() = 0;
};

class MacButton : public Button
{
public:
    void paint()
    {
        cout << "MacOS Button" << endl;
    }
};

class WindowsButton : public Button
{
public:
    void paint()
    {
        cout << "Windows Button" << endl;
    }
};

class Textbox
{
public:
    virtual void paint() = 0;
};

class WindowsTextbox : public Textbox
{
public:
    void paint()
    {
        cout << "Windows Textbox" << endl;
    }
};

class MacTextbox : public Textbox
{
public:
    void paint()
    {
        cout << "MacOS Textbox" << endl;
    }
};

class GUIFactory
{
public:
    virtual Button *createButton() = 0;
    virtual Textbox *createTextbox() = 0;
};

class WindowsFactory : public GUIFactory
{
public:
    Button *createButton()
    {
        return new WindowsButton;
    }
    Textbox *createTextbox()
    {
        return new WindowsTextbox;
    }
};

class MacFactory : public GUIFactory
{
public:
    Button *createButton()
    {
        return new MacButton;
    }
    Textbox *createTextbox()
    {
        return new MacTextbox;
    }
};
