#include <windows.h>



typedef struct _PEB {
  BYTE InheritedAddressSpace;
  BYTE ReadImageFileExecOptions;
  BYTE BeingDebugged;
  BYTE Spare;
  LPVOID Mutant;
  LPVOID ImageBaseAddress;
  LPVOID LoaderData;
  LPVOID ProcessParameters;
  LPVOID SubSystemData;
  LPVOID ProcessHeap;
  LPVOID FastPebLock;
  LPVOID FastPebLockRoutine;
  LPVOID FastPebUnlockRoutine;
  LPVOID EnvironmentUpdateCount;
  LPVOID KernelCallbackTable;
  LPVOID SystemReserved;
  LPVOID AtlThunkSListPtr32;
} _PEB, *PPEB;


typedef struct _PEB_LDR_DATA {
    ULONG Length;
	BOOL Initialized;
	PVOID SsHandle;
	LIST_ENTRY InLoadOrderModuleList;
    LIST_ENTRY InMemoryOrderModuleList;
	LIST_ENTRY InInitializationOrderModuleList;
}_PEB_LDR_DATA, *P_PEB_LDR_DATA;

typedef struct _LDR_DATA_TABLE_ENTRY
{
	 LIST_ENTRY InLoadOrderLinks;
	 LIST_ENTRY InMemoryOrderLinks;
	 LIST_ENTRY InInitializationOrderLinks;
	 PVOID DllBase;
	 PVOID EntryPoint;
	 ULONG SizeOfImage;
	 UNICODE_STRING FullDllName;
	 UNICODE_STRING BaseDllName;
} _LDR_DATA_TABLE_ENTRY, *P_LDR_DATA_TABLE_ENTRY;
