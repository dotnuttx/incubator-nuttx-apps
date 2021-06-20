############################################################################
# apps/interpreters/dotnet/Makefile
#
#   Copyright (C) 2020-2021 Matheus Castello All rights reserved.
#   Author: Matheus Castello <matheus@castello.eng.br>
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in
#    the documentation and/or other materials provided with the
#    distribution.
# 3. Neither the name NuttX nor the names of its contributors may be
#    used to endorse or promote products derived from this software
#    without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
# FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
# COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
# INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
# BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
# OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
# AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
# ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
############################################################################

include $(APPDIR)/Make.defs

# .NET nanoFramework

MAINSRC = ../../../nf-interpreter/targets-community/posix/main.cpp
#MAINSRC = test_main.cpp

# set flags
#CXXFLAGS += -fno-builtin -Wall -Wshadow -Wundef -fno-strict-aliasing -fno-strength-reduce -fomit-frame-pointer
#CXXFLAGS += -D_LIBCPP_BUILD_STATIC -D_LIBCPP_NO_EXCEPTIONS
CXXFLAGS += -fno-exceptions -fcheck-new -fno-rtti -pedantic -faligned-new
CXXFLAGS += -std=c++14 -Os -fdata-sections -ffunction-sections -Wl,--gc-sections -Wno-attributes -Wno-narrowing -fpermissive
#CXXFLAGS += -nostdinc++ -latomic
#CXXFLAGS += -std=c++14 -Os -Wno-attributes -Wno-narrowing -fpermissive
#CXXFLAGS += -DCONFIG_WCHAR_BUILTIN

#CFLAGS += -fno-builtin -Wall -Wshadow -Wundef -fno-strict-aliasing -fno-strength-reduce -fomit-frame-pointer
#CFLAGS += -D_LIBCPP_BUILD_STATIC -D_LIBCPP_NO_EXCEPTIONS
CFLAGS += -fno-exceptions -fcheck-new -fno-rtti -pedantic -faligned-new
CFLAGS += -std=c++14 -Os -fdata-sections -ffunction-sections -Wl,--gc-sections -Wno-attributes -Wno-narrowing -fpermissive
#CFLAGS += -nostdinc++ -latomic
#CFLAGS += -std=c++14 -Os -Wno-attributes -Wno-narrowing -fpermissive
#CFLAGS += -DCONFIG_WCHAR_BUILTIN

# set include directories
CXXFLAGS += -I../../../nf-interpreter/src/CLR/Include
CXXFLAGS += -I../../../nf-interpreter/src/HAL/Include
CXXFLAGS += -I../../../nf-interpreter/src/PAL/Include
CXXFLAGS += -I../../../nf-interpreter/src/CLR/CorLib
CXXFLAGS += -I../../../nf-interpreter/src/CLR/Core
CXXFLAGS += -I../../../nf-interpreter/src/CLR/Diagnostics
CXXFLAGS += -I../../../nf-interpreter/src/DeviceInterfaces/System.Net
CXXFLAGS += -I../../../nf-interpreter/src/Windows.Storage
CXXFLAGS += -I../../../nf-interpreter/src/nanoFramework.System.Text
CXXFLAGS += -I../../../nf-interpreter/src/CLR/System.Math
CXXFLAGS += -I../../../nf-interpreter/src/nanoFramework.System.Collections
CXXFLAGS += -I../../../nf-interpreter/src/nanoFramework.Runtime.Native
CXXFLAGS += -I../../../nf-interpreter/src/DeviceInterfaces/Networking.Sntp
CXXFLAGS += -I../../../nf-interpreter/src/nanoFramework.ResourceManager
CXXFLAGS += -I../../../nf-interpreter/src/nanoFramework.Runtime.Events
CXXFLAGS += -I../../../nf-interpreter/src/CLR/Helpers/Base64
CXXFLAGS += -I../../../nf-interpreter/src/CLR/Helpers/nanoprintf
CXXFLAGS += -I../../../nf-interpreter/src/System.Device.Gpio
CXXFLAGS += -I../../../nf-interpreter/targets-community/posix/include

