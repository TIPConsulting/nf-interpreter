#
# Copyright (c) .NET Foundation and Contributors
# See LICENSE file in the project root for full license information.
#

if(NOT STM32_CHIP_TYPE)
    STM32_GET_CHIP_TYPE(${TARGET_CHIP} STM32_CHIP_TYPE)
    if(NOT STM32_CHIP_TYPE)
        message(FATAL_ERROR "Unknown chip: ${TARGET_CHIP}.")
    endif()
    message(STATUS "${TARGET_CHIP} is ${STM32_CHIP_TYPE} device")
endif()
string(TOLOWER ${STM32_CHIP_TYPE} STM32_CHIP_TYPE_LOWER)


# build path hints according to device series
if(STM32_SERIES STREQUAL "F0")
    set(RTXRTOS2_HAL_NAME irq_cm0.S)
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M0 -DCMSIS_device_header=ARMCM0.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM0/Include)
elseif(STM32_SERIES STREQUAL "F1")
    set(RTXRTOS2_HAL_NAME irq_cm0.S)
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M0 -DCMSIS_device_header=ARMCM0.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM0/Include)
elseif(STM32_SERIES STREQUAL "F2")
    set(RTXRTOS2_HAL_NAME irq_cm0.S)
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M0 -DCMSIS_device_header=ARMCM0.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM0/Include)
elseif(STM32_SERIES STREQUAL "F3")
    set(RTXRTOS2_HAL_NAME irq_cm3.S)
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M3 -DCMSIS_device_header=ARMCM3.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM3/Include)
elseif(STM32_SERIES STREQUAL "F4")
    set(RTXRTOS2_HAL_NAME irq_cm4f.S)    
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M4 -DCMSIS_device_header=ARMCM4.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM4/Include)
elseif(STM32_SERIES STREQUAL "F7")
    set(RTXRTOS2_HAL_NAME irq_cm4f.S)
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M7 -DCMSIS_device_header=ARMCM7.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM7/Include)
elseif(STM32_SERIES STREQUAL "L0")
    set(RTXRTOS2_HAL_NAME irq_cm0.S)
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M0 -DCMSIS_device_header=ARMCM0.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM0/Include)
elseif(STM32_SERIES STREQUAL "L1")
    set(RTXRTOS2_HAL_NAME irq_cm0.S)
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M0 -DCMSIS_device_header=ARMCM0.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM0/Include)
elseif(STM32_SERIES STREQUAL "L4")
    set(RTXRTOS2_HAL_NAME irq_cm4f.S)
    set(RTXRTOS2_COMPILE_OPTIONS -D__CORTEX_M4 -DCMSIS_device_header=ARMCM4.h)
    list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/Device/ARM/ARMCM0/Include)
endif()

# set include directories for RXT RTOS
list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/Core/Include)
list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/RTOS2/Include)
list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/RTOS2/RTX/Include)
list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/RTOS2/RTX/Include1)
list(APPEND RTXRTOS2_INCLUDE_DIRS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/RTOS2/RTX/Source)

set(RTXRTOS2_SRCS
    Events.c
    MemPool.c
    MsgQueue.c
    Mutex.c
    Semaphore.c
    Thread.c
    Timer.c

    rtx_delay.c
    rtx_evflags.c
    rtx_kernel.c
    rtx_memory.c
    rtx_mempool.c
    rtx_msgqueue.c
    rtx_mutex.c
    rtx_semaphore.c
    rtx_system.c
    rtx_thread.c
    rtx_timer.c
    user_svc.c
)

foreach(SRC_FILE ${RTXRTOS2_SRCS})
    set(RTXRTOS2_SRC_FILE SRC_FILE-NOTFOUND)
    find_file(RTXRTOS2_SRC_FILE ${SRC_FILE}
        PATHS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/RTOS2/RTX/Source ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/RTOS2/RTX/Template
        CMAKE_FIND_ROOT_PATH_BOTH
    )
    list(APPEND RTXRTOS2_SOURCES ${RTXRTOS2_SRC_FILE})
endforeach()

# find path for HAL_CMx file
set(RTXRTOS2_SRC_FILE SRC_FILE-NOTFOUND)
find_file(RTXRTOS2_SRC_FILE ${RTXRTOS2_HAL_NAME}
    PATHS PATHS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/RTOS2/RTX/Source/GCC
    CMAKE_FIND_ROOT_PATH_BOTH
)
list(APPEND RTXRTOS2_SOURCES ${RTXRTOS2_SRC_FILE})

# # find path for SVC_Table file
# set(RTXRTOS2_SRC_FILE SRC_FILE-NOTFOUND)
# find_file(RTXRTOS2_SRC_FILE SVC_Table.S
#     PATHS PATHS ${CMAKE_BINARY_DIR}/RTXRTOS_Source/CMSIS/RTOS/RTX/SRC/GCC
#     CMAKE_FIND_ROOT_PATH_BOTH
# )
# list(APPEND RTXRTOS2_SOURCES ${RTXRTOS2_SRC_FILE})

include(FindPackageHandleStandardArgs)

FIND_PACKAGE_HANDLE_STANDARD_ARGS(RTXRTOS2 DEFAULT_MSG RTXRTOS2_INCLUDE_DIRS RTXRTOS2_SOURCES)
