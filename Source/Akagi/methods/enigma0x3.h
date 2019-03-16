/*******************************************************************************
*
*  (C) COPYRIGHT AUTHORS, 2016 - 2019
*
*  TITLE:       ENIGMA0X3.H
*
*  VERSION:     3.17
*
*  DATE:        16 Mar 2019
*
*  Prototypes and definitions for Enigma0x3 autoelevation method.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/
#pragma once

typedef struct _UCM_ENIGMA0x3_CTX {
    PVOID PayloadDll;
    DWORD PayloadDllSize;
    WCHAR szTempDirectory[MAX_PATH + 1];
} UCM_ENIGMA0x3_CTX, *PUCM_ENIGMA0x3_CTX;

BOOL ucmHijackShellCommandMethod(
    _In_opt_ LPWSTR lpszPayload,
    _In_ LPWSTR lpszTargetApp,
    _In_opt_ PVOID ProxyDll,
    _In_opt_ DWORD ProxyDllSize);

BOOL ucmDiskCleanupRaceCondition(
    _In_ PVOID PayloadDll,
    _In_ DWORD PayloadDllSize);

BOOL ucmAppPathMethod(
    _In_ LPWSTR lpszPayload,
    _In_ LPWSTR lpszAppPathTarget,
    _In_ LPWSTR lpszTargetApp);

BOOL ucmSdcltIsolatedCommandMethod(
    _In_ LPWSTR lpszPayload);

BOOL ucmMsSettingsDelegateExecuteMethod(
    _In_ LPWSTR lpszPayload);

BOOL ucmShellDelegateExecuteCommandMethod(
    _In_ LPWSTR lpTargetApp,
    _In_ SIZE_T cchTargetApp,
    _In_ LPWSTR lpTargetKey,
    _In_ SIZE_T cchTargetKey,
    _In_ LPWSTR lpPayload,
    _In_ SIZE_T cchPayload);
