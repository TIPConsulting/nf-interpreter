#
# Copyright (c) .NET Foundation and Contributors
# See LICENSE file in the project root for full license information.
#

set(TARGET_FREERTOS_NANOCLR_INCLUDE_DIRS ${CMAKE_CURRENT_SOURCE_DIR} CACHE INTERNAL "make global")

# append nanoCLR source files
list(APPEND TARGET_FREERTOS_NANOCLR_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/CLR_Startup_Thread.c)

# append target PAL source files
list(APPEND TARGET_FREERTOS_NANOCLR_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/targetPAL_Events.cpp)
list(APPEND TARGET_FREERTOS_NANOCLR_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/targetPAL_Time.cpp)

# append nanoCRT
list(APPEND TARGET_FREERTOS_NANOCLR_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/nanoCRT.cpp)

# make vars global
set(TARGET_FREERTOS_NANOCLR_SOURCES ${TARGET_FREERTOS_NANOCLR_SOURCES} CACHE INTERNAL "make global")
set(TARGET_FREERTOS_NANOCLR_INCLUDE_DIRS ${TARGET_FREERTOS_NANOCLR_INCLUDE_DIRS} CACHE INTERNAL "make global")
