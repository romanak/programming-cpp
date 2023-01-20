# Programming C++

Code for the textbook "Programming Principles and Practice Using C++" by Bjarne Stroustrup, 2009.

Instructions for Windows 10/11:
1. Download the latest version of GCC with Clang for Win64 at [Winlibs](https://winlibs.com/) website.
2. Extract the archive to C drive and add the directory `C:\mingw64\bin` to the system variables Path.
3. Install [Visual Studio Code](https://code.visualstudio.com/).
4. Install C/C++ extension for Visual Studio Code.
5. Select `VS Code` -> `Terminal` -> `Configure Tasks` -> `C/C++: g++.exe build active file`, then modify the following lines in `tasks.json`:

```json
"label": "Build with GCC 12.2.0",
"args": [
				"-fdiagnostics-color=always",
				"-g",
				"-std=c++20",
				"${file}",
				"-o",
				"${fileDirname}\\${fileBasenameNoExtension}.exe"
			],
```
> Note: label is for your information only, use your current version of GCC.
