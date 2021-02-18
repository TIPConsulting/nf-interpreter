//
// Copyright (c) .NET Foundation and Contributors
// Portions Copyright (c) Microsoft Corporation.  All rights reserved.
// See LICENSE file in the project root for full license information.
//

#include "Graphics.h"
#include "nanoFramework_Graphics.h"

extern GraphicsDriver g_GraphicsDriver;

HRESULT Library_nanoFramework_Graphics_nanoFramework_UI_DisplayControl::get_LongerSide___STATIC__I4(
    CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    stack.SetResult_I4(g_GraphicsDriver.GetLongerSide());
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_Graphics_nanoFramework_UI_DisplayControl::get_ShorterSide___STATIC__I4(
    CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    stack.SetResult_I4(g_GraphicsDriver.GetShorterSide());
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_Graphics_nanoFramework_UI_DisplayControl::get_ScreenWidth___STATIC__I4(
    CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    stack.SetResult_I4(g_GraphicsDriver.GetWidth());
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_Graphics_nanoFramework_UI_DisplayControl::get_ScreenHeight___STATIC__I4(
    CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    stack.SetResult_I4(g_GraphicsDriver.GetHeight());
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_Graphics_nanoFramework_UI_DisplayControl::get_BitsPerPixel___STATIC__I4(
    CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    stack.SetResult_I4(g_GraphicsDriver.GetBitsPerPixel());
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_Graphics_nanoFramework_UI_DisplayControl::
    get_Orientation___STATIC__nanoFrameworkUIDisplayOrientation(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    stack.SetResult_I4((CLR_INT32)g_GraphicsDriver.GetOrientation());
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_Graphics_nanoFramework_UI_DisplayControl::
    NativeChangeOrientation___STATIC__BOOLEAN__nanoFrameworkUIDisplayOrientation(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    CLR_INT32 orientation = stack.Arg0().NumericByRef().s4;
    g_GraphicsDriver.ChangeOrientation((DisplayOrientation)orientation);
    NANOCLR_NOCLEANUP_NOLABEL();
}