CFLAGS += -I../../../nf-interpreter/src/CLR/Include
CFLAGS += -I../../../nf-interpreter/src/HAL/Include
CFLAGS += -I../../../nf-interpreter/src/PAL/Include
CFLAGS += -I../../../nf-interpreter/src/CLR/CorLib
CFLAGS += -I../../../nf-interpreter/src/CLR/Core
CFLAGS += -I../../../nf-interpreter/src/CLR/Diagnostics
CFLAGS += -I../../../nf-interpreter/src/DeviceInterfaces/System.Net
CFLAGS += -I../../../nf-interpreter/src/Windows.Storage
CFLAGS += -I../../../nf-interpreter/src/nanoFramework.System.Text
CFLAGS += -I../../../nf-interpreter/src/CLR/System.Math
CFLAGS += -I../../../nf-interpreter/src/nanoFramework.System.Collections
CFLAGS += -I../../../nf-interpreter/src/nanoFramework.Runtime.Native
CFLAGS += -I../../../nf-interpreter/src/DeviceInterfaces/Networking.Sntp
CFLAGS += -I../../../nf-interpreter/src/nanoFramework.ResourceManager
CFLAGS += -I../../../nf-interpreter/src/nanoFramework.Runtime.Events
CFLAGS += -I../../../nf-interpreter/src/CLR/Helpers/Base64
CFLAGS += -I../../../nf-interpreter/src/CLR/Helpers/nanoprintf
CFLAGS += -I../../../nf-interpreter/targets-community/posix/include

# set nanoFramework defines
CXXFLAGS += -D__nuttx__
#CXXFLAGS += -DDEBUG
CXXFLAGS += -DNANOCLR_LIGHT_MATH=TRUE
CXXFLAGS += -DNANOCLR_REFLECTION=TRUE
CXXFLAGS += -DNANOCLR_SYSTEM_COLLECTIONS=TRUE
CXXFLAGS += -D_LIB
CXXFLAGS += -DVERSION_MAJOR=2
CXXFLAGS += -DVERSION_MINOR=6
CXXFLAGS += -DVERSION_BUILD=4
CXXFLAGS += -DVERSION_REVISION=5
CXXFLAGS += -DVERSION_STRING='"${NF_VERSION}"'
CXXFLAGS += -DOEMSYSTEMINFOSTRING='"nanoCLR running on ${NF_BOARD_TARGET} ${NF_PLATFORM_TARGET_STRING}"'
CXXFLAGS += -DTARGETNAMESTRING='"${NF_BOARD_TARGET}"'
CXXFLAGS += -DTARGETINFOSTRING='"${NF_PLATFORM_TARGET_STRING}"'
CXXFLAGS += -DPLATFORMNAMESTRING='"${NF_PLATFORM_TARGET}"'
CXXFLAGS += -DHAL_REDUCESIZE=TRUE
CXXFLAGS += -DBUILD_RTM
CXXFLAGS += -D${NF_BOARD_CONFIG}

CFLAGS += -D__nuttx__
#CFLAGS += -DDEBUG
CFLAGS += -DNANOCLR_LIGHT_MATH=TRUE
CFLAGS += -DNANOCLR_REFLECTION=TRUE
CFLAGS += -DNANOCLR_SYSTEM_COLLECTIONS=TRUE
CFLAGS += -D_LIB
CFLAGS += -DVERSION_MAJOR=0
CFLAGS += -DVERSION_MINOR=0
CFLAGS += -DVERSION_BUILD=0
CFLAGS += -DVERSION_REVISION=0
CFLAGS += -DVERSION_STRING='"0.0.0.0"'
CFLAGS += -DOEMSYSTEMINFOSTRING='"Nuttx PLAYGROUND APP"'
CFLAGS += -DTARGETNAMESTRING='"CLR_POSIX"'
CFLAGS += -DTARGETINFOSTRING='"CLR_POSIX"'
CFLAGS += -DPLATFORMNAMESTRING='"POSIX"'
CFLAGS += -DHAL_REDUCESIZE=TRUE
CFLAGS += -DBUILD_RTM
CFLAGS += -DBOARD_PI_PICO

