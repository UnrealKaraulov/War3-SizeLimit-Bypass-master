#define _WIN32_WINNT 0x0501 
#define WINVER 0x0501 
#define NTDDI_VERSION 0x05010000
#include <SDKDDKVer.h>
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <TlHelp32.h>
#include <MinHook.h>
#include <string>
#pragma comment(lib, "libMinHook.x86.lib")
#include <stdio.h>
#include <tchar.h>
#include <string.h>
#include <psapi.h>
#include <strsafe.h>
#include <vector>
#pragma comment(lib,"Psapi.lib")
#define BUFSIZE 512
using namespace std;