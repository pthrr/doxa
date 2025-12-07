EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Switch:SW_Push SW1
U 1 1 637FE159
P 3200 2500
F 0 "SW1" H 3200 2785 50  0000 C CNN
F 1 "SW_Push" H 3200 2694 50  0000 C CNN
F 2 "Button_Switch_Keyboard:SW_Cherry_MX_1.00u_PCB" H 3200 2700 50  0001 C CNN
F 3 "~" H 3200 2700 50  0001 C CNN
	1    3200 2500
	1    0    0    -1  
$EndComp
$Comp
L MCU_RaspberryPi_and_Boards:Pico U1
U 1 1 63802F56
P 8600 2650
F 0 "U1" H 8600 3865 50  0000 C CNN
F 1 "Pico" H 8600 3774 50  0000 C CNN
F 2 "MCU_RaspberryPi_and_Boards:RPi_Pico_SMD_TH" V 8600 2650 50  0001 C CNN
F 3 "" H 8600 2650 50  0001 C CNN
	1    8600 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7900 1700 4100 1700
Wire Wire Line
	4100 1700 4100 2500
Wire Wire Line
	4100 2500 3400 2500
$Comp
L pspice:DIODE D?
U 1 1 63807A49
P 2500 2500
F 0 "D?" H 2500 2765 50  0000 C CNN
F 1 "DIODE" H 2500 2674 50  0000 C CNN
F 2 "Diode_THT:D_DO-35_SOD27_P10.16mm_Horizontal" H 2500 2500 50  0001 C CNN
F 3 "~" H 2500 2500 50  0001 C CNN
	1    2500 2500
	-1   0    0    -1  
$EndComp
$EndSCHEMATC