# source code

# STDAFX
CXXSRCS = ../../../nf-interpreter/targets-community/posix/utils/stdafx.cpp

# STARTUP
CXXSRCS += ../../../nf-interpreter/src/CLR/Startup/CLRStartup.cpp

# BASE64
CSRCS += ../../../nf-interpreter/src/CLR/Helpers/Base64/base64.c

# NANOPRINTF
CSRCS += ../../../nf-interpreter/src/CLR/Helpers/nanoprintf/nanoprintf.c

# NANO_EVENTS
CXXSRCS += ../../../nf-interpreter/src/nanoFramework.Runtime.Events/nf_rt_events_native.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Events/nf_rt_events_native_nanoFramework_Runtime_Events_EventSink.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Events/nf_rt_events_native_nanoFramework_Runtime_Events_NativeEventDispatcher.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Events/nf_rt_events_native_nanoFramework_Runtime_Events_WeakDelegate.cpp

# NANO_PAL
CXXSRCS += ../../../nf-interpreter/src/PAL/AsyncProcCall/AsyncCompletions.cpp \
        ../../../nf-interpreter/src/PAL/AsyncProcCall/AsyncContinuations.cpp \
        ../../../nf-interpreter/targets-community/posix/target/PAL/blockstorageList_stubs.cpp \
        ../../../nf-interpreter/targets-community/posix/target/PAL/COMDirector_stubs.cpp \
        ../../../nf-interpreter/targets-community/posix/target/PAL/ConfigHelper_stubs.cpp \
        ../../../nf-interpreter/src/PAL/Double/nanoPAL_NativeDouble.cpp \
        ../../../nf-interpreter/src/CLR/Core/NativeEventDispatcher/NativeEventDispatcher.cpp \
        ../../../nf-interpreter/targets-community/posix/target/PAL/Target_BlockStorage.cpp \
        ../../../nf-interpreter/targets-community/posix/target/PAL/time_stubs.cpp \
        ../../../nf-interpreter/targets-community/posix/target/PAL/Watchdog_stubs.cpp \
        ../../../nf-interpreter/targets-community/posix/target/PAL/CPU_Gpio_Nuttx.cpp

# NANO_CLR
CSRCS += ../../../nf-interpreter/src/HAL/nanoHAL_Capabilites.c

CXXSRCS += ../../../nf-interpreter/targets-community/posix/target/Various.cpp \
        ../../../nf-interpreter/targets-community/posix/utils/TimerManager.cpp \
        ../../../nf-interpreter/targets-community/posix/target/WatchDog.cpp \
        ../../../nf-interpreter/targets-community/posix/target/targetRandom.cpp \
        ../../../nf-interpreter/targets-community/posix/target/targetPAL_Time.cpp \
        ../../../nf-interpreter/targets-community/posix/target/targetPAL_Events.cpp \
        ../../../nf-interpreter/targets-community/posix/target/targetHAL_Time.cpp \
        ../../../nf-interpreter/targets-community/posix/target/stdafx.cpp \
        ../../../nf-interpreter/targets-community/posix/target/platform_heap.cpp \
        ../../../nf-interpreter/targets-community/posix/target/ParseOptions_Win32.cpp \
        ../../../nf-interpreter/targets-community/posix/target/nanoHAL_Time.cpp \
        ../../../nf-interpreter/targets-community/posix/target/Memory.cpp \
        ../../../nf-interpreter/targets-community/posix/target/CLRStartup.cpp \
        ../../../nf-interpreter/targets-community/posix/target/FileStore_Win32.cpp \
        ../../../nf-interpreter/targets-community/posix/target/Generated/CLR_RT_InteropAssembliesTable.cpp

