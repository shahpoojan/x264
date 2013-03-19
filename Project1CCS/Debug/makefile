################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := D:/ti/ccsv5/tools/compiler/c6000_7.4.1

ORDERED_OBJS += \
$(GEN_CMDS__FLAG) \
"./x264.obj" \
"./slicetype_decision.obj" \
"./set1.obj" \
"./set.obj" \
"./rdo.obj" \
"./ratecontrol.obj" \
"./predict1.obj" \
"./pixel1.obj" \
"./me.obj" \
"./mc1.obj" \
"./matroska.obj" \
"./macroblock1.obj" \
"./macroblock.obj" \
"./getopt.obj" \
"./frame1.obj" \
"./eval.obj" \
"./encoder.obj" \
"./dm6446cfg_c.obj" \
"./dm6446cfg.obj" \
"./dct1.obj" \
"./csp1.obj" \
"./cpu1.obj" \
"./config1.obj" \
"./common1.obj" \
"./cavlc.obj" \
"./cabac1.obj" \
"./cabac.obj" \
"./analyse.obj" \
-l"libc.a" \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Project1.out

# Tool invocations
Project1.out: $(OBJS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C6000 Linker'
	"D:/ti/ccsv5/tools/compiler/c6000_7.4.1/bin/cl6x" -mv64+ --abi=coffabi -g --display_error_number --diag_warning=225 -z --stack_size=4000 -m"Project1.map" --heap_size=4000 -i"D:/ti/ccsv5/tools/compiler/c6000_7.4.1/lib" -i"D:/ti/ccsv5/tools/compiler/c6000_7.4.1/include" -i"D:/ti/bios_5_42_00_07/packages/ti/rtdx/lib/c6000" -i"D:/ti/bios_5_42_00_07/packages/ti/bios/lib" --reread_libs --warn_sections --display_error_number --rom_model -o "Project1.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(GEN_SRCS__QUOTED)$(GEN_MISC_FILES__QUOTED)$(C6000_EXECUTABLE_OUTPUTS__QUOTED)$(GEN_CMDS__QUOTED) "Project1.out"
	-$(RM) "analyse.pp" "cabac.pp" "cabac1.pp" "cavlc.pp" "common1.pp" "config1.pp" "cpu1.pp" "csp1.pp" "dct1.pp" "dm6446cfg_c.pp" "encoder.pp" "eval.pp" "frame1.pp" "getopt.pp" "macroblock.pp" "macroblock1.pp" "matroska.pp" "mc1.pp" "me.pp" "pixel1.pp" "predict1.pp" "ratecontrol.pp" "rdo.pp" "set.pp" "set1.pp" "slicetype_decision.pp" "x264.pp" 
	-$(RM) "dm6446cfg.pp" 
	-$(RM) "analyse.obj" "cabac.obj" "cabac1.obj" "cavlc.obj" "common1.obj" "config1.obj" "cpu1.obj" "csp1.obj" "dct1.obj" "dm6446cfg.obj" "dm6446cfg_c.obj" "encoder.obj" "eval.obj" "frame1.obj" "getopt.obj" "macroblock.obj" "macroblock1.obj" "matroska.obj" "mc1.obj" "me.obj" "pixel1.obj" "predict1.obj" "ratecontrol.obj" "rdo.obj" "set.obj" "set1.obj" "slicetype_decision.obj" "x264.obj" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
