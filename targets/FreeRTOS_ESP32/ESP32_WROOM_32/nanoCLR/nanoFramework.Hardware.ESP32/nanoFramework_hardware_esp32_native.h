//
// Copyright (c) .NET Foundation and Contributors
// Portions Copyright (c) Microsoft Corporation.  All rights reserved.
// See LICENSE file in the project root for full license information.
//

#ifndef _NANOFRAMEWORK_HARDWARE_ESP32_NATIVE_H_
#define _NANOFRAMEWORK_HARDWARE_ESP32_NATIVE_H_

#include <nanoCLR_Interop.h>
#include <nanoCLR_Runtime.h>
#include <nanoCLR_Checks.h>
#include <corlib_native.h>

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Configuration
{
    NANOCLR_NATIVE_DECLARE(NativeSetPinFunction___STATIC__VOID__I4__I4);
    NANOCLR_NATIVE_DECLARE(NativeGetPinFunction___STATIC__I4__I4);

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResEventListener
{
    static const int FIELD__HighResTimers = 1;

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResTimer
{
    static const int FIELD_STATIC__s_eventListener = 0;

    static const int FIELD___timerHandle = 1;
    static const int FIELD___disposedValue = 2;
    static const int FIELD___syncLock = 3;
    static const int FIELD__OnHighResTimerExpired = 4;

    NANOCLR_NATIVE_DECLARE(NativeEspTimerCreate___I4);
    NANOCLR_NATIVE_DECLARE(NativeEspTimerDispose___VOID);
    NANOCLR_NATIVE_DECLARE(NativeStop___VOID);
    NANOCLR_NATIVE_DECLARE(NativeStartOneShot___VOID__U8);
    NANOCLR_NATIVE_DECLARE(NativeStartPeriodic___VOID__U8);
    NANOCLR_NATIVE_DECLARE(NativeGetCurrent___STATIC__U8);

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_HighResTimerEvent
{
    static const int FIELD__EventType = 1;
    static const int FIELD__TimerHandle = 2;

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Logging
{
    NANOCLR_NATIVE_DECLARE(NativeSetLogLevel___STATIC__VOID__STRING__I4);

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_Sleep
{
    NANOCLR_NATIVE_DECLARE(NativeEnableWakeupByTimer___STATIC__nanoFrameworkHardwareEsp32EspNativeError__U8);
    NANOCLR_NATIVE_DECLARE(
        NativeEnableWakeupByPin___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32SleepWakeupGpioPin__I4);
    NANOCLR_NATIVE_DECLARE(
        NativeEnableWakeupByMultiPins___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32SleepWakeupGpioPin__nanoFrameworkHardwareEsp32SleepWakeupMode);
    NANOCLR_NATIVE_DECLARE(NativeEnableWakeupByTouchPad___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeStartLightSleep___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeStartDeepSleep___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeGetWakeupCause___STATIC__nanoFrameworkHardwareEsp32SleepWakeupCause);
    NANOCLR_NATIVE_DECLARE(NativeGetWakeupGpioPin___STATIC__nanoFrameworkHardwareEsp32SleepWakeupGpioPin);
    NANOCLR_NATIVE_DECLARE(NativeGetWakeupTouchpad___STATIC__nanoFrameworkHardwareEsp32SleepTouchPad);

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadSystemConfig
{
    static const int FIELD___touchHighVolt = 1;
    static const int FIELD___touchLowVolt = 2;
    static const int FIELD___touchVoltAtten = 3;
    static const int FIELD___touchTriggerMode = 4;
    static const int FIELD___touchPadFilterTouchPeriod = 5;
    static const int FIELD___touchPadReadMode = 6;

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPad
{
    static const int FIELD_STATIC___gpioTouchPadArr = 1;

    static const int FIELD___eventLock = 1;
    static const int FIELD___gpioPinNumber = 2;
    static const int FIELD___touchPadIndex = 3;
    static const int FIELD___controller = 4;
    static const int FIELD___config = 5;
    static const int FIELD___touchpadTouchThreshhold = 6;
    static const int FIELD___valueChanged = 7;
    static const int FIELD___isDisposed = 8;

    NANOCLR_NATIVE_DECLARE(NativeTouchPadReadRawData___U2__I4);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadConfig___STATIC__nanoFrameworkHardwareEsp32EspNativeError__I4__U2);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadRead___STATIC__U2__I4);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadReadFiltered___STATIC__U2__I4);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadSetThresh___STATIC__nanoFrameworkHardwareEsp32EspNativeError__I4__U2);

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadConfig
{
    static const int FIELD___touchThreshNoUse = 1;
    static const int FIELD___pinSelectMode = 2;
    static const int FIELD___interruptThresholdValue = 3;

    //--//
};

struct Library_nanoFramework_hardware_esp32_native_nanoFramework_Hardware_Esp32_TouchPadController
{
    static const int FIELD___valueChangedInvoker = 1;
    static const int FIELD___pinOpenLock = 2;
    static const int FIELD___eventLock = 3;
    static const int FIELD___valueChanged = 4;
    static const int FIELD___config = 5;
    static const int FIELD___eventHandlerCount = 6;
    static const int FIELD___pinOpenState = 7;
    static const int FIELD___isDisposed = 8;

    NANOCLR_NATIVE_DECLARE(NativeTouchPadInit___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadDeinit___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadSetFsmMode___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32TouchFsmMode);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadSetVoltage___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32TouchHighVolt__nanoFrameworkHardwareEsp32TouchLowVolt__nanoFrameworkHardwareEsp32TouchVoltAtten);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadSetTriggerMode___STATIC__nanoFrameworkHardwareEsp32EspNativeError__nanoFrameworkHardwareEsp32TouchTriggerMode);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadFilterStart___STATIC__nanoFrameworkHardwareEsp32EspNativeError__U4);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadSetFilterPeriod___STATIC__nanoFrameworkHardwareEsp32EspNativeError__U4);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadFilterStop___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadEnableInterrupts___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadDisableInterrupts___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadClearInterrupts___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadIsrRegister___STATIC__nanoFrameworkHardwareEsp32EspNativeError__SystemAction);
    NANOCLR_NATIVE_DECLARE(NativeTouchPadIsrDeregister___STATIC__nanoFrameworkHardwareEsp32EspNativeError__SystemAction);
    NANOCLR_NATIVE_DECLARE(NativeTouchpadGetStatus___STATIC__U4);
    NANOCLR_NATIVE_DECLARE(NativeTouchpadClearStatus___STATIC__nanoFrameworkHardwareEsp32EspNativeError);
    NANOCLR_NATIVE_DECLARE(NativeDispose___STATIC__VOID);

    //--//

};

extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_nanoFramework_Hardware_Esp32;

#endif //_NANOFRAMEWORK_HARDWARE_ESP32_NATIVE_H_