# COR_LIB
CXXSRCS += ../../../nf-interpreter/src/CLR/CorLib/corlib_native.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_Binder.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_AppDomain.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_ConstructorInfo.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Array.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_FieldInfo.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Attribute.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_MemberInfo.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_BitConverter.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_MethodBase.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Collections_ArrayList.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_PropertyInfo.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Convert.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_RuntimeFieldInfo.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_DateTime.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_RuntimeMethodInfo.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Delegate.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_RuntimeType.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Diagnostics_Debug.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Runtime_CompilerServices_RuntimeHelpers.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Diagnostics_Debugger.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Runtime_Remoting_RemotingServices.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Double.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_String.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Enum.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Threading_AutoResetEvent.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Exception.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Threading_Interlocked.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_GC.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Threading_ManualResetEvent.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Globalization_CultureInfo.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Threading_Monitor.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Globalization_DateTimeFormat.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Threading_SpinWait.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Guid.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Threading_Thread.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_MarshalByRefObject.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Threading_Timer.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_MathInternal.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Threading_WaitHandle.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_MulticastDelegate.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_TimeSpan.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Number.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Type.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Object.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_ValueType.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Random.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_WeakReference.cpp \
		../../../nf-interpreter/src/CLR/CorLib/corlib_native_System_Reflection_Assembly.cpp

# STUBS
CXXSRCS += ../../../nf-interpreter/src/CLR/Core/Serialization/BinaryFormatter_stub.cpp \
        ../../../nf-interpreter/src/CLR/Core/RPC/RPC_stub.cpp \
        ../../../nf-interpreter/src/CLR/Core/NativeEventDispatcher/NativeEventDispatcher_stub.cpp \
        ../../../nf-interpreter/src/CLR/Messaging/Messaging_stub.cpp \
        ../../../nf-interpreter/src/CLR/Core/InterruptHandler/InterruptHandler_stub.cpp \
        ../../../nf-interpreter/src/CLR/Core/Hardware/Hardware_stub.cpp \
        ../../../nf-interpreter/src/CLR/Debugger/Debugger_stub.cpp \
        ../../../nf-interpreter/src/PAL/Profiler/nanoPAL_PerformanceCounters_stubs.cpp

# CORE
CXXSRCS += ../../../nf-interpreter/src/CLR/Core/Cache.cpp \
        ../../../nf-interpreter/src/CLR/Core/Checks.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_DblLinkedList.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Array.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_ArrayList.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_BinaryBlob.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Delegate.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Delegate_List.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Finalizer.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Lock.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_LockRequest.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Node.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Queue.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Stack.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_String.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_Timer.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapBlock_WaitForObject.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_HeapCluster.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_Interop.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_Memory.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_ObjectToEvent_Destination.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_ObjectToEvent_Source.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_RuntimeMemory.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_StackFrame.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_SystemAssembliesTable.cpp \
        ../../../nf-interpreter/src/CLR/Core/CLR_RT_UnicodeHelper.cpp \
        ../../../nf-interpreter/src/CLR/Core/Core.cpp \
        ../../../nf-interpreter/src/CLR/Core/Execution.cpp \
        ../../../nf-interpreter/src/CLR/Core/GarbageCollector.cpp \
        ../../../nf-interpreter/src/CLR/Core/GarbageCollector_Compaction.cpp \
        ../../../nf-interpreter/src/CLR/Core/GarbageCollector_ComputeReachabilityGraph.cpp \
        ../../../nf-interpreter/src/CLR/Core/Interpreter.cpp \
        ../../../nf-interpreter/src/CLR/Core/Streams.cpp \
        ../../../nf-interpreter/src/CLR/Core/StringTable.cpp \
        ../../../nf-interpreter/src/CLR/Core/StringTableData.cpp \
        ../../../nf-interpreter/src/CLR/Core/Thread.cpp \
        ../../../nf-interpreter/src/CLR/Core/TypeSystem.cpp \
        ../../../nf-interpreter/src/CLR/Core/TypeSystemLookup.cpp \
        ../../../nf-interpreter/src/CLR/Core/Various.cpp

