################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
Hardware\ HAL/hal_general.obj: ../Hardware\ HAL/hal_general.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/bin/cl430" -vmspx --data_model=restricted --opt_for_speed=0 --use_hw_mpy=F5 --include_path="C:/ti/ccs1281/ccs/ccs_base/msp430/include" --include_path="C:/Users/danie/Desktop/FH Joanneum/ECE3/ESI/Laboruebung_2" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/include" --advice:power=all --define=__MSP430F5335__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="Hardware HAL/hal_general.d_raw" --obj_directory="Hardware HAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Hardware\ HAL/hal_gpio.obj: ../Hardware\ HAL/hal_gpio.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/bin/cl430" -vmspx --data_model=restricted --opt_for_speed=0 --use_hw_mpy=F5 --include_path="C:/ti/ccs1281/ccs/ccs_base/msp430/include" --include_path="C:/Users/danie/Desktop/FH Joanneum/ECE3/ESI/Laboruebung_2" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/include" --advice:power=all --define=__MSP430F5335__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="Hardware HAL/hal_gpio.d_raw" --obj_directory="Hardware HAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Hardware\ HAL/hal_pmm.obj: ../Hardware\ HAL/hal_pmm.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/bin/cl430" -vmspx --data_model=restricted --opt_for_speed=0 --use_hw_mpy=F5 --include_path="C:/ti/ccs1281/ccs/ccs_base/msp430/include" --include_path="C:/Users/danie/Desktop/FH Joanneum/ECE3/ESI/Laboruebung_2" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/include" --advice:power=all --define=__MSP430F5335__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="Hardware HAL/hal_pmm.d_raw" --obj_directory="Hardware HAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Hardware\ HAL/hal_wdt.obj: ../Hardware\ HAL/hal_wdt.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/bin/cl430" -vmspx --data_model=restricted --opt_for_speed=0 --use_hw_mpy=F5 --include_path="C:/ti/ccs1281/ccs/ccs_base/msp430/include" --include_path="C:/Users/danie/Desktop/FH Joanneum/ECE3/ESI/Laboruebung_2" --include_path="C:/ti/ccs1281/ccs/tools/compiler/ti-cgt-msp430_21.6.1.LTS/include" --advice:power=all --define=__MSP430F5335__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --silicon_errata=CPU21 --silicon_errata=CPU22 --silicon_errata=CPU40 --preproc_with_compile --preproc_dependency="Hardware HAL/hal_wdt.d_raw" --obj_directory="Hardware HAL" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


