//
// Copyright (c) .NET Foundation and Contributors
// Portions Copyright (c) Microsoft Corporation.  All rights reserved.
// See LICENSE file in the project root for full license information.
//

#include <string.h>
#include <nanoCLR_Hardware.h>
#include <targetPAL.h>

#include "nanoFramework_hardware_esp32_native.h"

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPad::
    NativeTouchPadReadRawData___U2__I4(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    uint16_t pinVal = 0;
    {
        touch_pad_t pinNum = (touch_pad_t)stack.Arg0().NumericByRef().s4;
        touch_pad_read_raw_data(pinNum, &pinVal);
        ////TODO:
        // esp_err_t err = touch_pad_read_raw_data(pinNum, &pinVal);
        // if (err != ESP_OK)
        // {
        //     NANOCLR_SET_AND_LEAVE(CLR_E_INVALID_PARAMETER);
        // }

        // Return err to the managed application
        stack.SetResult_U2(pinVal);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPad::
    NativeTouchPadConfig___STATIC__nanoFrameworkHardwareEsp32EspNativeError__I4__U2(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        touch_pad_t pinNum = (touch_pad_t)stack.Arg0().NumericByRef().s4;
        uint16_t thresh = (uint16_t)stack.Arg1().NumericByRef().s2;
        esp_err_t err = touch_pad_config(pinNum, thresh);

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPad::
    NativeTouchPadRead___STATIC__U2__I4(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    uint16_t pinVal = 0;
    {
        touch_pad_t pinNum = (touch_pad_t)stack.Arg0().NumericByRef().s4;
        touch_pad_read(pinNum, &pinVal);
        // TODO:
        // esp_err_t err = touch_pad_read(pinNum, &pinVal);
        // if (err != ESP_OK)
        // {
        //     NANOCLR_SET_AND_LEAVE(CLR_E_INVALID_PARAMETER);
        // }

        // Return err to the managed application
        stack.SetResult_U2(pinVal);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPad::
    NativeTouchPadReadFiltered___STATIC__U2__I4(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    uint16_t pinVal = 0;
    {
        touch_pad_t pinNum = (touch_pad_t)stack.Arg0().NumericByRef().s4;
        touch_pad_read_filtered(pinNum, &pinVal);
        // TODO:
        // esp_err_t err = touch_pad_read_filtered(pinNum, &pinVal);
        // if (err != ESP_OK)
        // {
        //     NANOCLR_SET_AND_LEAVE(CLR_E_INVALID_PARAMETER);
        // }

        // Return err to the managed application
        stack.SetResult_U2(pinVal);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPad::
    NativeTouchPadSetThresh___STATIC__nanoFrameworkHardwareEsp32EspNativeError__I4__U2(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        touch_pad_t pinNum = (touch_pad_t)stack.Arg0().NumericByRef().s4;
        uint16_t thresh = (uint16_t)stack.Arg1().NumericByRef().s2;
        esp_err_t err = touch_pad_set_thresh(pinNum, thresh);

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}