# FEATURES
CSRCS += ../../../nf-interpreter/src/CLR/WireProtocol/WireProtocol_MonitorCommands.c \
        ../../../nf-interpreter/src/CLR/WireProtocol/WireProtocol_Message.c \
        ../../../nf-interpreter/src/CLR/WireProtocol/WireProtocol_HAL_Interface.c \
        ../../../nf-interpreter/src/CLR/WireProtocol/WireProtocol_App_Interface.c

CXXSRCS += ../../../nf-interpreter/src/CLR/WireProtocol/targetHAL_time.cpp \
        ../../../nf-interpreter/src/CLR/Core/Serialization/BinaryFormatter.cpp \
        ../../../nf-interpreter/src/CLR/Core/RPC/CLR_RT_HeapBlock_EndPoint.cpp \
        ../../../nf-interpreter/src/CLR/Messaging/Messaging.cpp \
        ../../../nf-interpreter/src/CLR/Core/InterruptHandler/InterruptHandler.cpp \
        ../../../nf-interpreter/src/CLR/Core/Hardware/Hardware.cpp \
        ../../../nf-interpreter/src/CLR/Diagnostics/Info.cpp \
        ../../../nf-interpreter/src/CLR/Diagnostics/Profile.cpp \
        ../../../nf-interpreter/src/CLR/Diagnostics/Profiler.cpp \
        ../../../nf-interpreter/src/CLR/Debugger/Debugger.cpp \
        ../../../nf-interpreter/src/CLR/Debugger/Debugger_minimal.cpp

# ASSEMBLIES
CXXSRCS += ../../../nf-interpreter/src/nanoFramework.System.Text/nf_system_text_System_Text_UTF8Decoder.cpp \
        ../../../nf-interpreter/src/nanoFramework.System.Text/nf_system_text_System_Text_UTF8Encoding.cpp \
        ../../../nf-interpreter/src/nanoFramework.System.Text/nf_system_text.cpp \
        ../../../nf-interpreter/src/CLR/System.Math/nf_native_system_math_System_Math.cpp \
        ../../../nf-interpreter/src/CLR/System.Math/nf_native_system_math.cpp \
        ../../../nf-interpreter/src/nanoFramework.System.Collections/nf_system_collections.cpp \
        ../../../nf-interpreter/src/nanoFramework.System.Collections/nf_system_collections_System_Collections_Queue.cpp \
        ../../../nf-interpreter/src/nanoFramework.System.Collections/nf_system_collections_System_Collections_Stack.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Native/nf_rt_native.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Native/nf_rt_native_nanoFramework_Runtime_Hardware_SystemInfo.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Native/nf_rt_native_nanoFramework_Runtime_Native_ExecutionConstraint.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Native/nf_rt_native_nanoFramework_Runtime_Native_GC.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Native/nf_rt_native_nanoFramework_Runtime_Native_Power.cpp \
        ../../../nf-interpreter/src/nanoFramework.Runtime.Native/nf_rt_native_nanoFramework_Runtime_Native_Rtc_stubs.cpp \
        ../../../nf-interpreter/src/nanoFramework.ResourceManager/nf_system_resourcemanager.cpp \
        ../../../nf-interpreter/src/nanoFramework.ResourceManager/nf_system_resourcemanager_nanoFramework_Runtime_Native_ResourceUtility.cpp \
        ../../../nf-interpreter/src/nanoFramework.ResourceManager/nf_system_resourcemanager_System_Resources_ResourceManager.cpp \
        ../../../nf-interpreter/src/System.Device.Gpio/sys_dev_gpio_native.cpp \
        ../../../nf-interpreter/src/System.Device.Gpio/sys_dev_gpio_native_System_Device_Gpio_GpioPin.cpp \
        ../../../nf-interpreter/src/System.Device.Gpio/sys_dev_gpio_native_System_Device_Gpio_GpioController.cpp

# UTILS
CXXSRCS += ../../../nf-interpreter/targets-community/posix/utils/utils.cpp

PROGNAME = dotnet
PRIORITY = $(CONFIG_DOTNET_PRIORITY)
STACKSIZE = $(CONFIG_DOTNET_STACKSIZE)
MODULE = $(CONFIG_DOTNET)

include $(APPDIR)/Application.mk
