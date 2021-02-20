//
// Copyright (c) .NET Foundation and Contributors
// Portions Copyright (c) Microsoft Corporation.  All rights reserved.
// See LICENSE file in the project root for full license information.
//

#include "nanoFramework_hardware_esp32_native.h"

#include <string.h>
#include <nanoCLR_Hardware.h>
#include <targetPAL.h>

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadInit___STATIC__nanoFrameworkHardwareEsp32EspNativeError(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        esp_err_t err = touch_pad_init();

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadDeinit___STATIC__nanoFrameworkHardwareEsp32EspNativeError(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        esp_err_t err = touch_pad_deinit();

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadSetFsmMode___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32TouchFsmMode(
        CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        touch_fsm_mode_t mode = (touch_fsm_mode_t)stack.Arg0().NumericByRef().s4;
        esp_err_t err = touch_pad_set_fsm_mode(mode);

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadSetVoltage___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32TouchHighVolt__nanoFrameworkHardwareEsp32TouchLowVolt__nanoFrameworkHardwareEsp32TouchVoltAtten(
        CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        touch_high_volt_t refh = (touch_high_volt_t)stack.Arg0().NumericByRef().s4;
        touch_low_volt_t refl = (touch_low_volt_t)stack.Arg1().NumericByRef().s4;
        touch_volt_atten_t atten = (touch_volt_atten_t)stack.Arg2().NumericByRef().s4;

        esp_err_t err = touch_pad_set_voltage(refh, refl, atten);

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadSetTriggerMode___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32TouchTriggerMode(
        CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        touch_trigger_mode_t mode = (touch_trigger_mode_t)stack.Arg0().NumericByRef().s4;
        esp_err_t err = touch_pad_set_trigger_mode(mode);

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadFilterStart___STATIC__nanoFrameworkHardwareEsp32EspNativeError__U4(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        uint millis = (uint)stack.Arg0().NumericByRef().s4;
        esp_err_t err = touch_pad_filter_start(millis);

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadSetFilterPeriod___STATIC__nanoFrameworkHardwareEsp32EspNativeError__U4(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        int period = (touch_pad_t)stack.Arg0().NumericByRef().s4;
        esp_err_t err = touch_pad_set_filter_period(period);

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadFilterStop___STATIC__nanoFrameworkHardwareEsp32EspNativeError(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        esp_err_t err = touch_pad_filter_stop();

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadEnableInterrupts___STATIC__nanoFrameworkHardwareEsp32EspNativeError(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        esp_err_t err = touch_pad_intr_enable();

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadDisableInterrupts___STATIC__nanoFrameworkHardwareEsp32EspNativeError(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        esp_err_t err = touch_pad_intr_disable();

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadClearInterrupts___STATIC__nanoFrameworkHardwareEsp32EspNativeError(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {

        // TODO: why is "touch_pad_intr_clear" not defined?
        // esp_err_t err = touch_pad_intr_clear();

        // Return err to the managed application
        // stack.SetResult_I4((int)err);
        stack.SetResult_I4(ESP_OK);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadIsrRegister___STATIC__nanoFrameworkHardwareEsp32EspNativeError__SystemAction(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();

    // NOOP
    // TODO: add event interop

    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchPadIsrDeregister___STATIC__nanoFrameworkHardwareEsp32EspNativeError__SystemAction(
        CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();

    // NOOP
    // TODO: add event interop

    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchpadGetStatus___STATIC__U4(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        uint status = touch_pad_get_status();

        // Return err to the managed application
        stack.SetResult_I4((int)status);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeTouchpadClearStatus___STATIC__nanoFrameworkHardwareEsp32EspNativeError(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();
    {
        esp_err_t err = touch_pad_clear_status();

        // Return err to the managed application
        stack.SetResult_I4((int)err);
    }
    NANOCLR_NOCLEANUP_NOLABEL();
}

HRESULT Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController::
    NativeDispose___STATIC__VOID(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();

    // NOOP
    // TODO: figure out what goes here

    NANOCLR_NOCLEANUP_NOLABEL();
}
