//
// Copyright (c) 2019 The nanoFramework project contributors
// See LICENSE file in the project root for full license information.
//

#include "win_storage_native.h"


static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_win_storage_native_Windows_Storage_Devices_SDCard::MountMMCNative___STATIC__VOID__BOOLEAN,
    Library_win_storage_native_Windows_Storage_Devices_SDCard::MountSpiNative___STATIC__VOID__I4__I4,
    Library_win_storage_native_Windows_Storage_Devices_SDCard::UnmountNative___STATIC__VOID,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_win_storage_native_Windows_Storage_FileIO::WriteBytes___STATIC__VOID__WindowsStorageIStorageFile__SZARRAY_U1,
    Library_win_storage_native_Windows_Storage_FileIO::WriteText___STATIC__VOID__WindowsStorageIStorageFile__STRING,
    Library_win_storage_native_Windows_Storage_FileIO::ReadBufferNative___STATIC__VOID__WindowsStorageIStorageFile__BYREF_SZARRAY_U1,
    Library_win_storage_native_Windows_Storage_FileIO::ReadTextNative___STATIC__VOID__WindowsStorageIStorageFile__BYREF_STRING,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_win_storage_native_Windows_Storage_StorageFile::DeleteFileNative___VOID,
    Library_win_storage_native_Windows_Storage_StorageFile::RenameFileNative___VOID__STRING,
    NULL,
    NULL,
    Library_win_storage_native_Windows_Storage_StorageFile::GetFileFromPathNative___STATIC__WindowsStorageStorageFile__STRING__STRING,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_win_storage_native_Windows_Storage_StorageFolder::GetRemovableStorageFoldersNative___SZARRAY_WindowsStorageStorageFolder,
    Library_win_storage_native_Windows_Storage_StorageFolder::GetInternalStorageFoldersNative___SZARRAY_WindowsStorageStorageFolder,
    Library_win_storage_native_Windows_Storage_StorageFolder::GetStorageFoldersNative___SZARRAY_WindowsStorageStorageFolder,
    Library_win_storage_native_Windows_Storage_StorageFolder::GetStorageFilesNative___SZARRAY_WindowsStorageStorageFile__U4__U4,
    Library_win_storage_native_Windows_Storage_StorageFolder::CreateFileNative___WindowsStorageStorageFile__STRING__U4,
    Library_win_storage_native_Windows_Storage_StorageFolder::CreateFolderNative___WindowsStorageStorageFolder__STRING__U4,
    Library_win_storage_native_Windows_Storage_StorageFolder::DeleteFolderNative___VOID,
    Library_win_storage_native_Windows_Storage_StorageFolder::RenameFolderNative___VOID__STRING,
    Library_win_storage_native_Windows_Storage_StorageFolder::GetFolderNative___WindowsStorageStorageFolder__STRING,
    NULL,
    NULL,
    NULL,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Windows_Storage =
{
    "Windows.Storage", 
    0x53942C94,
    method_lookup,
    { 1, 0, 0, 1 }
};