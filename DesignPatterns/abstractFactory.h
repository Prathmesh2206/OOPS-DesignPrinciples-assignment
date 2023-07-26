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

class ScrollBar
{
public:
    virtual void paint() = 0;
};

class WindowsScrollBar : public ScrollBar
{
public:
    void paint()
    {
        cout << "Windows ScrollBar" << endl;
    }
};

class MacScrollBar : public ScrollBar
{
public:
    void paint()
    {
        cout << "MacOS ScrollBar" << endl;
    }
};

class GUIFactory
{
public:
    virtual Button *createButton() = 0;
    virtual ScrollBar *createScrollBar() = 0;
};

class WindowsFactory : public GUIFactory
{
public:
    Button *createButton()
    {
        return new WindowsButton;
    }
    ScrollBar *createScrollBar()
    {
        return new WindowsScrollBar;
    }
};

class MacFactory : public GUIFactory
{
public:
    Button *createButton()
    {
        return new MacButton;
    }
    ScrollBar *createScrollBar()
    {
        return new MacScrollBar;
    }
};
