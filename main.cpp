#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include "modules/head.hpp"
#include <thread>
// #include
using namespace std;

map<string, string> mp;
// 包管理器

void InitConfig()
{
    ifstream infile("applist");
    string a;
    while (getline(infile, a))
    {
        int pos = a.find('=');
        string name = a.substr(0, pos - 1);
        string value = a.substr(pos + 2);
        mp[name] = value;
    }
}

void print()
{
    eout("Welcome to DoNotClick Desktop!");
    out("VersionName : ");
    eout(VersionName);
    out("VersionType : ");
    eout(VersionType);
    out("Auther : ");
    eout(Auther);
    eout("Tips : use \'cmd\' to run Windows cmd");
    eout("One Command A line.");

    eline;
}

int main()
{
    // start here..

    InitConfig();

    print();

    while (1)
    {
        cout << ">>> ";
        string s;
        getline(cin, s);
        if (s == "cmd")
        {
            system("cmd");
        }

        // if (s == "")
        // {
        //     system("start https://cn.bing.com");
        // }

        if (s == "apps")
        {
            cout << "apps : [list, run]" << endl;
            string c;
            cout << "Select one : ";
            getline(cin, c);
            if (c == "list")
            {
                for (auto [name, value] : mp)
                {
                    cout << name << " -> " << value << endl;
                }
            }
            if (c == "run")
            {
                cout << "Select an app : ";
                string name;
                getline(cin, name);
                string tmp = mp[name];
                string path = "apps\\" + mp[name] + "\\main.exe";
                system("cls");
                cout << "__Start_Run__ : " << name << endl
                     << endl;
                int res = system(path.c_str());
                cout << endl;
                if (res == -1)
                    cout << "Error, Can't find the excute file." << endl;
                else
                    cout << "__End_Run__" << endl;
                system("pause");
                system("cls");
                print();
            }
        }
        if (s == "exit")
        {
            cout << "Goodbye!" << endl;
            return 0;
        }
    }

    // if (s == "set")
    // {
    //     自定义命令
    //     string name;
    //     cout << "Input what you want to set : ";
    //     cin >> name;
    //     if (name == "shortcut")
    //     {
    //         string t;
    //         cout << "Name : ";
    //         cin >> t;
    //         cout << "Path : ";
    //         cout <<

    //     }
    // }

    return 0;
}