#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#include "modules/head.hpp"
using namespace std;

int main()
{
    // start here..

    eout("Welcome to DoNotClick Desktop!");
    out("VersionName : ");
    eout(VersionName);
    out("VersionType : ");
    eout(VersionType);
    out("Auther : ");
    eout(Auther);
    out("Tips : use \'cmd\' to run Windows cmd")

    eline;

    while (1)
    {
        cout << ">>> ";
        string s;
        getline(cin, s);
        if (s == "cmd")
        {
            system("cmd");
            // cin >> s; system(s.c_str());
        }

        if (s == "internet")
        {
            system("start https://cn.bing.com");
            // 自定义主页
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

    }

    return 0;
}