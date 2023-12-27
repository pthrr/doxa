template <unsigned int zero = 0>
constexpr unsigned int *zeroVal = reinterpret_cast<unsigned int *>(zero);

#define __FIELD(_FieldName, _bitOffset, _bitMask, _address)                          \
struct _FieldName                                                                    \
{                                                                                    \
    constexpr static inline unsigned int bitOffset() { return _bitOffset; }          \
    constexpr static inline unsigned int bitMask() { return _bitMask; }              \
    constexpr static inline unsigned int *address() { return zeroVal<> + _address; } \
};

namespace XIP_CTRL{
    namespace CTRL{
        __FIELD(POWER_DOWN, 0, 0, 0x14000000)
        __FIELD(ERR_BADWRITE, 0, 0, 0x14000000)
        __FIELD(EN, 0, 0, 0x14000000)
    }
    namespace FLUSH{
        __FIELD(FLUSH, 0, 0, 0x14000004)
    }
    namespace STAT{
        __FIELD(FIFO_FULL, 0, 0, 0x14000008)
        __FIELD(FIFO_EMPTY, 0, 0, 0x14000008)
        __FIELD(FLUSH_READY, 0, 0, 0x14000008)
    }
    namespace CTR_HIT{
    }
    namespace CTR_ACC{
    }
    namespace STREAM_ADDR{
        __FIELD(STREAM_ADDR, 0, 0, 0x14000014)
    }
    namespace STREAM_CTR{
        __FIELD(STREAM_CTR, 0, 0, 0x14000018)
    }
    namespace STREAM_FIFO{
    }
}

namespace XIP_SSI{
    namespace CTRLR0{
        __FIELD(SSTE, 0, 0, 0x18000000)
        __FIELD(SPI_FRF, 0, 0, 0x18000000)
        __FIELD(DFS_32, 0, 0, 0x18000000)
        __FIELD(CFS, 0, 0, 0x18000000)
        __FIELD(SRL, 0, 0, 0x18000000)
        __FIELD(SLV_OE, 0, 0, 0x18000000)
        __FIELD(TMOD, 0, 0, 0x18000000)
        __FIELD(SCPOL, 0, 0, 0x18000000)
        __FIELD(SCPH, 0, 0, 0x18000000)
        __FIELD(FRF, 0, 0, 0x18000000)
        __FIELD(DFS, 0, 0, 0x18000000)
    }
    namespace CTRLR1{
        __FIELD(NDF, 0, 0, 0x18000004)
    }
    namespace SSIENR{
        __FIELD(SSI_EN, 0, 0, 0x18000008)
    }
    namespace MWCR{
        __FIELD(MHS, 0, 0, 0x1800000c)
        __FIELD(MDD, 0, 0, 0x1800000c)
        __FIELD(MWMOD, 0, 0, 0x1800000c)
    }
    namespace SER{
        __FIELD(SER, 0, 0, 0x18000010)
    }
    namespace BAUDR{
        __FIELD(SCKDV, 0, 0, 0x18000014)
    }
    namespace TXFTLR{
        __FIELD(TFT, 0, 0, 0x18000018)
    }
    namespace RXFTLR{
        __FIELD(RFT, 0, 0, 0x1800001c)
    }
    namespace TXFLR{
        __FIELD(TFTFL, 0, 0, 0x18000020)
    }
    namespace RXFLR{
        __FIELD(RXTFL, 0, 0, 0x18000024)
    }
    namespace SR{
        __FIELD(DCOL, 0, 0, 0x18000028)
        __FIELD(TXE, 0, 0, 0x18000028)
        __FIELD(RFF, 0, 0, 0x18000028)
        __FIELD(RFNE, 0, 0, 0x18000028)
        __FIELD(TFE, 0, 0, 0x18000028)
        __FIELD(TFNF, 0, 0, 0x18000028)
        __FIELD(BUSY, 0, 0, 0x18000028)
    }
    namespace IMR{
        __FIELD(MSTIM, 0, 0, 0x1800002c)
        __FIELD(RXFIM, 0, 0, 0x1800002c)
        __FIELD(RXOIM, 0, 0, 0x1800002c)
        __FIELD(RXUIM, 0, 0, 0x1800002c)
        __FIELD(TXOIM, 0, 0, 0x1800002c)
        __FIELD(TXEIM, 0, 0, 0x1800002c)
    }
    namespace ISR{
        __FIELD(MSTIS, 0, 0, 0x18000030)
        __FIELD(RXFIS, 0, 0, 0x18000030)
        __FIELD(RXOIS, 0, 0, 0x18000030)
        __FIELD(RXUIS, 0, 0, 0x18000030)
        __FIELD(TXOIS, 0, 0, 0x18000030)
        __FIELD(TXEIS, 0, 0, 0x18000030)
    }
    namespace RISR{
        __FIELD(MSTIR, 0, 0, 0x18000034)
        __FIELD(RXFIR, 0, 0, 0x18000034)
        __FIELD(RXOIR, 0, 0, 0x18000034)
        __FIELD(RXUIR, 0, 0, 0x18000034)
        __FIELD(TXOIR, 0, 0, 0x18000034)
        __FIELD(TXEIR, 0, 0, 0x18000034)
    }
    namespace TXOICR{
        __FIELD(TXOICR, 0, 0, 0x18000038)
    }
    namespace RXOICR{
        __FIELD(RXOICR, 0, 0, 0x1800003c)
    }
    namespace RXUICR{
        __FIELD(RXUICR, 0, 0, 0x18000040)
    }
    namespace MSTICR{
        __FIELD(MSTICR, 0, 0, 0x18000044)
    }
    namespace ICR{
        __FIELD(ICR, 0, 0, 0x18000048)
    }
    namespace DMACR{
        __FIELD(TDMAE, 0, 0, 0x1800004c)
        __FIELD(RDMAE, 0, 0, 0x1800004c)
    }
    namespace DMATDLR{
        __FIELD(DMATDL, 0, 0, 0x18000050)
    }
    namespace DMARDLR{
        __FIELD(DMARDL, 0, 0, 0x18000054)
    }
    namespace IDR{
        __FIELD(IDCODE, 0, 0, 0x18000058)
    }
    namespace SSI_VERSION_ID{
        __FIELD(SSI_COMP_VERSION, 0, 0, 0x1800005c)
    }
    namespace DR0{
        __FIELD(DR, 0, 0, 0x18000060)
    }
    namespace RX_SAMPLE_DLY{
        __FIELD(RSD, 0, 0, 0x180000f0)
    }
    namespace SPI_CTRLR0{
        __FIELD(XIP_CMD, 0, 0, 0x180000f4)
        __FIELD(SPI_RXDS_EN, 0, 0, 0x180000f4)
        __FIELD(INST_DDR_EN, 0, 0, 0x180000f4)
        __FIELD(SPI_DDR_EN, 0, 0, 0x180000f4)
        __FIELD(WAIT_CYCLES, 0, 0, 0x180000f4)
        __FIELD(INST_L, 0, 0, 0x180000f4)
        __FIELD(ADDR_L, 0, 0, 0x180000f4)
        __FIELD(TRANS_TYPE, 0, 0, 0x180000f4)
    }
    namespace TXD_DRIVE_EDGE{
        __FIELD(TDE, 0, 0, 0x180000f8)
    }
}

namespace SYSINFO{
    namespace CHIP_ID{
        __FIELD(REVISION, 0, 0, 0x40000000)
        __FIELD(PART, 0, 0, 0x40000000)
        __FIELD(MANUFACTURER, 0, 0, 0x40000000)
    }
    namespace PLATFORM{
        __FIELD(ASIC, 0, 0, 0x40000004)
        __FIELD(FPGA, 0, 0, 0x40000004)
    }
    namespace GITREF_RP2040{
    }
}

namespace SYSCFG{
    namespace PROC0_NMI_MASK{
    }
    namespace PROC1_NMI_MASK{
    }
    namespace PROC_CONFIG{
        __FIELD(PROC1_DAP_INSTID, 0, 0, 0x40004008)
        __FIELD(PROC0_DAP_INSTID, 0, 0, 0x40004008)
        __FIELD(PROC1_HALTED, 0, 0, 0x40004008)
        __FIELD(PROC0_HALTED, 0, 0, 0x40004008)
    }
    namespace PROC_IN_SYNC_BYPASS{
        __FIELD(PROC_IN_SYNC_BYPASS, 0, 0, 0x4000400c)
    }
    namespace PROC_IN_SYNC_BYPASS_HI{
        __FIELD(PROC_IN_SYNC_BYPASS_HI, 0, 0, 0x40004010)
    }
    namespace DBGFORCE{
        __FIELD(PROC1_ATTACH, 0, 0, 0x40004014)
        __FIELD(PROC1_SWCLK, 0, 0, 0x40004014)
        __FIELD(PROC1_SWDI, 0, 0, 0x40004014)
        __FIELD(PROC1_SWDO, 0, 0, 0x40004014)
        __FIELD(PROC0_ATTACH, 0, 0, 0x40004014)
        __FIELD(PROC0_SWCLK, 0, 0, 0x40004014)
        __FIELD(PROC0_SWDI, 0, 0, 0x40004014)
        __FIELD(PROC0_SWDO, 0, 0, 0x40004014)
    }
    namespace MEMPOWERDOWN{
        __FIELD(ROM, 0, 0, 0x40004018)
        __FIELD(USB, 0, 0, 0x40004018)
        __FIELD(SRAM5, 0, 0, 0x40004018)
        __FIELD(SRAM4, 0, 0, 0x40004018)
        __FIELD(SRAM3, 0, 0, 0x40004018)
        __FIELD(SRAM2, 0, 0, 0x40004018)
        __FIELD(SRAM1, 0, 0, 0x40004018)
        __FIELD(SRAM0, 0, 0, 0x40004018)
    }
}

namespace CLOCKS{
    namespace CLK_GPOUT0_CTRL{
        __FIELD(NUDGE, 0, 0, 0x40008000)
        __FIELD(PHASE, 0, 0, 0x40008000)
        __FIELD(DC50, 0, 0, 0x40008000)
        __FIELD(ENABLE, 0, 0, 0x40008000)
        __FIELD(KILL, 0, 0, 0x40008000)
        __FIELD(AUXSRC, 0, 0, 0x40008000)
    }
    namespace CLK_GPOUT0_DIV{
        __FIELD(INT, 0, 0, 0x40008004)
        __FIELD(FRAC, 0, 0, 0x40008004)
    }
    namespace CLK_GPOUT0_SELECTED{
    }
    namespace CLK_GPOUT1_CTRL{
        __FIELD(NUDGE, 0, 0, 0x4000800c)
        __FIELD(PHASE, 0, 0, 0x4000800c)
        __FIELD(DC50, 0, 0, 0x4000800c)
        __FIELD(ENABLE, 0, 0, 0x4000800c)
        __FIELD(KILL, 0, 0, 0x4000800c)
        __FIELD(AUXSRC, 0, 0, 0x4000800c)
    }
    namespace CLK_GPOUT1_DIV{
        __FIELD(INT, 0, 0, 0x40008010)
        __FIELD(FRAC, 0, 0, 0x40008010)
    }
    namespace CLK_GPOUT1_SELECTED{
    }
    namespace CLK_GPOUT2_CTRL{
        __FIELD(NUDGE, 0, 0, 0x40008018)
        __FIELD(PHASE, 0, 0, 0x40008018)
        __FIELD(DC50, 0, 0, 0x40008018)
        __FIELD(ENABLE, 0, 0, 0x40008018)
        __FIELD(KILL, 0, 0, 0x40008018)
        __FIELD(AUXSRC, 0, 0, 0x40008018)
    }
    namespace CLK_GPOUT2_DIV{
        __FIELD(INT, 0, 0, 0x4000801c)
        __FIELD(FRAC, 0, 0, 0x4000801c)
    }
    namespace CLK_GPOUT2_SELECTED{
    }
    namespace CLK_GPOUT3_CTRL{
        __FIELD(NUDGE, 0, 0, 0x40008024)
        __FIELD(PHASE, 0, 0, 0x40008024)
        __FIELD(DC50, 0, 0, 0x40008024)
        __FIELD(ENABLE, 0, 0, 0x40008024)
        __FIELD(KILL, 0, 0, 0x40008024)
        __FIELD(AUXSRC, 0, 0, 0x40008024)
    }
    namespace CLK_GPOUT3_DIV{
        __FIELD(INT, 0, 0, 0x40008028)
        __FIELD(FRAC, 0, 0, 0x40008028)
    }
    namespace CLK_GPOUT3_SELECTED{
    }
    namespace CLK_REF_CTRL{
        __FIELD(AUXSRC, 0, 0, 0x40008030)
        __FIELD(SRC, 0, 0, 0x40008030)
    }
    namespace CLK_REF_DIV{
        __FIELD(INT, 0, 0, 0x40008034)
    }
    namespace CLK_REF_SELECTED{
    }
    namespace CLK_SYS_CTRL{
        __FIELD(AUXSRC, 0, 0, 0x4000803c)
        __FIELD(SRC, 0, 0, 0x4000803c)
    }
    namespace CLK_SYS_DIV{
        __FIELD(INT, 0, 0, 0x40008040)
        __FIELD(FRAC, 0, 0, 0x40008040)
    }
    namespace CLK_SYS_SELECTED{
    }
    namespace CLK_PERI_CTRL{
        __FIELD(ENABLE, 0, 0, 0x40008048)
        __FIELD(KILL, 0, 0, 0x40008048)
        __FIELD(AUXSRC, 0, 0, 0x40008048)
    }
    namespace CLK_PERI_SELECTED{
    }
    namespace CLK_USB_CTRL{
        __FIELD(NUDGE, 0, 0, 0x40008054)
        __FIELD(PHASE, 0, 0, 0x40008054)
        __FIELD(ENABLE, 0, 0, 0x40008054)
        __FIELD(KILL, 0, 0, 0x40008054)
        __FIELD(AUXSRC, 0, 0, 0x40008054)
    }
    namespace CLK_USB_DIV{
        __FIELD(INT, 0, 0, 0x40008058)
    }
    namespace CLK_USB_SELECTED{
    }
    namespace CLK_ADC_CTRL{
        __FIELD(NUDGE, 0, 0, 0x40008060)
        __FIELD(PHASE, 0, 0, 0x40008060)
        __FIELD(ENABLE, 0, 0, 0x40008060)
        __FIELD(KILL, 0, 0, 0x40008060)
        __FIELD(AUXSRC, 0, 0, 0x40008060)
    }
    namespace CLK_ADC_DIV{
        __FIELD(INT, 0, 0, 0x40008064)
    }
    namespace CLK_ADC_SELECTED{
    }
    namespace CLK_RTC_CTRL{
        __FIELD(NUDGE, 0, 0, 0x4000806c)
        __FIELD(PHASE, 0, 0, 0x4000806c)
        __FIELD(ENABLE, 0, 0, 0x4000806c)
        __FIELD(KILL, 0, 0, 0x4000806c)
        __FIELD(AUXSRC, 0, 0, 0x4000806c)
    }
    namespace CLK_RTC_DIV{
        __FIELD(INT, 0, 0, 0x40008070)
        __FIELD(FRAC, 0, 0, 0x40008070)
    }
    namespace CLK_RTC_SELECTED{
    }
    namespace CLK_SYS_RESUS_CTRL{
        __FIELD(CLEAR, 0, 0, 0x40008078)
        __FIELD(FRCE, 0, 0, 0x40008078)
        __FIELD(ENABLE, 0, 0, 0x40008078)
        __FIELD(TIMEOUT, 0, 0, 0x40008078)
    }
    namespace CLK_SYS_RESUS_STATUS{
        __FIELD(RESUSSED, 0, 0, 0x4000807c)
    }
    namespace FC0_REF_KHZ{
        __FIELD(FC0_REF_KHZ, 0, 0, 0x40008080)
    }
    namespace FC0_MIN_KHZ{
        __FIELD(FC0_MIN_KHZ, 0, 0, 0x40008084)
    }
    namespace FC0_MAX_KHZ{
        __FIELD(FC0_MAX_KHZ, 0, 0, 0x40008088)
    }
    namespace FC0_DELAY{
        __FIELD(FC0_DELAY, 0, 0, 0x4000808c)
    }
    namespace FC0_INTERVAL{
        __FIELD(FC0_INTERVAL, 0, 0, 0x40008090)
    }
    namespace FC0_SRC{
        __FIELD(FC0_SRC, 0, 0, 0x40008094)
    }
    namespace FC0_STATUS{
        __FIELD(DIED, 0, 0, 0x40008098)
        __FIELD(FAST, 0, 0, 0x40008098)
        __FIELD(SLOW, 0, 0, 0x40008098)
        __FIELD(FAIL, 0, 0, 0x40008098)
        __FIELD(WAITING, 0, 0, 0x40008098)
        __FIELD(RUNNING, 0, 0, 0x40008098)
        __FIELD(DONE, 0, 0, 0x40008098)
        __FIELD(PASS, 0, 0, 0x40008098)
    }
    namespace FC0_RESULT{
        __FIELD(KHZ, 0, 0, 0x4000809c)
        __FIELD(FRAC, 0, 0, 0x4000809c)
    }
    namespace WAKE_EN0{
        __FIELD(clk_sys_sram3, 0, 0, 0x400080a0)
        __FIELD(clk_sys_sram2, 0, 0, 0x400080a0)
        __FIELD(clk_sys_sram1, 0, 0, 0x400080a0)
        __FIELD(clk_sys_sram0, 0, 0, 0x400080a0)
        __FIELD(clk_sys_spi1, 0, 0, 0x400080a0)
        __FIELD(clk_peri_spi1, 0, 0, 0x400080a0)
        __FIELD(clk_sys_spi0, 0, 0, 0x400080a0)
        __FIELD(clk_peri_spi0, 0, 0, 0x400080a0)
        __FIELD(clk_sys_sio, 0, 0, 0x400080a0)
        __FIELD(clk_sys_rtc, 0, 0, 0x400080a0)
        __FIELD(clk_rtc_rtc, 0, 0, 0x400080a0)
        __FIELD(clk_sys_rosc, 0, 0, 0x400080a0)
        __FIELD(clk_sys_rom, 0, 0, 0x400080a0)
        __FIELD(clk_sys_resets, 0, 0, 0x400080a0)
        __FIELD(clk_sys_pwm, 0, 0, 0x400080a0)
        __FIELD(clk_sys_psm, 0, 0, 0x400080a0)
        __FIELD(clk_sys_pll_usb, 0, 0, 0x400080a0)
        __FIELD(clk_sys_pll_sys, 0, 0, 0x400080a0)
        __FIELD(clk_sys_pio1, 0, 0, 0x400080a0)
        __FIELD(clk_sys_pio0, 0, 0, 0x400080a0)
        __FIELD(clk_sys_pads, 0, 0, 0x400080a0)
        __FIELD(clk_sys_vreg_and_chip_reset, 0, 0, 0x400080a0)
        __FIELD(clk_sys_jtag, 0, 0, 0x400080a0)
        __FIELD(clk_sys_io, 0, 0, 0x400080a0)
        __FIELD(clk_sys_i2c1, 0, 0, 0x400080a0)
        __FIELD(clk_sys_i2c0, 0, 0, 0x400080a0)
        __FIELD(clk_sys_dma, 0, 0, 0x400080a0)
        __FIELD(clk_sys_busfabric, 0, 0, 0x400080a0)
        __FIELD(clk_sys_busctrl, 0, 0, 0x400080a0)
        __FIELD(clk_sys_adc, 0, 0, 0x400080a0)
        __FIELD(clk_adc_adc, 0, 0, 0x400080a0)
        __FIELD(clk_sys_clocks, 0, 0, 0x400080a0)
    }
    namespace WAKE_EN1{
        __FIELD(clk_sys_xosc, 0, 0, 0x400080a4)
        __FIELD(clk_sys_xip, 0, 0, 0x400080a4)
        __FIELD(clk_sys_watchdog, 0, 0, 0x400080a4)
        __FIELD(clk_usb_usbctrl, 0, 0, 0x400080a4)
        __FIELD(clk_sys_usbctrl, 0, 0, 0x400080a4)
        __FIELD(clk_sys_uart1, 0, 0, 0x400080a4)
        __FIELD(clk_peri_uart1, 0, 0, 0x400080a4)
        __FIELD(clk_sys_uart0, 0, 0, 0x400080a4)
        __FIELD(clk_peri_uart0, 0, 0, 0x400080a4)
        __FIELD(clk_sys_timer, 0, 0, 0x400080a4)
        __FIELD(clk_sys_tbman, 0, 0, 0x400080a4)
        __FIELD(clk_sys_sysinfo, 0, 0, 0x400080a4)
        __FIELD(clk_sys_syscfg, 0, 0, 0x400080a4)
        __FIELD(clk_sys_sram5, 0, 0, 0x400080a4)
        __FIELD(clk_sys_sram4, 0, 0, 0x400080a4)
    }
    namespace SLEEP_EN0{
        __FIELD(clk_sys_sram3, 0, 0, 0x400080a8)
        __FIELD(clk_sys_sram2, 0, 0, 0x400080a8)
        __FIELD(clk_sys_sram1, 0, 0, 0x400080a8)
        __FIELD(clk_sys_sram0, 0, 0, 0x400080a8)
        __FIELD(clk_sys_spi1, 0, 0, 0x400080a8)
        __FIELD(clk_peri_spi1, 0, 0, 0x400080a8)
        __FIELD(clk_sys_spi0, 0, 0, 0x400080a8)
        __FIELD(clk_peri_spi0, 0, 0, 0x400080a8)
        __FIELD(clk_sys_sio, 0, 0, 0x400080a8)
        __FIELD(clk_sys_rtc, 0, 0, 0x400080a8)
        __FIELD(clk_rtc_rtc, 0, 0, 0x400080a8)
        __FIELD(clk_sys_rosc, 0, 0, 0x400080a8)
        __FIELD(clk_sys_rom, 0, 0, 0x400080a8)
        __FIELD(clk_sys_resets, 0, 0, 0x400080a8)
        __FIELD(clk_sys_pwm, 0, 0, 0x400080a8)
        __FIELD(clk_sys_psm, 0, 0, 0x400080a8)
        __FIELD(clk_sys_pll_usb, 0, 0, 0x400080a8)
        __FIELD(clk_sys_pll_sys, 0, 0, 0x400080a8)
        __FIELD(clk_sys_pio1, 0, 0, 0x400080a8)
        __FIELD(clk_sys_pio0, 0, 0, 0x400080a8)
        __FIELD(clk_sys_pads, 0, 0, 0x400080a8)
        __FIELD(clk_sys_vreg_and_chip_reset, 0, 0, 0x400080a8)
        __FIELD(clk_sys_jtag, 0, 0, 0x400080a8)
        __FIELD(clk_sys_io, 0, 0, 0x400080a8)
        __FIELD(clk_sys_i2c1, 0, 0, 0x400080a8)
        __FIELD(clk_sys_i2c0, 0, 0, 0x400080a8)
        __FIELD(clk_sys_dma, 0, 0, 0x400080a8)
        __FIELD(clk_sys_busfabric, 0, 0, 0x400080a8)
        __FIELD(clk_sys_busctrl, 0, 0, 0x400080a8)
        __FIELD(clk_sys_adc, 0, 0, 0x400080a8)
        __FIELD(clk_adc_adc, 0, 0, 0x400080a8)
        __FIELD(clk_sys_clocks, 0, 0, 0x400080a8)
    }
    namespace SLEEP_EN1{
        __FIELD(clk_sys_xosc, 0, 0, 0x400080ac)
        __FIELD(clk_sys_xip, 0, 0, 0x400080ac)
        __FIELD(clk_sys_watchdog, 0, 0, 0x400080ac)
        __FIELD(clk_usb_usbctrl, 0, 0, 0x400080ac)
        __FIELD(clk_sys_usbctrl, 0, 0, 0x400080ac)
        __FIELD(clk_sys_uart1, 0, 0, 0x400080ac)
        __FIELD(clk_peri_uart1, 0, 0, 0x400080ac)
        __FIELD(clk_sys_uart0, 0, 0, 0x400080ac)
        __FIELD(clk_peri_uart0, 0, 0, 0x400080ac)
        __FIELD(clk_sys_timer, 0, 0, 0x400080ac)
        __FIELD(clk_sys_tbman, 0, 0, 0x400080ac)
        __FIELD(clk_sys_sysinfo, 0, 0, 0x400080ac)
        __FIELD(clk_sys_syscfg, 0, 0, 0x400080ac)
        __FIELD(clk_sys_sram5, 0, 0, 0x400080ac)
        __FIELD(clk_sys_sram4, 0, 0, 0x400080ac)
    }
    namespace ENABLED0{
        __FIELD(clk_sys_sram3, 0, 0, 0x400080b0)
        __FIELD(clk_sys_sram2, 0, 0, 0x400080b0)
        __FIELD(clk_sys_sram1, 0, 0, 0x400080b0)
        __FIELD(clk_sys_sram0, 0, 0, 0x400080b0)
        __FIELD(clk_sys_spi1, 0, 0, 0x400080b0)
        __FIELD(clk_peri_spi1, 0, 0, 0x400080b0)
        __FIELD(clk_sys_spi0, 0, 0, 0x400080b0)
        __FIELD(clk_peri_spi0, 0, 0, 0x400080b0)
        __FIELD(clk_sys_sio, 0, 0, 0x400080b0)
        __FIELD(clk_sys_rtc, 0, 0, 0x400080b0)
        __FIELD(clk_rtc_rtc, 0, 0, 0x400080b0)
        __FIELD(clk_sys_rosc, 0, 0, 0x400080b0)
        __FIELD(clk_sys_rom, 0, 0, 0x400080b0)
        __FIELD(clk_sys_resets, 0, 0, 0x400080b0)
        __FIELD(clk_sys_pwm, 0, 0, 0x400080b0)
        __FIELD(clk_sys_psm, 0, 0, 0x400080b0)
        __FIELD(clk_sys_pll_usb, 0, 0, 0x400080b0)
        __FIELD(clk_sys_pll_sys, 0, 0, 0x400080b0)
        __FIELD(clk_sys_pio1, 0, 0, 0x400080b0)
        __FIELD(clk_sys_pio0, 0, 0, 0x400080b0)
        __FIELD(clk_sys_pads, 0, 0, 0x400080b0)
        __FIELD(clk_sys_vreg_and_chip_reset, 0, 0, 0x400080b0)
        __FIELD(clk_sys_jtag, 0, 0, 0x400080b0)
        __FIELD(clk_sys_io, 0, 0, 0x400080b0)
        __FIELD(clk_sys_i2c1, 0, 0, 0x400080b0)
        __FIELD(clk_sys_i2c0, 0, 0, 0x400080b0)
        __FIELD(clk_sys_dma, 0, 0, 0x400080b0)
        __FIELD(clk_sys_busfabric, 0, 0, 0x400080b0)
        __FIELD(clk_sys_busctrl, 0, 0, 0x400080b0)
        __FIELD(clk_sys_adc, 0, 0, 0x400080b0)
        __FIELD(clk_adc_adc, 0, 0, 0x400080b0)
        __FIELD(clk_sys_clocks, 0, 0, 0x400080b0)
    }
    namespace ENABLED1{
        __FIELD(clk_sys_xosc, 0, 0, 0x400080b4)
        __FIELD(clk_sys_xip, 0, 0, 0x400080b4)
        __FIELD(clk_sys_watchdog, 0, 0, 0x400080b4)
        __FIELD(clk_usb_usbctrl, 0, 0, 0x400080b4)
        __FIELD(clk_sys_usbctrl, 0, 0, 0x400080b4)
        __FIELD(clk_sys_uart1, 0, 0, 0x400080b4)
        __FIELD(clk_peri_uart1, 0, 0, 0x400080b4)
        __FIELD(clk_sys_uart0, 0, 0, 0x400080b4)
        __FIELD(clk_peri_uart0, 0, 0, 0x400080b4)
        __FIELD(clk_sys_timer, 0, 0, 0x400080b4)
        __FIELD(clk_sys_tbman, 0, 0, 0x400080b4)
        __FIELD(clk_sys_sysinfo, 0, 0, 0x400080b4)
        __FIELD(clk_sys_syscfg, 0, 0, 0x400080b4)
        __FIELD(clk_sys_sram5, 0, 0, 0x400080b4)
        __FIELD(clk_sys_sram4, 0, 0, 0x400080b4)
    }
    namespace INTR{
        __FIELD(CLK_SYS_RESUS, 0, 0, 0x400080b8)
    }
    namespace INTE{
        __FIELD(CLK_SYS_RESUS, 0, 0, 0x400080bc)
    }
    namespace INTF{
        __FIELD(CLK_SYS_RESUS, 0, 0, 0x400080c0)
    }
    namespace INTS{
        __FIELD(CLK_SYS_RESUS, 0, 0, 0x400080c4)
    }
}

namespace RESETS{
    namespace RESET{
        __FIELD(usbctrl, 0, 0, 0x4000c000)
        __FIELD(uart1, 0, 0, 0x4000c000)
        __FIELD(uart0, 0, 0, 0x4000c000)
        __FIELD(timer, 0, 0, 0x4000c000)
        __FIELD(tbman, 0, 0, 0x4000c000)
        __FIELD(sysinfo, 0, 0, 0x4000c000)
        __FIELD(syscfg, 0, 0, 0x4000c000)
        __FIELD(spi1, 0, 0, 0x4000c000)
        __FIELD(spi0, 0, 0, 0x4000c000)
        __FIELD(rtc, 0, 0, 0x4000c000)
        __FIELD(pwm, 0, 0, 0x4000c000)
        __FIELD(pll_usb, 0, 0, 0x4000c000)
        __FIELD(pll_sys, 0, 0, 0x4000c000)
        __FIELD(pio1, 0, 0, 0x4000c000)
        __FIELD(pio0, 0, 0, 0x4000c000)
        __FIELD(pads_qspi, 0, 0, 0x4000c000)
        __FIELD(pads_bank0, 0, 0, 0x4000c000)
        __FIELD(jtag, 0, 0, 0x4000c000)
        __FIELD(io_qspi, 0, 0, 0x4000c000)
        __FIELD(io_bank0, 0, 0, 0x4000c000)
        __FIELD(i2c1, 0, 0, 0x4000c000)
        __FIELD(i2c0, 0, 0, 0x4000c000)
        __FIELD(dma, 0, 0, 0x4000c000)
        __FIELD(busctrl, 0, 0, 0x4000c000)
        __FIELD(adc, 0, 0, 0x4000c000)
    }
    namespace WDSEL{
        __FIELD(usbctrl, 0, 0, 0x4000c004)
        __FIELD(uart1, 0, 0, 0x4000c004)
        __FIELD(uart0, 0, 0, 0x4000c004)
        __FIELD(timer, 0, 0, 0x4000c004)
        __FIELD(tbman, 0, 0, 0x4000c004)
        __FIELD(sysinfo, 0, 0, 0x4000c004)
        __FIELD(syscfg, 0, 0, 0x4000c004)
        __FIELD(spi1, 0, 0, 0x4000c004)
        __FIELD(spi0, 0, 0, 0x4000c004)
        __FIELD(rtc, 0, 0, 0x4000c004)
        __FIELD(pwm, 0, 0, 0x4000c004)
        __FIELD(pll_usb, 0, 0, 0x4000c004)
        __FIELD(pll_sys, 0, 0, 0x4000c004)
        __FIELD(pio1, 0, 0, 0x4000c004)
        __FIELD(pio0, 0, 0, 0x4000c004)
        __FIELD(pads_qspi, 0, 0, 0x4000c004)
        __FIELD(pads_bank0, 0, 0, 0x4000c004)
        __FIELD(jtag, 0, 0, 0x4000c004)
        __FIELD(io_qspi, 0, 0, 0x4000c004)
        __FIELD(io_bank0, 0, 0, 0x4000c004)
        __FIELD(i2c1, 0, 0, 0x4000c004)
        __FIELD(i2c0, 0, 0, 0x4000c004)
        __FIELD(dma, 0, 0, 0x4000c004)
        __FIELD(busctrl, 0, 0, 0x4000c004)
        __FIELD(adc, 0, 0, 0x4000c004)
    }
    namespace RESET_DONE{
        __FIELD(usbctrl, 0, 0, 0x4000c008)
        __FIELD(uart1, 0, 0, 0x4000c008)
        __FIELD(uart0, 0, 0, 0x4000c008)
        __FIELD(timer, 0, 0, 0x4000c008)
        __FIELD(tbman, 0, 0, 0x4000c008)
        __FIELD(sysinfo, 0, 0, 0x4000c008)
        __FIELD(syscfg, 0, 0, 0x4000c008)
        __FIELD(spi1, 0, 0, 0x4000c008)
        __FIELD(spi0, 0, 0, 0x4000c008)
        __FIELD(rtc, 0, 0, 0x4000c008)
        __FIELD(pwm, 0, 0, 0x4000c008)
        __FIELD(pll_usb, 0, 0, 0x4000c008)
        __FIELD(pll_sys, 0, 0, 0x4000c008)
        __FIELD(pio1, 0, 0, 0x4000c008)
        __FIELD(pio0, 0, 0, 0x4000c008)
        __FIELD(pads_qspi, 0, 0, 0x4000c008)
        __FIELD(pads_bank0, 0, 0, 0x4000c008)
        __FIELD(jtag, 0, 0, 0x4000c008)
        __FIELD(io_qspi, 0, 0, 0x4000c008)
        __FIELD(io_bank0, 0, 0, 0x4000c008)
        __FIELD(i2c1, 0, 0, 0x4000c008)
        __FIELD(i2c0, 0, 0, 0x4000c008)
        __FIELD(dma, 0, 0, 0x4000c008)
        __FIELD(busctrl, 0, 0, 0x4000c008)
        __FIELD(adc, 0, 0, 0x4000c008)
    }
}

namespace PSM{
    namespace FRCE_ON{
        __FIELD(proc1, 0, 0, 0x40010000)
        __FIELD(proc0, 0, 0, 0x40010000)
        __FIELD(sio, 0, 0, 0x40010000)
        __FIELD(vreg_and_chip_reset, 0, 0, 0x40010000)
        __FIELD(xip, 0, 0, 0x40010000)
        __FIELD(sram5, 0, 0, 0x40010000)
        __FIELD(sram4, 0, 0, 0x40010000)
        __FIELD(sram3, 0, 0, 0x40010000)
        __FIELD(sram2, 0, 0, 0x40010000)
        __FIELD(sram1, 0, 0, 0x40010000)
        __FIELD(sram0, 0, 0, 0x40010000)
        __FIELD(rom, 0, 0, 0x40010000)
        __FIELD(busfabric, 0, 0, 0x40010000)
        __FIELD(resets, 0, 0, 0x40010000)
        __FIELD(clocks, 0, 0, 0x40010000)
        __FIELD(xosc, 0, 0, 0x40010000)
        __FIELD(rosc, 0, 0, 0x40010000)
    }
    namespace FRCE_OFF{
        __FIELD(proc1, 0, 0, 0x40010004)
        __FIELD(proc0, 0, 0, 0x40010004)
        __FIELD(sio, 0, 0, 0x40010004)
        __FIELD(vreg_and_chip_reset, 0, 0, 0x40010004)
        __FIELD(xip, 0, 0, 0x40010004)
        __FIELD(sram5, 0, 0, 0x40010004)
        __FIELD(sram4, 0, 0, 0x40010004)
        __FIELD(sram3, 0, 0, 0x40010004)
        __FIELD(sram2, 0, 0, 0x40010004)
        __FIELD(sram1, 0, 0, 0x40010004)
        __FIELD(sram0, 0, 0, 0x40010004)
        __FIELD(rom, 0, 0, 0x40010004)
        __FIELD(busfabric, 0, 0, 0x40010004)
        __FIELD(resets, 0, 0, 0x40010004)
        __FIELD(clocks, 0, 0, 0x40010004)
        __FIELD(xosc, 0, 0, 0x40010004)
        __FIELD(rosc, 0, 0, 0x40010004)
    }
    namespace WDSEL{
        __FIELD(proc1, 0, 0, 0x40010008)
        __FIELD(proc0, 0, 0, 0x40010008)
        __FIELD(sio, 0, 0, 0x40010008)
        __FIELD(vreg_and_chip_reset, 0, 0, 0x40010008)
        __FIELD(xip, 0, 0, 0x40010008)
        __FIELD(sram5, 0, 0, 0x40010008)
        __FIELD(sram4, 0, 0, 0x40010008)
        __FIELD(sram3, 0, 0, 0x40010008)
        __FIELD(sram2, 0, 0, 0x40010008)
        __FIELD(sram1, 0, 0, 0x40010008)
        __FIELD(sram0, 0, 0, 0x40010008)
        __FIELD(rom, 0, 0, 0x40010008)
        __FIELD(busfabric, 0, 0, 0x40010008)
        __FIELD(resets, 0, 0, 0x40010008)
        __FIELD(clocks, 0, 0, 0x40010008)
        __FIELD(xosc, 0, 0, 0x40010008)
        __FIELD(rosc, 0, 0, 0x40010008)
    }
    namespace DONE{
        __FIELD(proc1, 0, 0, 0x4001000c)
        __FIELD(proc0, 0, 0, 0x4001000c)
        __FIELD(sio, 0, 0, 0x4001000c)
        __FIELD(vreg_and_chip_reset, 0, 0, 0x4001000c)
        __FIELD(xip, 0, 0, 0x4001000c)
        __FIELD(sram5, 0, 0, 0x4001000c)
        __FIELD(sram4, 0, 0, 0x4001000c)
        __FIELD(sram3, 0, 0, 0x4001000c)
        __FIELD(sram2, 0, 0, 0x4001000c)
        __FIELD(sram1, 0, 0, 0x4001000c)
        __FIELD(sram0, 0, 0, 0x4001000c)
        __FIELD(rom, 0, 0, 0x4001000c)
        __FIELD(busfabric, 0, 0, 0x4001000c)
        __FIELD(resets, 0, 0, 0x4001000c)
        __FIELD(clocks, 0, 0, 0x4001000c)
        __FIELD(xosc, 0, 0, 0x4001000c)
        __FIELD(rosc, 0, 0, 0x4001000c)
    }
}

namespace IO_BANK0{
    namespace GPIO0_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014000)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014000)
        __FIELD(INTOPERI, 0, 0, 0x40014000)
        __FIELD(INFROMPAD, 0, 0, 0x40014000)
        __FIELD(OETOPAD, 0, 0, 0x40014000)
        __FIELD(OEFROMPERI, 0, 0, 0x40014000)
        __FIELD(OUTTOPAD, 0, 0, 0x40014000)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014000)
    }
    namespace GPIO0_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014004)
        __FIELD(INOVER, 0, 0, 0x40014004)
        __FIELD(OEOVER, 0, 0, 0x40014004)
        __FIELD(OUTOVER, 0, 0, 0x40014004)
        __FIELD(FUNCSEL, 0, 0, 0x40014004)
    }
    namespace GPIO1_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014008)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014008)
        __FIELD(INTOPERI, 0, 0, 0x40014008)
        __FIELD(INFROMPAD, 0, 0, 0x40014008)
        __FIELD(OETOPAD, 0, 0, 0x40014008)
        __FIELD(OEFROMPERI, 0, 0, 0x40014008)
        __FIELD(OUTTOPAD, 0, 0, 0x40014008)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014008)
    }
    namespace GPIO1_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001400c)
        __FIELD(INOVER, 0, 0, 0x4001400c)
        __FIELD(OEOVER, 0, 0, 0x4001400c)
        __FIELD(OUTOVER, 0, 0, 0x4001400c)
        __FIELD(FUNCSEL, 0, 0, 0x4001400c)
    }
    namespace GPIO2_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014010)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014010)
        __FIELD(INTOPERI, 0, 0, 0x40014010)
        __FIELD(INFROMPAD, 0, 0, 0x40014010)
        __FIELD(OETOPAD, 0, 0, 0x40014010)
        __FIELD(OEFROMPERI, 0, 0, 0x40014010)
        __FIELD(OUTTOPAD, 0, 0, 0x40014010)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014010)
    }
    namespace GPIO2_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014014)
        __FIELD(INOVER, 0, 0, 0x40014014)
        __FIELD(OEOVER, 0, 0, 0x40014014)
        __FIELD(OUTOVER, 0, 0, 0x40014014)
        __FIELD(FUNCSEL, 0, 0, 0x40014014)
    }
    namespace GPIO3_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014018)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014018)
        __FIELD(INTOPERI, 0, 0, 0x40014018)
        __FIELD(INFROMPAD, 0, 0, 0x40014018)
        __FIELD(OETOPAD, 0, 0, 0x40014018)
        __FIELD(OEFROMPERI, 0, 0, 0x40014018)
        __FIELD(OUTTOPAD, 0, 0, 0x40014018)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014018)
    }
    namespace GPIO3_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001401c)
        __FIELD(INOVER, 0, 0, 0x4001401c)
        __FIELD(OEOVER, 0, 0, 0x4001401c)
        __FIELD(OUTOVER, 0, 0, 0x4001401c)
        __FIELD(FUNCSEL, 0, 0, 0x4001401c)
    }
    namespace GPIO4_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014020)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014020)
        __FIELD(INTOPERI, 0, 0, 0x40014020)
        __FIELD(INFROMPAD, 0, 0, 0x40014020)
        __FIELD(OETOPAD, 0, 0, 0x40014020)
        __FIELD(OEFROMPERI, 0, 0, 0x40014020)
        __FIELD(OUTTOPAD, 0, 0, 0x40014020)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014020)
    }
    namespace GPIO4_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014024)
        __FIELD(INOVER, 0, 0, 0x40014024)
        __FIELD(OEOVER, 0, 0, 0x40014024)
        __FIELD(OUTOVER, 0, 0, 0x40014024)
        __FIELD(FUNCSEL, 0, 0, 0x40014024)
    }
    namespace GPIO5_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014028)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014028)
        __FIELD(INTOPERI, 0, 0, 0x40014028)
        __FIELD(INFROMPAD, 0, 0, 0x40014028)
        __FIELD(OETOPAD, 0, 0, 0x40014028)
        __FIELD(OEFROMPERI, 0, 0, 0x40014028)
        __FIELD(OUTTOPAD, 0, 0, 0x40014028)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014028)
    }
    namespace GPIO5_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001402c)
        __FIELD(INOVER, 0, 0, 0x4001402c)
        __FIELD(OEOVER, 0, 0, 0x4001402c)
        __FIELD(OUTOVER, 0, 0, 0x4001402c)
        __FIELD(FUNCSEL, 0, 0, 0x4001402c)
    }
    namespace GPIO6_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014030)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014030)
        __FIELD(INTOPERI, 0, 0, 0x40014030)
        __FIELD(INFROMPAD, 0, 0, 0x40014030)
        __FIELD(OETOPAD, 0, 0, 0x40014030)
        __FIELD(OEFROMPERI, 0, 0, 0x40014030)
        __FIELD(OUTTOPAD, 0, 0, 0x40014030)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014030)
    }
    namespace GPIO6_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014034)
        __FIELD(INOVER, 0, 0, 0x40014034)
        __FIELD(OEOVER, 0, 0, 0x40014034)
        __FIELD(OUTOVER, 0, 0, 0x40014034)
        __FIELD(FUNCSEL, 0, 0, 0x40014034)
    }
    namespace GPIO7_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014038)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014038)
        __FIELD(INTOPERI, 0, 0, 0x40014038)
        __FIELD(INFROMPAD, 0, 0, 0x40014038)
        __FIELD(OETOPAD, 0, 0, 0x40014038)
        __FIELD(OEFROMPERI, 0, 0, 0x40014038)
        __FIELD(OUTTOPAD, 0, 0, 0x40014038)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014038)
    }
    namespace GPIO7_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001403c)
        __FIELD(INOVER, 0, 0, 0x4001403c)
        __FIELD(OEOVER, 0, 0, 0x4001403c)
        __FIELD(OUTOVER, 0, 0, 0x4001403c)
        __FIELD(FUNCSEL, 0, 0, 0x4001403c)
    }
    namespace GPIO8_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014040)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014040)
        __FIELD(INTOPERI, 0, 0, 0x40014040)
        __FIELD(INFROMPAD, 0, 0, 0x40014040)
        __FIELD(OETOPAD, 0, 0, 0x40014040)
        __FIELD(OEFROMPERI, 0, 0, 0x40014040)
        __FIELD(OUTTOPAD, 0, 0, 0x40014040)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014040)
    }
    namespace GPIO8_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014044)
        __FIELD(INOVER, 0, 0, 0x40014044)
        __FIELD(OEOVER, 0, 0, 0x40014044)
        __FIELD(OUTOVER, 0, 0, 0x40014044)
        __FIELD(FUNCSEL, 0, 0, 0x40014044)
    }
    namespace GPIO9_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014048)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014048)
        __FIELD(INTOPERI, 0, 0, 0x40014048)
        __FIELD(INFROMPAD, 0, 0, 0x40014048)
        __FIELD(OETOPAD, 0, 0, 0x40014048)
        __FIELD(OEFROMPERI, 0, 0, 0x40014048)
        __FIELD(OUTTOPAD, 0, 0, 0x40014048)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014048)
    }
    namespace GPIO9_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001404c)
        __FIELD(INOVER, 0, 0, 0x4001404c)
        __FIELD(OEOVER, 0, 0, 0x4001404c)
        __FIELD(OUTOVER, 0, 0, 0x4001404c)
        __FIELD(FUNCSEL, 0, 0, 0x4001404c)
    }
    namespace GPIO10_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014050)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014050)
        __FIELD(INTOPERI, 0, 0, 0x40014050)
        __FIELD(INFROMPAD, 0, 0, 0x40014050)
        __FIELD(OETOPAD, 0, 0, 0x40014050)
        __FIELD(OEFROMPERI, 0, 0, 0x40014050)
        __FIELD(OUTTOPAD, 0, 0, 0x40014050)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014050)
    }
    namespace GPIO10_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014054)
        __FIELD(INOVER, 0, 0, 0x40014054)
        __FIELD(OEOVER, 0, 0, 0x40014054)
        __FIELD(OUTOVER, 0, 0, 0x40014054)
        __FIELD(FUNCSEL, 0, 0, 0x40014054)
    }
    namespace GPIO11_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014058)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014058)
        __FIELD(INTOPERI, 0, 0, 0x40014058)
        __FIELD(INFROMPAD, 0, 0, 0x40014058)
        __FIELD(OETOPAD, 0, 0, 0x40014058)
        __FIELD(OEFROMPERI, 0, 0, 0x40014058)
        __FIELD(OUTTOPAD, 0, 0, 0x40014058)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014058)
    }
    namespace GPIO11_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001405c)
        __FIELD(INOVER, 0, 0, 0x4001405c)
        __FIELD(OEOVER, 0, 0, 0x4001405c)
        __FIELD(OUTOVER, 0, 0, 0x4001405c)
        __FIELD(FUNCSEL, 0, 0, 0x4001405c)
    }
    namespace GPIO12_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014060)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014060)
        __FIELD(INTOPERI, 0, 0, 0x40014060)
        __FIELD(INFROMPAD, 0, 0, 0x40014060)
        __FIELD(OETOPAD, 0, 0, 0x40014060)
        __FIELD(OEFROMPERI, 0, 0, 0x40014060)
        __FIELD(OUTTOPAD, 0, 0, 0x40014060)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014060)
    }
    namespace GPIO12_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014064)
        __FIELD(INOVER, 0, 0, 0x40014064)
        __FIELD(OEOVER, 0, 0, 0x40014064)
        __FIELD(OUTOVER, 0, 0, 0x40014064)
        __FIELD(FUNCSEL, 0, 0, 0x40014064)
    }
    namespace GPIO13_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014068)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014068)
        __FIELD(INTOPERI, 0, 0, 0x40014068)
        __FIELD(INFROMPAD, 0, 0, 0x40014068)
        __FIELD(OETOPAD, 0, 0, 0x40014068)
        __FIELD(OEFROMPERI, 0, 0, 0x40014068)
        __FIELD(OUTTOPAD, 0, 0, 0x40014068)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014068)
    }
    namespace GPIO13_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001406c)
        __FIELD(INOVER, 0, 0, 0x4001406c)
        __FIELD(OEOVER, 0, 0, 0x4001406c)
        __FIELD(OUTOVER, 0, 0, 0x4001406c)
        __FIELD(FUNCSEL, 0, 0, 0x4001406c)
    }
    namespace GPIO14_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014070)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014070)
        __FIELD(INTOPERI, 0, 0, 0x40014070)
        __FIELD(INFROMPAD, 0, 0, 0x40014070)
        __FIELD(OETOPAD, 0, 0, 0x40014070)
        __FIELD(OEFROMPERI, 0, 0, 0x40014070)
        __FIELD(OUTTOPAD, 0, 0, 0x40014070)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014070)
    }
    namespace GPIO14_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014074)
        __FIELD(INOVER, 0, 0, 0x40014074)
        __FIELD(OEOVER, 0, 0, 0x40014074)
        __FIELD(OUTOVER, 0, 0, 0x40014074)
        __FIELD(FUNCSEL, 0, 0, 0x40014074)
    }
    namespace GPIO15_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014078)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014078)
        __FIELD(INTOPERI, 0, 0, 0x40014078)
        __FIELD(INFROMPAD, 0, 0, 0x40014078)
        __FIELD(OETOPAD, 0, 0, 0x40014078)
        __FIELD(OEFROMPERI, 0, 0, 0x40014078)
        __FIELD(OUTTOPAD, 0, 0, 0x40014078)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014078)
    }
    namespace GPIO15_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001407c)
        __FIELD(INOVER, 0, 0, 0x4001407c)
        __FIELD(OEOVER, 0, 0, 0x4001407c)
        __FIELD(OUTOVER, 0, 0, 0x4001407c)
        __FIELD(FUNCSEL, 0, 0, 0x4001407c)
    }
    namespace GPIO16_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014080)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014080)
        __FIELD(INTOPERI, 0, 0, 0x40014080)
        __FIELD(INFROMPAD, 0, 0, 0x40014080)
        __FIELD(OETOPAD, 0, 0, 0x40014080)
        __FIELD(OEFROMPERI, 0, 0, 0x40014080)
        __FIELD(OUTTOPAD, 0, 0, 0x40014080)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014080)
    }
    namespace GPIO16_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014084)
        __FIELD(INOVER, 0, 0, 0x40014084)
        __FIELD(OEOVER, 0, 0, 0x40014084)
        __FIELD(OUTOVER, 0, 0, 0x40014084)
        __FIELD(FUNCSEL, 0, 0, 0x40014084)
    }
    namespace GPIO17_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014088)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014088)
        __FIELD(INTOPERI, 0, 0, 0x40014088)
        __FIELD(INFROMPAD, 0, 0, 0x40014088)
        __FIELD(OETOPAD, 0, 0, 0x40014088)
        __FIELD(OEFROMPERI, 0, 0, 0x40014088)
        __FIELD(OUTTOPAD, 0, 0, 0x40014088)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014088)
    }
    namespace GPIO17_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001408c)
        __FIELD(INOVER, 0, 0, 0x4001408c)
        __FIELD(OEOVER, 0, 0, 0x4001408c)
        __FIELD(OUTOVER, 0, 0, 0x4001408c)
        __FIELD(FUNCSEL, 0, 0, 0x4001408c)
    }
    namespace GPIO18_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014090)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014090)
        __FIELD(INTOPERI, 0, 0, 0x40014090)
        __FIELD(INFROMPAD, 0, 0, 0x40014090)
        __FIELD(OETOPAD, 0, 0, 0x40014090)
        __FIELD(OEFROMPERI, 0, 0, 0x40014090)
        __FIELD(OUTTOPAD, 0, 0, 0x40014090)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014090)
    }
    namespace GPIO18_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40014094)
        __FIELD(INOVER, 0, 0, 0x40014094)
        __FIELD(OEOVER, 0, 0, 0x40014094)
        __FIELD(OUTOVER, 0, 0, 0x40014094)
        __FIELD(FUNCSEL, 0, 0, 0x40014094)
    }
    namespace GPIO19_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40014098)
        __FIELD(IRQFROMPAD, 0, 0, 0x40014098)
        __FIELD(INTOPERI, 0, 0, 0x40014098)
        __FIELD(INFROMPAD, 0, 0, 0x40014098)
        __FIELD(OETOPAD, 0, 0, 0x40014098)
        __FIELD(OEFROMPERI, 0, 0, 0x40014098)
        __FIELD(OUTTOPAD, 0, 0, 0x40014098)
        __FIELD(OUTFROMPERI, 0, 0, 0x40014098)
    }
    namespace GPIO19_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001409c)
        __FIELD(INOVER, 0, 0, 0x4001409c)
        __FIELD(OEOVER, 0, 0, 0x4001409c)
        __FIELD(OUTOVER, 0, 0, 0x4001409c)
        __FIELD(FUNCSEL, 0, 0, 0x4001409c)
    }
    namespace GPIO20_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140a0)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140a0)
        __FIELD(INTOPERI, 0, 0, 0x400140a0)
        __FIELD(INFROMPAD, 0, 0, 0x400140a0)
        __FIELD(OETOPAD, 0, 0, 0x400140a0)
        __FIELD(OEFROMPERI, 0, 0, 0x400140a0)
        __FIELD(OUTTOPAD, 0, 0, 0x400140a0)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140a0)
    }
    namespace GPIO20_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140a4)
        __FIELD(INOVER, 0, 0, 0x400140a4)
        __FIELD(OEOVER, 0, 0, 0x400140a4)
        __FIELD(OUTOVER, 0, 0, 0x400140a4)
        __FIELD(FUNCSEL, 0, 0, 0x400140a4)
    }
    namespace GPIO21_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140a8)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140a8)
        __FIELD(INTOPERI, 0, 0, 0x400140a8)
        __FIELD(INFROMPAD, 0, 0, 0x400140a8)
        __FIELD(OETOPAD, 0, 0, 0x400140a8)
        __FIELD(OEFROMPERI, 0, 0, 0x400140a8)
        __FIELD(OUTTOPAD, 0, 0, 0x400140a8)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140a8)
    }
    namespace GPIO21_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140ac)
        __FIELD(INOVER, 0, 0, 0x400140ac)
        __FIELD(OEOVER, 0, 0, 0x400140ac)
        __FIELD(OUTOVER, 0, 0, 0x400140ac)
        __FIELD(FUNCSEL, 0, 0, 0x400140ac)
    }
    namespace GPIO22_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140b0)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140b0)
        __FIELD(INTOPERI, 0, 0, 0x400140b0)
        __FIELD(INFROMPAD, 0, 0, 0x400140b0)
        __FIELD(OETOPAD, 0, 0, 0x400140b0)
        __FIELD(OEFROMPERI, 0, 0, 0x400140b0)
        __FIELD(OUTTOPAD, 0, 0, 0x400140b0)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140b0)
    }
    namespace GPIO22_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140b4)
        __FIELD(INOVER, 0, 0, 0x400140b4)
        __FIELD(OEOVER, 0, 0, 0x400140b4)
        __FIELD(OUTOVER, 0, 0, 0x400140b4)
        __FIELD(FUNCSEL, 0, 0, 0x400140b4)
    }
    namespace GPIO23_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140b8)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140b8)
        __FIELD(INTOPERI, 0, 0, 0x400140b8)
        __FIELD(INFROMPAD, 0, 0, 0x400140b8)
        __FIELD(OETOPAD, 0, 0, 0x400140b8)
        __FIELD(OEFROMPERI, 0, 0, 0x400140b8)
        __FIELD(OUTTOPAD, 0, 0, 0x400140b8)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140b8)
    }
    namespace GPIO23_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140bc)
        __FIELD(INOVER, 0, 0, 0x400140bc)
        __FIELD(OEOVER, 0, 0, 0x400140bc)
        __FIELD(OUTOVER, 0, 0, 0x400140bc)
        __FIELD(FUNCSEL, 0, 0, 0x400140bc)
    }
    namespace GPIO24_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140c0)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140c0)
        __FIELD(INTOPERI, 0, 0, 0x400140c0)
        __FIELD(INFROMPAD, 0, 0, 0x400140c0)
        __FIELD(OETOPAD, 0, 0, 0x400140c0)
        __FIELD(OEFROMPERI, 0, 0, 0x400140c0)
        __FIELD(OUTTOPAD, 0, 0, 0x400140c0)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140c0)
    }
    namespace GPIO24_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140c4)
        __FIELD(INOVER, 0, 0, 0x400140c4)
        __FIELD(OEOVER, 0, 0, 0x400140c4)
        __FIELD(OUTOVER, 0, 0, 0x400140c4)
        __FIELD(FUNCSEL, 0, 0, 0x400140c4)
    }
    namespace GPIO25_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140c8)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140c8)
        __FIELD(INTOPERI, 0, 0, 0x400140c8)
        __FIELD(INFROMPAD, 0, 0, 0x400140c8)
        __FIELD(OETOPAD, 0, 0, 0x400140c8)
        __FIELD(OEFROMPERI, 0, 0, 0x400140c8)
        __FIELD(OUTTOPAD, 0, 0, 0x400140c8)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140c8)
    }
    namespace GPIO25_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140cc)
        __FIELD(INOVER, 0, 0, 0x400140cc)
        __FIELD(OEOVER, 0, 0, 0x400140cc)
        __FIELD(OUTOVER, 0, 0, 0x400140cc)
        __FIELD(FUNCSEL, 0, 0, 0x400140cc)
    }
    namespace GPIO26_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140d0)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140d0)
        __FIELD(INTOPERI, 0, 0, 0x400140d0)
        __FIELD(INFROMPAD, 0, 0, 0x400140d0)
        __FIELD(OETOPAD, 0, 0, 0x400140d0)
        __FIELD(OEFROMPERI, 0, 0, 0x400140d0)
        __FIELD(OUTTOPAD, 0, 0, 0x400140d0)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140d0)
    }
    namespace GPIO26_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140d4)
        __FIELD(INOVER, 0, 0, 0x400140d4)
        __FIELD(OEOVER, 0, 0, 0x400140d4)
        __FIELD(OUTOVER, 0, 0, 0x400140d4)
        __FIELD(FUNCSEL, 0, 0, 0x400140d4)
    }
    namespace GPIO27_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140d8)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140d8)
        __FIELD(INTOPERI, 0, 0, 0x400140d8)
        __FIELD(INFROMPAD, 0, 0, 0x400140d8)
        __FIELD(OETOPAD, 0, 0, 0x400140d8)
        __FIELD(OEFROMPERI, 0, 0, 0x400140d8)
        __FIELD(OUTTOPAD, 0, 0, 0x400140d8)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140d8)
    }
    namespace GPIO27_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140dc)
        __FIELD(INOVER, 0, 0, 0x400140dc)
        __FIELD(OEOVER, 0, 0, 0x400140dc)
        __FIELD(OUTOVER, 0, 0, 0x400140dc)
        __FIELD(FUNCSEL, 0, 0, 0x400140dc)
    }
    namespace GPIO28_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140e0)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140e0)
        __FIELD(INTOPERI, 0, 0, 0x400140e0)
        __FIELD(INFROMPAD, 0, 0, 0x400140e0)
        __FIELD(OETOPAD, 0, 0, 0x400140e0)
        __FIELD(OEFROMPERI, 0, 0, 0x400140e0)
        __FIELD(OUTTOPAD, 0, 0, 0x400140e0)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140e0)
    }
    namespace GPIO28_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140e4)
        __FIELD(INOVER, 0, 0, 0x400140e4)
        __FIELD(OEOVER, 0, 0, 0x400140e4)
        __FIELD(OUTOVER, 0, 0, 0x400140e4)
        __FIELD(FUNCSEL, 0, 0, 0x400140e4)
    }
    namespace GPIO29_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x400140e8)
        __FIELD(IRQFROMPAD, 0, 0, 0x400140e8)
        __FIELD(INTOPERI, 0, 0, 0x400140e8)
        __FIELD(INFROMPAD, 0, 0, 0x400140e8)
        __FIELD(OETOPAD, 0, 0, 0x400140e8)
        __FIELD(OEFROMPERI, 0, 0, 0x400140e8)
        __FIELD(OUTTOPAD, 0, 0, 0x400140e8)
        __FIELD(OUTFROMPERI, 0, 0, 0x400140e8)
    }
    namespace GPIO29_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x400140ec)
        __FIELD(INOVER, 0, 0, 0x400140ec)
        __FIELD(OEOVER, 0, 0, 0x400140ec)
        __FIELD(OUTOVER, 0, 0, 0x400140ec)
        __FIELD(FUNCSEL, 0, 0, 0x400140ec)
    }
    namespace INTR0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x400140f0)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x400140f0)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x400140f0)
    }
    namespace INTR1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x400140f4)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x400140f4)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x400140f4)
    }
    namespace INTR2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x400140f8)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x400140f8)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x400140f8)
    }
    namespace INTR3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x400140fc)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x400140fc)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x400140fc)
    }
    namespace PROC0_INTE0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014100)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014100)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014100)
    }
    namespace PROC0_INTE1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014104)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014104)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014104)
    }
    namespace PROC0_INTE2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014108)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014108)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014108)
    }
    namespace PROC0_INTE3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001410c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001410c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001410c)
    }
    namespace PROC0_INTF0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014110)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014110)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014110)
    }
    namespace PROC0_INTF1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014114)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014114)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014114)
    }
    namespace PROC0_INTF2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014118)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014118)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014118)
    }
    namespace PROC0_INTF3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001411c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001411c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001411c)
    }
    namespace PROC0_INTS0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014120)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014120)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014120)
    }
    namespace PROC0_INTS1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014124)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014124)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014124)
    }
    namespace PROC0_INTS2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014128)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014128)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014128)
    }
    namespace PROC0_INTS3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001412c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001412c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001412c)
    }
    namespace PROC1_INTE0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014130)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014130)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014130)
    }
    namespace PROC1_INTE1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014134)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014134)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014134)
    }
    namespace PROC1_INTE2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014138)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014138)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014138)
    }
    namespace PROC1_INTE3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001413c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001413c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001413c)
    }
    namespace PROC1_INTF0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014140)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014140)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014140)
    }
    namespace PROC1_INTF1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014144)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014144)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014144)
    }
    namespace PROC1_INTF2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014148)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014148)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014148)
    }
    namespace PROC1_INTF3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001414c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001414c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001414c)
    }
    namespace PROC1_INTS0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014150)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014150)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014150)
    }
    namespace PROC1_INTS1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014154)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014154)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014154)
    }
    namespace PROC1_INTS2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014158)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014158)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014158)
    }
    namespace PROC1_INTS3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001415c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001415c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001415c)
    }
    namespace DORMANT_WAKE_INTE0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014160)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014160)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014160)
    }
    namespace DORMANT_WAKE_INTE1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014164)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014164)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014164)
    }
    namespace DORMANT_WAKE_INTE2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014168)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014168)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014168)
    }
    namespace DORMANT_WAKE_INTE3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001416c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001416c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001416c)
    }
    namespace DORMANT_WAKE_INTF0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014170)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014170)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014170)
    }
    namespace DORMANT_WAKE_INTF1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014174)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014174)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014174)
    }
    namespace DORMANT_WAKE_INTF2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014178)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014178)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014178)
    }
    namespace DORMANT_WAKE_INTF3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001417c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001417c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001417c)
    }
    namespace DORMANT_WAKE_INTS0{
        __FIELD(GPIO7_EDGE_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO7_EDGE_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO7_LEVEL_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO7_LEVEL_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO6_EDGE_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO6_EDGE_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO6_LEVEL_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO6_LEVEL_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO5_EDGE_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO5_EDGE_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO5_LEVEL_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO5_LEVEL_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO4_EDGE_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO4_EDGE_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO4_LEVEL_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO4_LEVEL_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO3_EDGE_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO3_EDGE_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO3_LEVEL_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO3_LEVEL_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO2_EDGE_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO2_EDGE_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO2_LEVEL_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO2_LEVEL_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO1_EDGE_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO1_EDGE_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO1_LEVEL_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO1_LEVEL_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO0_EDGE_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO0_EDGE_LOW, 0, 0, 0x40014180)
        __FIELD(GPIO0_LEVEL_HIGH, 0, 0, 0x40014180)
        __FIELD(GPIO0_LEVEL_LOW, 0, 0, 0x40014180)
    }
    namespace DORMANT_WAKE_INTS1{
        __FIELD(GPIO15_EDGE_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO15_EDGE_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO15_LEVEL_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO15_LEVEL_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO14_EDGE_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO14_EDGE_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO14_LEVEL_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO14_LEVEL_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO13_EDGE_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO13_EDGE_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO13_LEVEL_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO13_LEVEL_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO12_EDGE_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO12_EDGE_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO12_LEVEL_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO12_LEVEL_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO11_EDGE_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO11_EDGE_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO11_LEVEL_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO11_LEVEL_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO10_EDGE_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO10_EDGE_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO10_LEVEL_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO10_LEVEL_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO9_EDGE_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO9_EDGE_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO9_LEVEL_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO9_LEVEL_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO8_EDGE_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO8_EDGE_LOW, 0, 0, 0x40014184)
        __FIELD(GPIO8_LEVEL_HIGH, 0, 0, 0x40014184)
        __FIELD(GPIO8_LEVEL_LOW, 0, 0, 0x40014184)
    }
    namespace DORMANT_WAKE_INTS2{
        __FIELD(GPIO23_EDGE_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO23_EDGE_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO23_LEVEL_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO23_LEVEL_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO22_EDGE_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO22_EDGE_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO22_LEVEL_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO22_LEVEL_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO21_EDGE_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO21_EDGE_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO21_LEVEL_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO21_LEVEL_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO20_EDGE_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO20_EDGE_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO20_LEVEL_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO20_LEVEL_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO19_EDGE_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO19_EDGE_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO19_LEVEL_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO19_LEVEL_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO18_EDGE_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO18_EDGE_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO18_LEVEL_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO18_LEVEL_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO17_EDGE_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO17_EDGE_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO17_LEVEL_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO17_LEVEL_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO16_EDGE_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO16_EDGE_LOW, 0, 0, 0x40014188)
        __FIELD(GPIO16_LEVEL_HIGH, 0, 0, 0x40014188)
        __FIELD(GPIO16_LEVEL_LOW, 0, 0, 0x40014188)
    }
    namespace DORMANT_WAKE_INTS3{
        __FIELD(GPIO29_EDGE_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO29_EDGE_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO29_LEVEL_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO29_LEVEL_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO28_EDGE_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO28_EDGE_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO28_LEVEL_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO28_LEVEL_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO27_EDGE_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO27_EDGE_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO27_LEVEL_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO27_LEVEL_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO26_EDGE_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO26_EDGE_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO26_LEVEL_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO26_LEVEL_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO25_EDGE_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO25_EDGE_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO25_LEVEL_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO25_LEVEL_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO24_EDGE_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO24_EDGE_LOW, 0, 0, 0x4001418c)
        __FIELD(GPIO24_LEVEL_HIGH, 0, 0, 0x4001418c)
        __FIELD(GPIO24_LEVEL_LOW, 0, 0, 0x4001418c)
    }
}

namespace IO_QSPI{
    namespace GPIO_QSPI_SCLK_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40018000)
        __FIELD(IRQFROMPAD, 0, 0, 0x40018000)
        __FIELD(INTOPERI, 0, 0, 0x40018000)
        __FIELD(INFROMPAD, 0, 0, 0x40018000)
        __FIELD(OETOPAD, 0, 0, 0x40018000)
        __FIELD(OEFROMPERI, 0, 0, 0x40018000)
        __FIELD(OUTTOPAD, 0, 0, 0x40018000)
        __FIELD(OUTFROMPERI, 0, 0, 0x40018000)
    }
    namespace GPIO_QSPI_SCLK_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40018004)
        __FIELD(INOVER, 0, 0, 0x40018004)
        __FIELD(OEOVER, 0, 0, 0x40018004)
        __FIELD(OUTOVER, 0, 0, 0x40018004)
        __FIELD(FUNCSEL, 0, 0, 0x40018004)
    }
    namespace GPIO_QSPI_SS_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40018008)
        __FIELD(IRQFROMPAD, 0, 0, 0x40018008)
        __FIELD(INTOPERI, 0, 0, 0x40018008)
        __FIELD(INFROMPAD, 0, 0, 0x40018008)
        __FIELD(OETOPAD, 0, 0, 0x40018008)
        __FIELD(OEFROMPERI, 0, 0, 0x40018008)
        __FIELD(OUTTOPAD, 0, 0, 0x40018008)
        __FIELD(OUTFROMPERI, 0, 0, 0x40018008)
    }
    namespace GPIO_QSPI_SS_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001800c)
        __FIELD(INOVER, 0, 0, 0x4001800c)
        __FIELD(OEOVER, 0, 0, 0x4001800c)
        __FIELD(OUTOVER, 0, 0, 0x4001800c)
        __FIELD(FUNCSEL, 0, 0, 0x4001800c)
    }
    namespace GPIO_QSPI_SD0_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40018010)
        __FIELD(IRQFROMPAD, 0, 0, 0x40018010)
        __FIELD(INTOPERI, 0, 0, 0x40018010)
        __FIELD(INFROMPAD, 0, 0, 0x40018010)
        __FIELD(OETOPAD, 0, 0, 0x40018010)
        __FIELD(OEFROMPERI, 0, 0, 0x40018010)
        __FIELD(OUTTOPAD, 0, 0, 0x40018010)
        __FIELD(OUTFROMPERI, 0, 0, 0x40018010)
    }
    namespace GPIO_QSPI_SD0_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40018014)
        __FIELD(INOVER, 0, 0, 0x40018014)
        __FIELD(OEOVER, 0, 0, 0x40018014)
        __FIELD(OUTOVER, 0, 0, 0x40018014)
        __FIELD(FUNCSEL, 0, 0, 0x40018014)
    }
    namespace GPIO_QSPI_SD1_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40018018)
        __FIELD(IRQFROMPAD, 0, 0, 0x40018018)
        __FIELD(INTOPERI, 0, 0, 0x40018018)
        __FIELD(INFROMPAD, 0, 0, 0x40018018)
        __FIELD(OETOPAD, 0, 0, 0x40018018)
        __FIELD(OEFROMPERI, 0, 0, 0x40018018)
        __FIELD(OUTTOPAD, 0, 0, 0x40018018)
        __FIELD(OUTFROMPERI, 0, 0, 0x40018018)
    }
    namespace GPIO_QSPI_SD1_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001801c)
        __FIELD(INOVER, 0, 0, 0x4001801c)
        __FIELD(OEOVER, 0, 0, 0x4001801c)
        __FIELD(OUTOVER, 0, 0, 0x4001801c)
        __FIELD(FUNCSEL, 0, 0, 0x4001801c)
    }
    namespace GPIO_QSPI_SD2_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40018020)
        __FIELD(IRQFROMPAD, 0, 0, 0x40018020)
        __FIELD(INTOPERI, 0, 0, 0x40018020)
        __FIELD(INFROMPAD, 0, 0, 0x40018020)
        __FIELD(OETOPAD, 0, 0, 0x40018020)
        __FIELD(OEFROMPERI, 0, 0, 0x40018020)
        __FIELD(OUTTOPAD, 0, 0, 0x40018020)
        __FIELD(OUTFROMPERI, 0, 0, 0x40018020)
    }
    namespace GPIO_QSPI_SD2_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x40018024)
        __FIELD(INOVER, 0, 0, 0x40018024)
        __FIELD(OEOVER, 0, 0, 0x40018024)
        __FIELD(OUTOVER, 0, 0, 0x40018024)
        __FIELD(FUNCSEL, 0, 0, 0x40018024)
    }
    namespace GPIO_QSPI_SD3_STATUS{
        __FIELD(IRQTOPROC, 0, 0, 0x40018028)
        __FIELD(IRQFROMPAD, 0, 0, 0x40018028)
        __FIELD(INTOPERI, 0, 0, 0x40018028)
        __FIELD(INFROMPAD, 0, 0, 0x40018028)
        __FIELD(OETOPAD, 0, 0, 0x40018028)
        __FIELD(OEFROMPERI, 0, 0, 0x40018028)
        __FIELD(OUTTOPAD, 0, 0, 0x40018028)
        __FIELD(OUTFROMPERI, 0, 0, 0x40018028)
    }
    namespace GPIO_QSPI_SD3_CTRL{
        __FIELD(IRQOVER, 0, 0, 0x4001802c)
        __FIELD(INOVER, 0, 0, 0x4001802c)
        __FIELD(OEOVER, 0, 0, 0x4001802c)
        __FIELD(OUTOVER, 0, 0, 0x4001802c)
        __FIELD(FUNCSEL, 0, 0, 0x4001802c)
    }
    namespace INTR{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x40018030)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x40018030)
    }
    namespace PROC0_INTE{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x40018034)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x40018034)
    }
    namespace PROC0_INTF{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x40018038)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x40018038)
    }
    namespace PROC0_INTS{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x4001803c)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x4001803c)
    }
    namespace PROC1_INTE{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x40018040)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x40018040)
    }
    namespace PROC1_INTF{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x40018044)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x40018044)
    }
    namespace PROC1_INTS{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x40018048)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x40018048)
    }
    namespace DORMANT_WAKE_INTE{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x4001804c)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x4001804c)
    }
    namespace DORMANT_WAKE_INTF{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x40018050)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x40018050)
    }
    namespace DORMANT_WAKE_INTS{
        __FIELD(GPIO_QSPI_SD3_EDGE_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD3_EDGE_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD3_LEVEL_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD3_LEVEL_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD2_EDGE_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD2_EDGE_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD2_LEVEL_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD2_LEVEL_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD1_EDGE_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD1_EDGE_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD1_LEVEL_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD1_LEVEL_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD0_EDGE_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD0_EDGE_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD0_LEVEL_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SD0_LEVEL_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SS_EDGE_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SS_EDGE_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SS_LEVEL_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SS_LEVEL_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SCLK_EDGE_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SCLK_EDGE_LOW, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_HIGH, 0, 0, 0x40018054)
        __FIELD(GPIO_QSPI_SCLK_LEVEL_LOW, 0, 0, 0x40018054)
    }
}

namespace PADS_BANK0{
    namespace VOLTAGE_SELECT{
        __FIELD(VOLTAGE_SELECT, 0, 0, 0x4001c000)
    }
    namespace GPIO0{
        __FIELD(OD, 0, 0, 0x4001c004)
        __FIELD(IE, 0, 0, 0x4001c004)
        __FIELD(DRIVE, 0, 0, 0x4001c004)
        __FIELD(PUE, 0, 0, 0x4001c004)
        __FIELD(PDE, 0, 0, 0x4001c004)
        __FIELD(SCHMITT, 0, 0, 0x4001c004)
        __FIELD(SLEWFAST, 0, 0, 0x4001c004)
    }
    namespace GPIO1{
        __FIELD(OD, 0, 0, 0x4001c008)
        __FIELD(IE, 0, 0, 0x4001c008)
        __FIELD(DRIVE, 0, 0, 0x4001c008)
        __FIELD(PUE, 0, 0, 0x4001c008)
        __FIELD(PDE, 0, 0, 0x4001c008)
        __FIELD(SCHMITT, 0, 0, 0x4001c008)
        __FIELD(SLEWFAST, 0, 0, 0x4001c008)
    }
    namespace GPIO2{
        __FIELD(OD, 0, 0, 0x4001c00c)
        __FIELD(IE, 0, 0, 0x4001c00c)
        __FIELD(DRIVE, 0, 0, 0x4001c00c)
        __FIELD(PUE, 0, 0, 0x4001c00c)
        __FIELD(PDE, 0, 0, 0x4001c00c)
        __FIELD(SCHMITT, 0, 0, 0x4001c00c)
        __FIELD(SLEWFAST, 0, 0, 0x4001c00c)
    }
    namespace GPIO3{
        __FIELD(OD, 0, 0, 0x4001c010)
        __FIELD(IE, 0, 0, 0x4001c010)
        __FIELD(DRIVE, 0, 0, 0x4001c010)
        __FIELD(PUE, 0, 0, 0x4001c010)
        __FIELD(PDE, 0, 0, 0x4001c010)
        __FIELD(SCHMITT, 0, 0, 0x4001c010)
        __FIELD(SLEWFAST, 0, 0, 0x4001c010)
    }
    namespace GPIO4{
        __FIELD(OD, 0, 0, 0x4001c014)
        __FIELD(IE, 0, 0, 0x4001c014)
        __FIELD(DRIVE, 0, 0, 0x4001c014)
        __FIELD(PUE, 0, 0, 0x4001c014)
        __FIELD(PDE, 0, 0, 0x4001c014)
        __FIELD(SCHMITT, 0, 0, 0x4001c014)
        __FIELD(SLEWFAST, 0, 0, 0x4001c014)
    }
    namespace GPIO5{
        __FIELD(OD, 0, 0, 0x4001c018)
        __FIELD(IE, 0, 0, 0x4001c018)
        __FIELD(DRIVE, 0, 0, 0x4001c018)
        __FIELD(PUE, 0, 0, 0x4001c018)
        __FIELD(PDE, 0, 0, 0x4001c018)
        __FIELD(SCHMITT, 0, 0, 0x4001c018)
        __FIELD(SLEWFAST, 0, 0, 0x4001c018)
    }
    namespace GPIO6{
        __FIELD(OD, 0, 0, 0x4001c01c)
        __FIELD(IE, 0, 0, 0x4001c01c)
        __FIELD(DRIVE, 0, 0, 0x4001c01c)
        __FIELD(PUE, 0, 0, 0x4001c01c)
        __FIELD(PDE, 0, 0, 0x4001c01c)
        __FIELD(SCHMITT, 0, 0, 0x4001c01c)
        __FIELD(SLEWFAST, 0, 0, 0x4001c01c)
    }
    namespace GPIO7{
        __FIELD(OD, 0, 0, 0x4001c020)
        __FIELD(IE, 0, 0, 0x4001c020)
        __FIELD(DRIVE, 0, 0, 0x4001c020)
        __FIELD(PUE, 0, 0, 0x4001c020)
        __FIELD(PDE, 0, 0, 0x4001c020)
        __FIELD(SCHMITT, 0, 0, 0x4001c020)
        __FIELD(SLEWFAST, 0, 0, 0x4001c020)
    }
    namespace GPIO8{
        __FIELD(OD, 0, 0, 0x4001c024)
        __FIELD(IE, 0, 0, 0x4001c024)
        __FIELD(DRIVE, 0, 0, 0x4001c024)
        __FIELD(PUE, 0, 0, 0x4001c024)
        __FIELD(PDE, 0, 0, 0x4001c024)
        __FIELD(SCHMITT, 0, 0, 0x4001c024)
        __FIELD(SLEWFAST, 0, 0, 0x4001c024)
    }
    namespace GPIO9{
        __FIELD(OD, 0, 0, 0x4001c028)
        __FIELD(IE, 0, 0, 0x4001c028)
        __FIELD(DRIVE, 0, 0, 0x4001c028)
        __FIELD(PUE, 0, 0, 0x4001c028)
        __FIELD(PDE, 0, 0, 0x4001c028)
        __FIELD(SCHMITT, 0, 0, 0x4001c028)
        __FIELD(SLEWFAST, 0, 0, 0x4001c028)
    }
    namespace GPIO10{
        __FIELD(OD, 0, 0, 0x4001c02c)
        __FIELD(IE, 0, 0, 0x4001c02c)
        __FIELD(DRIVE, 0, 0, 0x4001c02c)
        __FIELD(PUE, 0, 0, 0x4001c02c)
        __FIELD(PDE, 0, 0, 0x4001c02c)
        __FIELD(SCHMITT, 0, 0, 0x4001c02c)
        __FIELD(SLEWFAST, 0, 0, 0x4001c02c)
    }
    namespace GPIO11{
        __FIELD(OD, 0, 0, 0x4001c030)
        __FIELD(IE, 0, 0, 0x4001c030)
        __FIELD(DRIVE, 0, 0, 0x4001c030)
        __FIELD(PUE, 0, 0, 0x4001c030)
        __FIELD(PDE, 0, 0, 0x4001c030)
        __FIELD(SCHMITT, 0, 0, 0x4001c030)
        __FIELD(SLEWFAST, 0, 0, 0x4001c030)
    }
    namespace GPIO12{
        __FIELD(OD, 0, 0, 0x4001c034)
        __FIELD(IE, 0, 0, 0x4001c034)
        __FIELD(DRIVE, 0, 0, 0x4001c034)
        __FIELD(PUE, 0, 0, 0x4001c034)
        __FIELD(PDE, 0, 0, 0x4001c034)
        __FIELD(SCHMITT, 0, 0, 0x4001c034)
        __FIELD(SLEWFAST, 0, 0, 0x4001c034)
    }
    namespace GPIO13{
        __FIELD(OD, 0, 0, 0x4001c038)
        __FIELD(IE, 0, 0, 0x4001c038)
        __FIELD(DRIVE, 0, 0, 0x4001c038)
        __FIELD(PUE, 0, 0, 0x4001c038)
        __FIELD(PDE, 0, 0, 0x4001c038)
        __FIELD(SCHMITT, 0, 0, 0x4001c038)
        __FIELD(SLEWFAST, 0, 0, 0x4001c038)
    }
    namespace GPIO14{
        __FIELD(OD, 0, 0, 0x4001c03c)
        __FIELD(IE, 0, 0, 0x4001c03c)
        __FIELD(DRIVE, 0, 0, 0x4001c03c)
        __FIELD(PUE, 0, 0, 0x4001c03c)
        __FIELD(PDE, 0, 0, 0x4001c03c)
        __FIELD(SCHMITT, 0, 0, 0x4001c03c)
        __FIELD(SLEWFAST, 0, 0, 0x4001c03c)
    }
    namespace GPIO15{
        __FIELD(OD, 0, 0, 0x4001c040)
        __FIELD(IE, 0, 0, 0x4001c040)
        __FIELD(DRIVE, 0, 0, 0x4001c040)
        __FIELD(PUE, 0, 0, 0x4001c040)
        __FIELD(PDE, 0, 0, 0x4001c040)
        __FIELD(SCHMITT, 0, 0, 0x4001c040)
        __FIELD(SLEWFAST, 0, 0, 0x4001c040)
    }
    namespace GPIO16{
        __FIELD(OD, 0, 0, 0x4001c044)
        __FIELD(IE, 0, 0, 0x4001c044)
        __FIELD(DRIVE, 0, 0, 0x4001c044)
        __FIELD(PUE, 0, 0, 0x4001c044)
        __FIELD(PDE, 0, 0, 0x4001c044)
        __FIELD(SCHMITT, 0, 0, 0x4001c044)
        __FIELD(SLEWFAST, 0, 0, 0x4001c044)
    }
    namespace GPIO17{
        __FIELD(OD, 0, 0, 0x4001c048)
        __FIELD(IE, 0, 0, 0x4001c048)
        __FIELD(DRIVE, 0, 0, 0x4001c048)
        __FIELD(PUE, 0, 0, 0x4001c048)
        __FIELD(PDE, 0, 0, 0x4001c048)
        __FIELD(SCHMITT, 0, 0, 0x4001c048)
        __FIELD(SLEWFAST, 0, 0, 0x4001c048)
    }
    namespace GPIO18{
        __FIELD(OD, 0, 0, 0x4001c04c)
        __FIELD(IE, 0, 0, 0x4001c04c)
        __FIELD(DRIVE, 0, 0, 0x4001c04c)
        __FIELD(PUE, 0, 0, 0x4001c04c)
        __FIELD(PDE, 0, 0, 0x4001c04c)
        __FIELD(SCHMITT, 0, 0, 0x4001c04c)
        __FIELD(SLEWFAST, 0, 0, 0x4001c04c)
    }
    namespace GPIO19{
        __FIELD(OD, 0, 0, 0x4001c050)
        __FIELD(IE, 0, 0, 0x4001c050)
        __FIELD(DRIVE, 0, 0, 0x4001c050)
        __FIELD(PUE, 0, 0, 0x4001c050)
        __FIELD(PDE, 0, 0, 0x4001c050)
        __FIELD(SCHMITT, 0, 0, 0x4001c050)
        __FIELD(SLEWFAST, 0, 0, 0x4001c050)
    }
    namespace GPIO20{
        __FIELD(OD, 0, 0, 0x4001c054)
        __FIELD(IE, 0, 0, 0x4001c054)
        __FIELD(DRIVE, 0, 0, 0x4001c054)
        __FIELD(PUE, 0, 0, 0x4001c054)
        __FIELD(PDE, 0, 0, 0x4001c054)
        __FIELD(SCHMITT, 0, 0, 0x4001c054)
        __FIELD(SLEWFAST, 0, 0, 0x4001c054)
    }
    namespace GPIO21{
        __FIELD(OD, 0, 0, 0x4001c058)
        __FIELD(IE, 0, 0, 0x4001c058)
        __FIELD(DRIVE, 0, 0, 0x4001c058)
        __FIELD(PUE, 0, 0, 0x4001c058)
        __FIELD(PDE, 0, 0, 0x4001c058)
        __FIELD(SCHMITT, 0, 0, 0x4001c058)
        __FIELD(SLEWFAST, 0, 0, 0x4001c058)
    }
    namespace GPIO22{
        __FIELD(OD, 0, 0, 0x4001c05c)
        __FIELD(IE, 0, 0, 0x4001c05c)
        __FIELD(DRIVE, 0, 0, 0x4001c05c)
        __FIELD(PUE, 0, 0, 0x4001c05c)
        __FIELD(PDE, 0, 0, 0x4001c05c)
        __FIELD(SCHMITT, 0, 0, 0x4001c05c)
        __FIELD(SLEWFAST, 0, 0, 0x4001c05c)
    }
    namespace GPIO23{
        __FIELD(OD, 0, 0, 0x4001c060)
        __FIELD(IE, 0, 0, 0x4001c060)
        __FIELD(DRIVE, 0, 0, 0x4001c060)
        __FIELD(PUE, 0, 0, 0x4001c060)
        __FIELD(PDE, 0, 0, 0x4001c060)
        __FIELD(SCHMITT, 0, 0, 0x4001c060)
        __FIELD(SLEWFAST, 0, 0, 0x4001c060)
    }
    namespace GPIO24{
        __FIELD(OD, 0, 0, 0x4001c064)
        __FIELD(IE, 0, 0, 0x4001c064)
        __FIELD(DRIVE, 0, 0, 0x4001c064)
        __FIELD(PUE, 0, 0, 0x4001c064)
        __FIELD(PDE, 0, 0, 0x4001c064)
        __FIELD(SCHMITT, 0, 0, 0x4001c064)
        __FIELD(SLEWFAST, 0, 0, 0x4001c064)
    }
    namespace GPIO25{
        __FIELD(OD, 0, 0, 0x4001c068)
        __FIELD(IE, 0, 0, 0x4001c068)
        __FIELD(DRIVE, 0, 0, 0x4001c068)
        __FIELD(PUE, 0, 0, 0x4001c068)
        __FIELD(PDE, 0, 0, 0x4001c068)
        __FIELD(SCHMITT, 0, 0, 0x4001c068)
        __FIELD(SLEWFAST, 0, 0, 0x4001c068)
    }
    namespace GPIO26{
        __FIELD(OD, 0, 0, 0x4001c06c)
        __FIELD(IE, 0, 0, 0x4001c06c)
        __FIELD(DRIVE, 0, 0, 0x4001c06c)
        __FIELD(PUE, 0, 0, 0x4001c06c)
        __FIELD(PDE, 0, 0, 0x4001c06c)
        __FIELD(SCHMITT, 0, 0, 0x4001c06c)
        __FIELD(SLEWFAST, 0, 0, 0x4001c06c)
    }
    namespace GPIO27{
        __FIELD(OD, 0, 0, 0x4001c070)
        __FIELD(IE, 0, 0, 0x4001c070)
        __FIELD(DRIVE, 0, 0, 0x4001c070)
        __FIELD(PUE, 0, 0, 0x4001c070)
        __FIELD(PDE, 0, 0, 0x4001c070)
        __FIELD(SCHMITT, 0, 0, 0x4001c070)
        __FIELD(SLEWFAST, 0, 0, 0x4001c070)
    }
    namespace GPIO28{
        __FIELD(OD, 0, 0, 0x4001c074)
        __FIELD(IE, 0, 0, 0x4001c074)
        __FIELD(DRIVE, 0, 0, 0x4001c074)
        __FIELD(PUE, 0, 0, 0x4001c074)
        __FIELD(PDE, 0, 0, 0x4001c074)
        __FIELD(SCHMITT, 0, 0, 0x4001c074)
        __FIELD(SLEWFAST, 0, 0, 0x4001c074)
    }
    namespace GPIO29{
        __FIELD(OD, 0, 0, 0x4001c078)
        __FIELD(IE, 0, 0, 0x4001c078)
        __FIELD(DRIVE, 0, 0, 0x4001c078)
        __FIELD(PUE, 0, 0, 0x4001c078)
        __FIELD(PDE, 0, 0, 0x4001c078)
        __FIELD(SCHMITT, 0, 0, 0x4001c078)
        __FIELD(SLEWFAST, 0, 0, 0x4001c078)
    }
    namespace SWCLK{
        __FIELD(OD, 0, 0, 0x4001c07c)
        __FIELD(IE, 0, 0, 0x4001c07c)
        __FIELD(DRIVE, 0, 0, 0x4001c07c)
        __FIELD(PUE, 0, 0, 0x4001c07c)
        __FIELD(PDE, 0, 0, 0x4001c07c)
        __FIELD(SCHMITT, 0, 0, 0x4001c07c)
        __FIELD(SLEWFAST, 0, 0, 0x4001c07c)
    }
    namespace SWD{
        __FIELD(OD, 0, 0, 0x4001c080)
        __FIELD(IE, 0, 0, 0x4001c080)
        __FIELD(DRIVE, 0, 0, 0x4001c080)
        __FIELD(PUE, 0, 0, 0x4001c080)
        __FIELD(PDE, 0, 0, 0x4001c080)
        __FIELD(SCHMITT, 0, 0, 0x4001c080)
        __FIELD(SLEWFAST, 0, 0, 0x4001c080)
    }
}

namespace PADS_QSPI{
    namespace VOLTAGE_SELECT{
        __FIELD(VOLTAGE_SELECT, 0, 0, 0x40020000)
    }
    namespace GPIO_QSPI_SCLK{
        __FIELD(OD, 0, 0, 0x40020004)
        __FIELD(IE, 0, 0, 0x40020004)
        __FIELD(DRIVE, 0, 0, 0x40020004)
        __FIELD(PUE, 0, 0, 0x40020004)
        __FIELD(PDE, 0, 0, 0x40020004)
        __FIELD(SCHMITT, 0, 0, 0x40020004)
        __FIELD(SLEWFAST, 0, 0, 0x40020004)
    }
    namespace GPIO_QSPI_SD0{
        __FIELD(OD, 0, 0, 0x40020008)
        __FIELD(IE, 0, 0, 0x40020008)
        __FIELD(DRIVE, 0, 0, 0x40020008)
        __FIELD(PUE, 0, 0, 0x40020008)
        __FIELD(PDE, 0, 0, 0x40020008)
        __FIELD(SCHMITT, 0, 0, 0x40020008)
        __FIELD(SLEWFAST, 0, 0, 0x40020008)
    }
    namespace GPIO_QSPI_SD1{
        __FIELD(OD, 0, 0, 0x4002000c)
        __FIELD(IE, 0, 0, 0x4002000c)
        __FIELD(DRIVE, 0, 0, 0x4002000c)
        __FIELD(PUE, 0, 0, 0x4002000c)
        __FIELD(PDE, 0, 0, 0x4002000c)
        __FIELD(SCHMITT, 0, 0, 0x4002000c)
        __FIELD(SLEWFAST, 0, 0, 0x4002000c)
    }
    namespace GPIO_QSPI_SD2{
        __FIELD(OD, 0, 0, 0x40020010)
        __FIELD(IE, 0, 0, 0x40020010)
        __FIELD(DRIVE, 0, 0, 0x40020010)
        __FIELD(PUE, 0, 0, 0x40020010)
        __FIELD(PDE, 0, 0, 0x40020010)
        __FIELD(SCHMITT, 0, 0, 0x40020010)
        __FIELD(SLEWFAST, 0, 0, 0x40020010)
    }
    namespace GPIO_QSPI_SD3{
        __FIELD(OD, 0, 0, 0x40020014)
        __FIELD(IE, 0, 0, 0x40020014)
        __FIELD(DRIVE, 0, 0, 0x40020014)
        __FIELD(PUE, 0, 0, 0x40020014)
        __FIELD(PDE, 0, 0, 0x40020014)
        __FIELD(SCHMITT, 0, 0, 0x40020014)
        __FIELD(SLEWFAST, 0, 0, 0x40020014)
    }
    namespace GPIO_QSPI_SS{
        __FIELD(OD, 0, 0, 0x40020018)
        __FIELD(IE, 0, 0, 0x40020018)
        __FIELD(DRIVE, 0, 0, 0x40020018)
        __FIELD(PUE, 0, 0, 0x40020018)
        __FIELD(PDE, 0, 0, 0x40020018)
        __FIELD(SCHMITT, 0, 0, 0x40020018)
        __FIELD(SLEWFAST, 0, 0, 0x40020018)
    }
}

namespace XOSC{
    namespace CTRL{
        __FIELD(ENABLE, 0, 0, 0x40024000)
        __FIELD(FREQ_RANGE, 0, 0, 0x40024000)
    }
    namespace STATUS{
        __FIELD(STABLE, 0, 0, 0x40024004)
        __FIELD(BADWRITE, 0, 0, 0x40024004)
        __FIELD(ENABLED, 0, 0, 0x40024004)
        __FIELD(FREQ_RANGE, 0, 0, 0x40024004)
    }
    namespace DORMANT{
    }
    namespace STARTUP{
        __FIELD(X4, 0, 0, 0x4002400c)
        __FIELD(DELAY, 0, 0, 0x4002400c)
    }
    namespace COUNT{
        __FIELD(COUNT, 0, 0, 0x4002401c)
    }
}

namespace PLL_SYS{
    namespace CS{
        __FIELD(LOCK, 0, 0, 0x40028000)
        __FIELD(BYPASS, 0, 0, 0x40028000)
        __FIELD(REFDIV, 0, 0, 0x40028000)
    }
    namespace PWR{
        __FIELD(VCOPD, 0, 0, 0x40028004)
        __FIELD(POSTDIVPD, 0, 0, 0x40028004)
        __FIELD(DSMPD, 0, 0, 0x40028004)
        __FIELD(PD, 0, 0, 0x40028004)
    }
    namespace FBDIV_INT{
        __FIELD(FBDIV_INT, 0, 0, 0x40028008)
    }
    namespace PRIM{
        __FIELD(POSTDIV1, 0, 0, 0x4002800c)
        __FIELD(POSTDIV2, 0, 0, 0x4002800c)
    }
}

namespace PLL_USB{
    namespace CS{
        __FIELD(LOCK, 0, 0, 0x4002c000)
        __FIELD(BYPASS, 0, 0, 0x4002c000)
        __FIELD(REFDIV, 0, 0, 0x4002c000)
    }
    namespace PWR{
        __FIELD(VCOPD, 0, 0, 0x4002c004)
        __FIELD(POSTDIVPD, 0, 0, 0x4002c004)
        __FIELD(DSMPD, 0, 0, 0x4002c004)
        __FIELD(PD, 0, 0, 0x4002c004)
    }
    namespace FBDIV_INT{
        __FIELD(FBDIV_INT, 0, 0, 0x4002c008)
    }
    namespace PRIM{
        __FIELD(POSTDIV1, 0, 0, 0x4002c00c)
        __FIELD(POSTDIV2, 0, 0, 0x4002c00c)
    }
}

namespace BUSCTRL{
    namespace BUS_PRIORITY{
        __FIELD(DMA_W, 0, 0, 0x40030000)
        __FIELD(DMA_R, 0, 0, 0x40030000)
        __FIELD(PROC1, 0, 0, 0x40030000)
        __FIELD(PROC0, 0, 0, 0x40030000)
    }
    namespace BUS_PRIORITY_ACK{
        __FIELD(BUS_PRIORITY_ACK, 0, 0, 0x40030004)
    }
    namespace PERFCTR0{
        __FIELD(PERFCTR0, 0, 0, 0x40030008)
    }
    namespace PERFSEL0{
        __FIELD(PERFSEL0, 0, 0, 0x4003000c)
    }
    namespace PERFCTR1{
        __FIELD(PERFCTR1, 0, 0, 0x40030010)
    }
    namespace PERFSEL1{
        __FIELD(PERFSEL1, 0, 0, 0x40030014)
    }
    namespace PERFCTR2{
        __FIELD(PERFCTR2, 0, 0, 0x40030018)
    }
    namespace PERFSEL2{
        __FIELD(PERFSEL2, 0, 0, 0x4003001c)
    }
    namespace PERFCTR3{
        __FIELD(PERFCTR3, 0, 0, 0x40030020)
    }
    namespace PERFSEL3{
        __FIELD(PERFSEL3, 0, 0, 0x40030024)
    }
}

namespace UART0{
    namespace UARTDR{
        __FIELD(OE, 0, 0, 0x40034000)
        __FIELD(BE, 0, 0, 0x40034000)
        __FIELD(PE, 0, 0, 0x40034000)
        __FIELD(FE, 0, 0, 0x40034000)
        __FIELD(DATA, 0, 0, 0x40034000)
    }
    namespace UARTRSR{
        __FIELD(OE, 0, 0, 0x40034004)
        __FIELD(BE, 0, 0, 0x40034004)
        __FIELD(PE, 0, 0, 0x40034004)
        __FIELD(FE, 0, 0, 0x40034004)
    }
    namespace UARTFR{
        __FIELD(RI, 0, 0, 0x40034018)
        __FIELD(TXFE, 0, 0, 0x40034018)
        __FIELD(RXFF, 0, 0, 0x40034018)
        __FIELD(TXFF, 0, 0, 0x40034018)
        __FIELD(RXFE, 0, 0, 0x40034018)
        __FIELD(BUSY, 0, 0, 0x40034018)
        __FIELD(DCD, 0, 0, 0x40034018)
        __FIELD(DSR, 0, 0, 0x40034018)
        __FIELD(CTS, 0, 0, 0x40034018)
    }
    namespace UARTILPR{
        __FIELD(ILPDVSR, 0, 0, 0x40034020)
    }
    namespace UARTIBRD{
        __FIELD(BAUD_DIVINT, 0, 0, 0x40034024)
    }
    namespace UARTFBRD{
        __FIELD(BAUD_DIVFRAC, 0, 0, 0x40034028)
    }
    namespace UARTLCR_H{
        __FIELD(SPS, 0, 0, 0x4003402c)
        __FIELD(WLEN, 0, 0, 0x4003402c)
        __FIELD(FEN, 0, 0, 0x4003402c)
        __FIELD(STP2, 0, 0, 0x4003402c)
        __FIELD(EPS, 0, 0, 0x4003402c)
        __FIELD(PEN, 0, 0, 0x4003402c)
        __FIELD(BRK, 0, 0, 0x4003402c)
    }
    namespace UARTCR{
        __FIELD(CTSEN, 0, 0, 0x40034030)
        __FIELD(RTSEN, 0, 0, 0x40034030)
        __FIELD(OUT2, 0, 0, 0x40034030)
        __FIELD(OUT1, 0, 0, 0x40034030)
        __FIELD(RTS, 0, 0, 0x40034030)
        __FIELD(DTR, 0, 0, 0x40034030)
        __FIELD(RXE, 0, 0, 0x40034030)
        __FIELD(TXE, 0, 0, 0x40034030)
        __FIELD(LBE, 0, 0, 0x40034030)
        __FIELD(SIRLP, 0, 0, 0x40034030)
        __FIELD(SIREN, 0, 0, 0x40034030)
        __FIELD(UARTEN, 0, 0, 0x40034030)
    }
    namespace UARTIFLS{
        __FIELD(RXIFLSEL, 0, 0, 0x40034034)
        __FIELD(TXIFLSEL, 0, 0, 0x40034034)
    }
    namespace UARTIMSC{
        __FIELD(OEIM, 0, 0, 0x40034038)
        __FIELD(BEIM, 0, 0, 0x40034038)
        __FIELD(PEIM, 0, 0, 0x40034038)
        __FIELD(FEIM, 0, 0, 0x40034038)
        __FIELD(RTIM, 0, 0, 0x40034038)
        __FIELD(TXIM, 0, 0, 0x40034038)
        __FIELD(RXIM, 0, 0, 0x40034038)
        __FIELD(DSRMIM, 0, 0, 0x40034038)
        __FIELD(DCDMIM, 0, 0, 0x40034038)
        __FIELD(CTSMIM, 0, 0, 0x40034038)
        __FIELD(RIMIM, 0, 0, 0x40034038)
    }
    namespace UARTRIS{
        __FIELD(OERIS, 0, 0, 0x4003403c)
        __FIELD(BERIS, 0, 0, 0x4003403c)
        __FIELD(PERIS, 0, 0, 0x4003403c)
        __FIELD(FERIS, 0, 0, 0x4003403c)
        __FIELD(RTRIS, 0, 0, 0x4003403c)
        __FIELD(TXRIS, 0, 0, 0x4003403c)
        __FIELD(RXRIS, 0, 0, 0x4003403c)
        __FIELD(DSRRMIS, 0, 0, 0x4003403c)
        __FIELD(DCDRMIS, 0, 0, 0x4003403c)
        __FIELD(CTSRMIS, 0, 0, 0x4003403c)
        __FIELD(RIRMIS, 0, 0, 0x4003403c)
    }
    namespace UARTMIS{
        __FIELD(OEMIS, 0, 0, 0x40034040)
        __FIELD(BEMIS, 0, 0, 0x40034040)
        __FIELD(PEMIS, 0, 0, 0x40034040)
        __FIELD(FEMIS, 0, 0, 0x40034040)
        __FIELD(RTMIS, 0, 0, 0x40034040)
        __FIELD(TXMIS, 0, 0, 0x40034040)
        __FIELD(RXMIS, 0, 0, 0x40034040)
        __FIELD(DSRMMIS, 0, 0, 0x40034040)
        __FIELD(DCDMMIS, 0, 0, 0x40034040)
        __FIELD(CTSMMIS, 0, 0, 0x40034040)
        __FIELD(RIMMIS, 0, 0, 0x40034040)
    }
    namespace UARTICR{
        __FIELD(OEIC, 0, 0, 0x40034044)
        __FIELD(BEIC, 0, 0, 0x40034044)
        __FIELD(PEIC, 0, 0, 0x40034044)
        __FIELD(FEIC, 0, 0, 0x40034044)
        __FIELD(RTIC, 0, 0, 0x40034044)
        __FIELD(TXIC, 0, 0, 0x40034044)
        __FIELD(RXIC, 0, 0, 0x40034044)
        __FIELD(DSRMIC, 0, 0, 0x40034044)
        __FIELD(DCDMIC, 0, 0, 0x40034044)
        __FIELD(CTSMIC, 0, 0, 0x40034044)
        __FIELD(RIMIC, 0, 0, 0x40034044)
    }
    namespace UARTDMACR{
        __FIELD(DMAONERR, 0, 0, 0x40034048)
        __FIELD(TXDMAE, 0, 0, 0x40034048)
        __FIELD(RXDMAE, 0, 0, 0x40034048)
    }
    namespace UARTPERIPHID0{
        __FIELD(PARTNUMBER0, 0, 0, 0x40034fe0)
    }
    namespace UARTPERIPHID1{
        __FIELD(DESIGNER0, 0, 0, 0x40034fe4)
        __FIELD(PARTNUMBER1, 0, 0, 0x40034fe4)
    }
    namespace UARTPERIPHID2{
        __FIELD(REVISION, 0, 0, 0x40034fe8)
        __FIELD(DESIGNER1, 0, 0, 0x40034fe8)
    }
    namespace UARTPERIPHID3{
        __FIELD(CONFIGURATION, 0, 0, 0x40034fec)
    }
    namespace UARTPCELLID0{
        __FIELD(UARTPCELLID0, 0, 0, 0x40034ff0)
    }
    namespace UARTPCELLID1{
        __FIELD(UARTPCELLID1, 0, 0, 0x40034ff4)
    }
    namespace UARTPCELLID2{
        __FIELD(UARTPCELLID2, 0, 0, 0x40034ff8)
    }
    namespace UARTPCELLID3{
        __FIELD(UARTPCELLID3, 0, 0, 0x40034ffc)
    }
}

namespace UART1{
    namespace UARTDR{
        __FIELD(OE, 0, 0, 0x40038000)
        __FIELD(BE, 0, 0, 0x40038000)
        __FIELD(PE, 0, 0, 0x40038000)
        __FIELD(FE, 0, 0, 0x40038000)
        __FIELD(DATA, 0, 0, 0x40038000)
    }
    namespace UARTRSR{
        __FIELD(OE, 0, 0, 0x40038004)
        __FIELD(BE, 0, 0, 0x40038004)
        __FIELD(PE, 0, 0, 0x40038004)
        __FIELD(FE, 0, 0, 0x40038004)
    }
    namespace UARTFR{
        __FIELD(RI, 0, 0, 0x40038018)
        __FIELD(TXFE, 0, 0, 0x40038018)
        __FIELD(RXFF, 0, 0, 0x40038018)
        __FIELD(TXFF, 0, 0, 0x40038018)
        __FIELD(RXFE, 0, 0, 0x40038018)
        __FIELD(BUSY, 0, 0, 0x40038018)
        __FIELD(DCD, 0, 0, 0x40038018)
        __FIELD(DSR, 0, 0, 0x40038018)
        __FIELD(CTS, 0, 0, 0x40038018)
    }
    namespace UARTILPR{
        __FIELD(ILPDVSR, 0, 0, 0x40038020)
    }
    namespace UARTIBRD{
        __FIELD(BAUD_DIVINT, 0, 0, 0x40038024)
    }
    namespace UARTFBRD{
        __FIELD(BAUD_DIVFRAC, 0, 0, 0x40038028)
    }
    namespace UARTLCR_H{
        __FIELD(SPS, 0, 0, 0x4003802c)
        __FIELD(WLEN, 0, 0, 0x4003802c)
        __FIELD(FEN, 0, 0, 0x4003802c)
        __FIELD(STP2, 0, 0, 0x4003802c)
        __FIELD(EPS, 0, 0, 0x4003802c)
        __FIELD(PEN, 0, 0, 0x4003802c)
        __FIELD(BRK, 0, 0, 0x4003802c)
    }
    namespace UARTCR{
        __FIELD(CTSEN, 0, 0, 0x40038030)
        __FIELD(RTSEN, 0, 0, 0x40038030)
        __FIELD(OUT2, 0, 0, 0x40038030)
        __FIELD(OUT1, 0, 0, 0x40038030)
        __FIELD(RTS, 0, 0, 0x40038030)
        __FIELD(DTR, 0, 0, 0x40038030)
        __FIELD(RXE, 0, 0, 0x40038030)
        __FIELD(TXE, 0, 0, 0x40038030)
        __FIELD(LBE, 0, 0, 0x40038030)
        __FIELD(SIRLP, 0, 0, 0x40038030)
        __FIELD(SIREN, 0, 0, 0x40038030)
        __FIELD(UARTEN, 0, 0, 0x40038030)
    }
    namespace UARTIFLS{
        __FIELD(RXIFLSEL, 0, 0, 0x40038034)
        __FIELD(TXIFLSEL, 0, 0, 0x40038034)
    }
    namespace UARTIMSC{
        __FIELD(OEIM, 0, 0, 0x40038038)
        __FIELD(BEIM, 0, 0, 0x40038038)
        __FIELD(PEIM, 0, 0, 0x40038038)
        __FIELD(FEIM, 0, 0, 0x40038038)
        __FIELD(RTIM, 0, 0, 0x40038038)
        __FIELD(TXIM, 0, 0, 0x40038038)
        __FIELD(RXIM, 0, 0, 0x40038038)
        __FIELD(DSRMIM, 0, 0, 0x40038038)
        __FIELD(DCDMIM, 0, 0, 0x40038038)
        __FIELD(CTSMIM, 0, 0, 0x40038038)
        __FIELD(RIMIM, 0, 0, 0x40038038)
    }
    namespace UARTRIS{
        __FIELD(OERIS, 0, 0, 0x4003803c)
        __FIELD(BERIS, 0, 0, 0x4003803c)
        __FIELD(PERIS, 0, 0, 0x4003803c)
        __FIELD(FERIS, 0, 0, 0x4003803c)
        __FIELD(RTRIS, 0, 0, 0x4003803c)
        __FIELD(TXRIS, 0, 0, 0x4003803c)
        __FIELD(RXRIS, 0, 0, 0x4003803c)
        __FIELD(DSRRMIS, 0, 0, 0x4003803c)
        __FIELD(DCDRMIS, 0, 0, 0x4003803c)
        __FIELD(CTSRMIS, 0, 0, 0x4003803c)
        __FIELD(RIRMIS, 0, 0, 0x4003803c)
    }
    namespace UARTMIS{
        __FIELD(OEMIS, 0, 0, 0x40038040)
        __FIELD(BEMIS, 0, 0, 0x40038040)
        __FIELD(PEMIS, 0, 0, 0x40038040)
        __FIELD(FEMIS, 0, 0, 0x40038040)
        __FIELD(RTMIS, 0, 0, 0x40038040)
        __FIELD(TXMIS, 0, 0, 0x40038040)
        __FIELD(RXMIS, 0, 0, 0x40038040)
        __FIELD(DSRMMIS, 0, 0, 0x40038040)
        __FIELD(DCDMMIS, 0, 0, 0x40038040)
        __FIELD(CTSMMIS, 0, 0, 0x40038040)
        __FIELD(RIMMIS, 0, 0, 0x40038040)
    }
    namespace UARTICR{
        __FIELD(OEIC, 0, 0, 0x40038044)
        __FIELD(BEIC, 0, 0, 0x40038044)
        __FIELD(PEIC, 0, 0, 0x40038044)
        __FIELD(FEIC, 0, 0, 0x40038044)
        __FIELD(RTIC, 0, 0, 0x40038044)
        __FIELD(TXIC, 0, 0, 0x40038044)
        __FIELD(RXIC, 0, 0, 0x40038044)
        __FIELD(DSRMIC, 0, 0, 0x40038044)
        __FIELD(DCDMIC, 0, 0, 0x40038044)
        __FIELD(CTSMIC, 0, 0, 0x40038044)
        __FIELD(RIMIC, 0, 0, 0x40038044)
    }
    namespace UARTDMACR{
        __FIELD(DMAONERR, 0, 0, 0x40038048)
        __FIELD(TXDMAE, 0, 0, 0x40038048)
        __FIELD(RXDMAE, 0, 0, 0x40038048)
    }
    namespace UARTPERIPHID0{
        __FIELD(PARTNUMBER0, 0, 0, 0x40038fe0)
    }
    namespace UARTPERIPHID1{
        __FIELD(DESIGNER0, 0, 0, 0x40038fe4)
        __FIELD(PARTNUMBER1, 0, 0, 0x40038fe4)
    }
    namespace UARTPERIPHID2{
        __FIELD(REVISION, 0, 0, 0x40038fe8)
        __FIELD(DESIGNER1, 0, 0, 0x40038fe8)
    }
    namespace UARTPERIPHID3{
        __FIELD(CONFIGURATION, 0, 0, 0x40038fec)
    }
    namespace UARTPCELLID0{
        __FIELD(UARTPCELLID0, 0, 0, 0x40038ff0)
    }
    namespace UARTPCELLID1{
        __FIELD(UARTPCELLID1, 0, 0, 0x40038ff4)
    }
    namespace UARTPCELLID2{
        __FIELD(UARTPCELLID2, 0, 0, 0x40038ff8)
    }
    namespace UARTPCELLID3{
        __FIELD(UARTPCELLID3, 0, 0, 0x40038ffc)
    }
}

namespace SPI0{
    namespace SSPCR0{
        __FIELD(SCR, 0, 0, 0x4003c000)
        __FIELD(SPH, 0, 0, 0x4003c000)
        __FIELD(SPO, 0, 0, 0x4003c000)
        __FIELD(FRF, 0, 0, 0x4003c000)
        __FIELD(DSS, 0, 0, 0x4003c000)
    }
    namespace SSPCR1{
        __FIELD(SOD, 0, 0, 0x4003c004)
        __FIELD(MS, 0, 0, 0x4003c004)
        __FIELD(SSE, 0, 0, 0x4003c004)
        __FIELD(LBM, 0, 0, 0x4003c004)
    }
    namespace SSPDR{
        __FIELD(DATA, 0, 0, 0x4003c008)
    }
    namespace SSPSR{
        __FIELD(BSY, 0, 0, 0x4003c00c)
        __FIELD(RFF, 0, 0, 0x4003c00c)
        __FIELD(RNE, 0, 0, 0x4003c00c)
        __FIELD(TNF, 0, 0, 0x4003c00c)
        __FIELD(TFE, 0, 0, 0x4003c00c)
    }
    namespace SSPCPSR{
        __FIELD(CPSDVSR, 0, 0, 0x4003c010)
    }
    namespace SSPIMSC{
        __FIELD(TXIM, 0, 0, 0x4003c014)
        __FIELD(RXIM, 0, 0, 0x4003c014)
        __FIELD(RTIM, 0, 0, 0x4003c014)
        __FIELD(RORIM, 0, 0, 0x4003c014)
    }
    namespace SSPRIS{
        __FIELD(TXRIS, 0, 0, 0x4003c018)
        __FIELD(RXRIS, 0, 0, 0x4003c018)
        __FIELD(RTRIS, 0, 0, 0x4003c018)
        __FIELD(RORRIS, 0, 0, 0x4003c018)
    }
    namespace SSPMIS{
        __FIELD(TXMIS, 0, 0, 0x4003c01c)
        __FIELD(RXMIS, 0, 0, 0x4003c01c)
        __FIELD(RTMIS, 0, 0, 0x4003c01c)
        __FIELD(RORMIS, 0, 0, 0x4003c01c)
    }
    namespace SSPICR{
        __FIELD(RTIC, 0, 0, 0x4003c020)
        __FIELD(RORIC, 0, 0, 0x4003c020)
    }
    namespace SSPDMACR{
        __FIELD(TXDMAE, 0, 0, 0x4003c024)
        __FIELD(RXDMAE, 0, 0, 0x4003c024)
    }
    namespace SSPPERIPHID0{
        __FIELD(PARTNUMBER0, 0, 0, 0x4003cfe0)
    }
    namespace SSPPERIPHID1{
        __FIELD(DESIGNER0, 0, 0, 0x4003cfe4)
        __FIELD(PARTNUMBER1, 0, 0, 0x4003cfe4)
    }
    namespace SSPPERIPHID2{
        __FIELD(REVISION, 0, 0, 0x4003cfe8)
        __FIELD(DESIGNER1, 0, 0, 0x4003cfe8)
    }
    namespace SSPPERIPHID3{
        __FIELD(CONFIGURATION, 0, 0, 0x4003cfec)
    }
    namespace SSPPCELLID0{
        __FIELD(SSPPCELLID0, 0, 0, 0x4003cff0)
    }
    namespace SSPPCELLID1{
        __FIELD(SSPPCELLID1, 0, 0, 0x4003cff4)
    }
    namespace SSPPCELLID2{
        __FIELD(SSPPCELLID2, 0, 0, 0x4003cff8)
    }
    namespace SSPPCELLID3{
        __FIELD(SSPPCELLID3, 0, 0, 0x4003cffc)
    }
}

namespace SPI1{
    namespace SSPCR0{
        __FIELD(SCR, 0, 0, 0x40040000)
        __FIELD(SPH, 0, 0, 0x40040000)
        __FIELD(SPO, 0, 0, 0x40040000)
        __FIELD(FRF, 0, 0, 0x40040000)
        __FIELD(DSS, 0, 0, 0x40040000)
    }
    namespace SSPCR1{
        __FIELD(SOD, 0, 0, 0x40040004)
        __FIELD(MS, 0, 0, 0x40040004)
        __FIELD(SSE, 0, 0, 0x40040004)
        __FIELD(LBM, 0, 0, 0x40040004)
    }
    namespace SSPDR{
        __FIELD(DATA, 0, 0, 0x40040008)
    }
    namespace SSPSR{
        __FIELD(BSY, 0, 0, 0x4004000c)
        __FIELD(RFF, 0, 0, 0x4004000c)
        __FIELD(RNE, 0, 0, 0x4004000c)
        __FIELD(TNF, 0, 0, 0x4004000c)
        __FIELD(TFE, 0, 0, 0x4004000c)
    }
    namespace SSPCPSR{
        __FIELD(CPSDVSR, 0, 0, 0x40040010)
    }
    namespace SSPIMSC{
        __FIELD(TXIM, 0, 0, 0x40040014)
        __FIELD(RXIM, 0, 0, 0x40040014)
        __FIELD(RTIM, 0, 0, 0x40040014)
        __FIELD(RORIM, 0, 0, 0x40040014)
    }
    namespace SSPRIS{
        __FIELD(TXRIS, 0, 0, 0x40040018)
        __FIELD(RXRIS, 0, 0, 0x40040018)
        __FIELD(RTRIS, 0, 0, 0x40040018)
        __FIELD(RORRIS, 0, 0, 0x40040018)
    }
    namespace SSPMIS{
        __FIELD(TXMIS, 0, 0, 0x4004001c)
        __FIELD(RXMIS, 0, 0, 0x4004001c)
        __FIELD(RTMIS, 0, 0, 0x4004001c)
        __FIELD(RORMIS, 0, 0, 0x4004001c)
    }
    namespace SSPICR{
        __FIELD(RTIC, 0, 0, 0x40040020)
        __FIELD(RORIC, 0, 0, 0x40040020)
    }
    namespace SSPDMACR{
        __FIELD(TXDMAE, 0, 0, 0x40040024)
        __FIELD(RXDMAE, 0, 0, 0x40040024)
    }
    namespace SSPPERIPHID0{
        __FIELD(PARTNUMBER0, 0, 0, 0x40040fe0)
    }
    namespace SSPPERIPHID1{
        __FIELD(DESIGNER0, 0, 0, 0x40040fe4)
        __FIELD(PARTNUMBER1, 0, 0, 0x40040fe4)
    }
    namespace SSPPERIPHID2{
        __FIELD(REVISION, 0, 0, 0x40040fe8)
        __FIELD(DESIGNER1, 0, 0, 0x40040fe8)
    }
    namespace SSPPERIPHID3{
        __FIELD(CONFIGURATION, 0, 0, 0x40040fec)
    }
    namespace SSPPCELLID0{
        __FIELD(SSPPCELLID0, 0, 0, 0x40040ff0)
    }
    namespace SSPPCELLID1{
        __FIELD(SSPPCELLID1, 0, 0, 0x40040ff4)
    }
    namespace SSPPCELLID2{
        __FIELD(SSPPCELLID2, 0, 0, 0x40040ff8)
    }
    namespace SSPPCELLID3{
        __FIELD(SSPPCELLID3, 0, 0, 0x40040ffc)
    }
}

namespace I2C0{
    namespace IC_CON{
        __FIELD(STOP_DET_IF_MASTER_ACTIVE, 0, 0, 0x40044000)
        __FIELD(RX_FIFO_FULL_HLD_CTRL, 0, 0, 0x40044000)
        __FIELD(TX_EMPTY_CTRL, 0, 0, 0x40044000)
        __FIELD(STOP_DET_IFADDRESSED, 0, 0, 0x40044000)
        __FIELD(IC_SLAVE_DISABLE, 0, 0, 0x40044000)
        __FIELD(IC_RESTART_EN, 0, 0, 0x40044000)
        __FIELD(IC_10BITADDR_MASTER, 0, 0, 0x40044000)
        __FIELD(IC_10BITADDR_SLAVE, 0, 0, 0x40044000)
        __FIELD(SPEED, 0, 0, 0x40044000)
        __FIELD(MASTER_MODE, 0, 0, 0x40044000)
    }
    namespace IC_TAR{
        __FIELD(SPECIAL, 0, 0, 0x40044004)
        __FIELD(GC_OR_START, 0, 0, 0x40044004)
        __FIELD(IC_TAR, 0, 0, 0x40044004)
    }
    namespace IC_SAR{
        __FIELD(IC_SAR, 0, 0, 0x40044008)
    }
    namespace IC_DATA_CMD{
        __FIELD(FIRST_DATA_BYTE, 0, 0, 0x40044010)
        __FIELD(RESTART, 0, 0, 0x40044010)
        __FIELD(STOP, 0, 0, 0x40044010)
        __FIELD(CMD, 0, 0, 0x40044010)
        __FIELD(DAT, 0, 0, 0x40044010)
    }
    namespace IC_SS_SCL_HCNT{
        __FIELD(IC_SS_SCL_HCNT, 0, 0, 0x40044014)
    }
    namespace IC_SS_SCL_LCNT{
        __FIELD(IC_SS_SCL_LCNT, 0, 0, 0x40044018)
    }
    namespace IC_FS_SCL_HCNT{
        __FIELD(IC_FS_SCL_HCNT, 0, 0, 0x4004401c)
    }
    namespace IC_FS_SCL_LCNT{
        __FIELD(IC_FS_SCL_LCNT, 0, 0, 0x40044020)
    }
    namespace IC_INTR_STAT{
        __FIELD(R_RESTART_DET, 0, 0, 0x4004402c)
        __FIELD(R_GEN_CALL, 0, 0, 0x4004402c)
        __FIELD(R_START_DET, 0, 0, 0x4004402c)
        __FIELD(R_STOP_DET, 0, 0, 0x4004402c)
        __FIELD(R_ACTIVITY, 0, 0, 0x4004402c)
        __FIELD(R_RX_DONE, 0, 0, 0x4004402c)
        __FIELD(R_TX_ABRT, 0, 0, 0x4004402c)
        __FIELD(R_RD_REQ, 0, 0, 0x4004402c)
        __FIELD(R_TX_EMPTY, 0, 0, 0x4004402c)
        __FIELD(R_TX_OVER, 0, 0, 0x4004402c)
        __FIELD(R_RX_FULL, 0, 0, 0x4004402c)
        __FIELD(R_RX_OVER, 0, 0, 0x4004402c)
        __FIELD(R_RX_UNDER, 0, 0, 0x4004402c)
    }
    namespace IC_INTR_MASK{
        __FIELD(M_RESTART_DET, 0, 0, 0x40044030)
        __FIELD(M_GEN_CALL, 0, 0, 0x40044030)
        __FIELD(M_START_DET, 0, 0, 0x40044030)
        __FIELD(M_STOP_DET, 0, 0, 0x40044030)
        __FIELD(M_ACTIVITY, 0, 0, 0x40044030)
        __FIELD(M_RX_DONE, 0, 0, 0x40044030)
        __FIELD(M_TX_ABRT, 0, 0, 0x40044030)
        __FIELD(M_RD_REQ, 0, 0, 0x40044030)
        __FIELD(M_TX_EMPTY, 0, 0, 0x40044030)
        __FIELD(M_TX_OVER, 0, 0, 0x40044030)
        __FIELD(M_RX_FULL, 0, 0, 0x40044030)
        __FIELD(M_RX_OVER, 0, 0, 0x40044030)
        __FIELD(M_RX_UNDER, 0, 0, 0x40044030)
    }
    namespace IC_RAW_INTR_STAT{
        __FIELD(RESTART_DET, 0, 0, 0x40044034)
        __FIELD(GEN_CALL, 0, 0, 0x40044034)
        __FIELD(START_DET, 0, 0, 0x40044034)
        __FIELD(STOP_DET, 0, 0, 0x40044034)
        __FIELD(ACTIVITY, 0, 0, 0x40044034)
        __FIELD(RX_DONE, 0, 0, 0x40044034)
        __FIELD(TX_ABRT, 0, 0, 0x40044034)
        __FIELD(RD_REQ, 0, 0, 0x40044034)
        __FIELD(TX_EMPTY, 0, 0, 0x40044034)
        __FIELD(TX_OVER, 0, 0, 0x40044034)
        __FIELD(RX_FULL, 0, 0, 0x40044034)
        __FIELD(RX_OVER, 0, 0, 0x40044034)
        __FIELD(RX_UNDER, 0, 0, 0x40044034)
    }
    namespace IC_RX_TL{
        __FIELD(RX_TL, 0, 0, 0x40044038)
    }
    namespace IC_TX_TL{
        __FIELD(TX_TL, 0, 0, 0x4004403c)
    }
    namespace IC_CLR_INTR{
        __FIELD(CLR_INTR, 0, 0, 0x40044040)
    }
    namespace IC_CLR_RX_UNDER{
        __FIELD(CLR_RX_UNDER, 0, 0, 0x40044044)
    }
    namespace IC_CLR_RX_OVER{
        __FIELD(CLR_RX_OVER, 0, 0, 0x40044048)
    }
    namespace IC_CLR_TX_OVER{
        __FIELD(CLR_TX_OVER, 0, 0, 0x4004404c)
    }
    namespace IC_CLR_RD_REQ{
        __FIELD(CLR_RD_REQ, 0, 0, 0x40044050)
    }
    namespace IC_CLR_TX_ABRT{
        __FIELD(CLR_TX_ABRT, 0, 0, 0x40044054)
    }
    namespace IC_CLR_RX_DONE{
        __FIELD(CLR_RX_DONE, 0, 0, 0x40044058)
    }
    namespace IC_CLR_ACTIVITY{
        __FIELD(CLR_ACTIVITY, 0, 0, 0x4004405c)
    }
    namespace IC_CLR_STOP_DET{
        __FIELD(CLR_STOP_DET, 0, 0, 0x40044060)
    }
    namespace IC_CLR_START_DET{
        __FIELD(CLR_START_DET, 0, 0, 0x40044064)
    }
    namespace IC_CLR_GEN_CALL{
        __FIELD(CLR_GEN_CALL, 0, 0, 0x40044068)
    }
    namespace IC_ENABLE{
        __FIELD(TX_CMD_BLOCK, 0, 0, 0x4004406c)
        __FIELD(ABORT, 0, 0, 0x4004406c)
        __FIELD(ENABLE, 0, 0, 0x4004406c)
    }
    namespace IC_STATUS{
        __FIELD(SLV_ACTIVITY, 0, 0, 0x40044070)
        __FIELD(MST_ACTIVITY, 0, 0, 0x40044070)
        __FIELD(RFF, 0, 0, 0x40044070)
        __FIELD(RFNE, 0, 0, 0x40044070)
        __FIELD(TFE, 0, 0, 0x40044070)
        __FIELD(TFNF, 0, 0, 0x40044070)
        __FIELD(ACTIVITY, 0, 0, 0x40044070)
    }
    namespace IC_TXFLR{
        __FIELD(TXFLR, 0, 0, 0x40044074)
    }
    namespace IC_RXFLR{
        __FIELD(RXFLR, 0, 0, 0x40044078)
    }
    namespace IC_SDA_HOLD{
        __FIELD(IC_SDA_RX_HOLD, 0, 0, 0x4004407c)
        __FIELD(IC_SDA_TX_HOLD, 0, 0, 0x4004407c)
    }
    namespace IC_TX_ABRT_SOURCE{
        __FIELD(TX_FLUSH_CNT, 0, 0, 0x40044080)
        __FIELD(ABRT_USER_ABRT, 0, 0, 0x40044080)
        __FIELD(ABRT_SLVRD_INTX, 0, 0, 0x40044080)
        __FIELD(ABRT_SLV_ARBLOST, 0, 0, 0x40044080)
        __FIELD(ABRT_SLVFLUSH_TXFIFO, 0, 0, 0x40044080)
        __FIELD(ARB_LOST, 0, 0, 0x40044080)
        __FIELD(ABRT_MASTER_DIS, 0, 0, 0x40044080)
        __FIELD(ABRT_10B_RD_NORSTRT, 0, 0, 0x40044080)
        __FIELD(ABRT_SBYTE_NORSTRT, 0, 0, 0x40044080)
        __FIELD(ABRT_HS_NORSTRT, 0, 0, 0x40044080)
        __FIELD(ABRT_SBYTE_ACKDET, 0, 0, 0x40044080)
        __FIELD(ABRT_HS_ACKDET, 0, 0, 0x40044080)
        __FIELD(ABRT_GCALL_READ, 0, 0, 0x40044080)
        __FIELD(ABRT_GCALL_NOACK, 0, 0, 0x40044080)
        __FIELD(ABRT_TXDATA_NOACK, 0, 0, 0x40044080)
        __FIELD(ABRT_10ADDR2_NOACK, 0, 0, 0x40044080)
        __FIELD(ABRT_10ADDR1_NOACK, 0, 0, 0x40044080)
        __FIELD(ABRT_7B_ADDR_NOACK, 0, 0, 0x40044080)
    }
    namespace IC_SLV_DATA_NACK_ONLY{
        __FIELD(NACK, 0, 0, 0x40044084)
    }
    namespace IC_DMA_CR{
        __FIELD(TDMAE, 0, 0, 0x40044088)
        __FIELD(RDMAE, 0, 0, 0x40044088)
    }
    namespace IC_DMA_TDLR{
        __FIELD(DMATDL, 0, 0, 0x4004408c)
    }
    namespace IC_DMA_RDLR{
        __FIELD(DMARDL, 0, 0, 0x40044090)
    }
    namespace IC_SDA_SETUP{
        __FIELD(SDA_SETUP, 0, 0, 0x40044094)
    }
    namespace IC_ACK_GENERAL_CALL{
        __FIELD(ACK_GEN_CALL, 0, 0, 0x40044098)
    }
    namespace IC_ENABLE_STATUS{
        __FIELD(SLV_RX_DATA_LOST, 0, 0, 0x4004409c)
        __FIELD(SLV_DISABLED_WHILE_BUSY, 0, 0, 0x4004409c)
        __FIELD(IC_EN, 0, 0, 0x4004409c)
    }
    namespace IC_FS_SPKLEN{
        __FIELD(IC_FS_SPKLEN, 0, 0, 0x400440a0)
    }
    namespace IC_CLR_RESTART_DET{
        __FIELD(CLR_RESTART_DET, 0, 0, 0x400440a8)
    }
    namespace IC_COMP_PARAM_1{
        __FIELD(TX_BUFFER_DEPTH, 0, 0, 0x400440f4)
        __FIELD(RX_BUFFER_DEPTH, 0, 0, 0x400440f4)
        __FIELD(ADD_ENCODED_PARAMS, 0, 0, 0x400440f4)
        __FIELD(HAS_DMA, 0, 0, 0x400440f4)
        __FIELD(INTR_IO, 0, 0, 0x400440f4)
        __FIELD(HC_COUNT_VALUES, 0, 0, 0x400440f4)
        __FIELD(MAX_SPEED_MODE, 0, 0, 0x400440f4)
        __FIELD(APB_DATA_WIDTH, 0, 0, 0x400440f4)
    }
    namespace IC_COMP_VERSION{
        __FIELD(IC_COMP_VERSION, 0, 0, 0x400440f8)
    }
    namespace IC_COMP_TYPE{
        __FIELD(IC_COMP_TYPE, 0, 0, 0x400440fc)
    }
}

namespace I2C1{
    namespace IC_CON{
        __FIELD(STOP_DET_IF_MASTER_ACTIVE, 0, 0, 0x40048000)
        __FIELD(RX_FIFO_FULL_HLD_CTRL, 0, 0, 0x40048000)
        __FIELD(TX_EMPTY_CTRL, 0, 0, 0x40048000)
        __FIELD(STOP_DET_IFADDRESSED, 0, 0, 0x40048000)
        __FIELD(IC_SLAVE_DISABLE, 0, 0, 0x40048000)
        __FIELD(IC_RESTART_EN, 0, 0, 0x40048000)
        __FIELD(IC_10BITADDR_MASTER, 0, 0, 0x40048000)
        __FIELD(IC_10BITADDR_SLAVE, 0, 0, 0x40048000)
        __FIELD(SPEED, 0, 0, 0x40048000)
        __FIELD(MASTER_MODE, 0, 0, 0x40048000)
    }
    namespace IC_TAR{
        __FIELD(SPECIAL, 0, 0, 0x40048004)
        __FIELD(GC_OR_START, 0, 0, 0x40048004)
        __FIELD(IC_TAR, 0, 0, 0x40048004)
    }
    namespace IC_SAR{
        __FIELD(IC_SAR, 0, 0, 0x40048008)
    }
    namespace IC_DATA_CMD{
        __FIELD(FIRST_DATA_BYTE, 0, 0, 0x40048010)
        __FIELD(RESTART, 0, 0, 0x40048010)
        __FIELD(STOP, 0, 0, 0x40048010)
        __FIELD(CMD, 0, 0, 0x40048010)
        __FIELD(DAT, 0, 0, 0x40048010)
    }
    namespace IC_SS_SCL_HCNT{
        __FIELD(IC_SS_SCL_HCNT, 0, 0, 0x40048014)
    }
    namespace IC_SS_SCL_LCNT{
        __FIELD(IC_SS_SCL_LCNT, 0, 0, 0x40048018)
    }
    namespace IC_FS_SCL_HCNT{
        __FIELD(IC_FS_SCL_HCNT, 0, 0, 0x4004801c)
    }
    namespace IC_FS_SCL_LCNT{
        __FIELD(IC_FS_SCL_LCNT, 0, 0, 0x40048020)
    }
    namespace IC_INTR_STAT{
        __FIELD(R_RESTART_DET, 0, 0, 0x4004802c)
        __FIELD(R_GEN_CALL, 0, 0, 0x4004802c)
        __FIELD(R_START_DET, 0, 0, 0x4004802c)
        __FIELD(R_STOP_DET, 0, 0, 0x4004802c)
        __FIELD(R_ACTIVITY, 0, 0, 0x4004802c)
        __FIELD(R_RX_DONE, 0, 0, 0x4004802c)
        __FIELD(R_TX_ABRT, 0, 0, 0x4004802c)
        __FIELD(R_RD_REQ, 0, 0, 0x4004802c)
        __FIELD(R_TX_EMPTY, 0, 0, 0x4004802c)
        __FIELD(R_TX_OVER, 0, 0, 0x4004802c)
        __FIELD(R_RX_FULL, 0, 0, 0x4004802c)
        __FIELD(R_RX_OVER, 0, 0, 0x4004802c)
        __FIELD(R_RX_UNDER, 0, 0, 0x4004802c)
    }
    namespace IC_INTR_MASK{
        __FIELD(M_RESTART_DET, 0, 0, 0x40048030)
        __FIELD(M_GEN_CALL, 0, 0, 0x40048030)
        __FIELD(M_START_DET, 0, 0, 0x40048030)
        __FIELD(M_STOP_DET, 0, 0, 0x40048030)
        __FIELD(M_ACTIVITY, 0, 0, 0x40048030)
        __FIELD(M_RX_DONE, 0, 0, 0x40048030)
        __FIELD(M_TX_ABRT, 0, 0, 0x40048030)
        __FIELD(M_RD_REQ, 0, 0, 0x40048030)
        __FIELD(M_TX_EMPTY, 0, 0, 0x40048030)
        __FIELD(M_TX_OVER, 0, 0, 0x40048030)
        __FIELD(M_RX_FULL, 0, 0, 0x40048030)
        __FIELD(M_RX_OVER, 0, 0, 0x40048030)
        __FIELD(M_RX_UNDER, 0, 0, 0x40048030)
    }
    namespace IC_RAW_INTR_STAT{
        __FIELD(RESTART_DET, 0, 0, 0x40048034)
        __FIELD(GEN_CALL, 0, 0, 0x40048034)
        __FIELD(START_DET, 0, 0, 0x40048034)
        __FIELD(STOP_DET, 0, 0, 0x40048034)
        __FIELD(ACTIVITY, 0, 0, 0x40048034)
        __FIELD(RX_DONE, 0, 0, 0x40048034)
        __FIELD(TX_ABRT, 0, 0, 0x40048034)
        __FIELD(RD_REQ, 0, 0, 0x40048034)
        __FIELD(TX_EMPTY, 0, 0, 0x40048034)
        __FIELD(TX_OVER, 0, 0, 0x40048034)
        __FIELD(RX_FULL, 0, 0, 0x40048034)
        __FIELD(RX_OVER, 0, 0, 0x40048034)
        __FIELD(RX_UNDER, 0, 0, 0x40048034)
    }
    namespace IC_RX_TL{
        __FIELD(RX_TL, 0, 0, 0x40048038)
    }
    namespace IC_TX_TL{
        __FIELD(TX_TL, 0, 0, 0x4004803c)
    }
    namespace IC_CLR_INTR{
        __FIELD(CLR_INTR, 0, 0, 0x40048040)
    }
    namespace IC_CLR_RX_UNDER{
        __FIELD(CLR_RX_UNDER, 0, 0, 0x40048044)
    }
    namespace IC_CLR_RX_OVER{
        __FIELD(CLR_RX_OVER, 0, 0, 0x40048048)
    }
    namespace IC_CLR_TX_OVER{
        __FIELD(CLR_TX_OVER, 0, 0, 0x4004804c)
    }
    namespace IC_CLR_RD_REQ{
        __FIELD(CLR_RD_REQ, 0, 0, 0x40048050)
    }
    namespace IC_CLR_TX_ABRT{
        __FIELD(CLR_TX_ABRT, 0, 0, 0x40048054)
    }
    namespace IC_CLR_RX_DONE{
        __FIELD(CLR_RX_DONE, 0, 0, 0x40048058)
    }
    namespace IC_CLR_ACTIVITY{
        __FIELD(CLR_ACTIVITY, 0, 0, 0x4004805c)
    }
    namespace IC_CLR_STOP_DET{
        __FIELD(CLR_STOP_DET, 0, 0, 0x40048060)
    }
    namespace IC_CLR_START_DET{
        __FIELD(CLR_START_DET, 0, 0, 0x40048064)
    }
    namespace IC_CLR_GEN_CALL{
        __FIELD(CLR_GEN_CALL, 0, 0, 0x40048068)
    }
    namespace IC_ENABLE{
        __FIELD(TX_CMD_BLOCK, 0, 0, 0x4004806c)
        __FIELD(ABORT, 0, 0, 0x4004806c)
        __FIELD(ENABLE, 0, 0, 0x4004806c)
    }
    namespace IC_STATUS{
        __FIELD(SLV_ACTIVITY, 0, 0, 0x40048070)
        __FIELD(MST_ACTIVITY, 0, 0, 0x40048070)
        __FIELD(RFF, 0, 0, 0x40048070)
        __FIELD(RFNE, 0, 0, 0x40048070)
        __FIELD(TFE, 0, 0, 0x40048070)
        __FIELD(TFNF, 0, 0, 0x40048070)
        __FIELD(ACTIVITY, 0, 0, 0x40048070)
    }
    namespace IC_TXFLR{
        __FIELD(TXFLR, 0, 0, 0x40048074)
    }
    namespace IC_RXFLR{
        __FIELD(RXFLR, 0, 0, 0x40048078)
    }
    namespace IC_SDA_HOLD{
        __FIELD(IC_SDA_RX_HOLD, 0, 0, 0x4004807c)
        __FIELD(IC_SDA_TX_HOLD, 0, 0, 0x4004807c)
    }
    namespace IC_TX_ABRT_SOURCE{
        __FIELD(TX_FLUSH_CNT, 0, 0, 0x40048080)
        __FIELD(ABRT_USER_ABRT, 0, 0, 0x40048080)
        __FIELD(ABRT_SLVRD_INTX, 0, 0, 0x40048080)
        __FIELD(ABRT_SLV_ARBLOST, 0, 0, 0x40048080)
        __FIELD(ABRT_SLVFLUSH_TXFIFO, 0, 0, 0x40048080)
        __FIELD(ARB_LOST, 0, 0, 0x40048080)
        __FIELD(ABRT_MASTER_DIS, 0, 0, 0x40048080)
        __FIELD(ABRT_10B_RD_NORSTRT, 0, 0, 0x40048080)
        __FIELD(ABRT_SBYTE_NORSTRT, 0, 0, 0x40048080)
        __FIELD(ABRT_HS_NORSTRT, 0, 0, 0x40048080)
        __FIELD(ABRT_SBYTE_ACKDET, 0, 0, 0x40048080)
        __FIELD(ABRT_HS_ACKDET, 0, 0, 0x40048080)
        __FIELD(ABRT_GCALL_READ, 0, 0, 0x40048080)
        __FIELD(ABRT_GCALL_NOACK, 0, 0, 0x40048080)
        __FIELD(ABRT_TXDATA_NOACK, 0, 0, 0x40048080)
        __FIELD(ABRT_10ADDR2_NOACK, 0, 0, 0x40048080)
        __FIELD(ABRT_10ADDR1_NOACK, 0, 0, 0x40048080)
        __FIELD(ABRT_7B_ADDR_NOACK, 0, 0, 0x40048080)
    }
    namespace IC_SLV_DATA_NACK_ONLY{
        __FIELD(NACK, 0, 0, 0x40048084)
    }
    namespace IC_DMA_CR{
        __FIELD(TDMAE, 0, 0, 0x40048088)
        __FIELD(RDMAE, 0, 0, 0x40048088)
    }
    namespace IC_DMA_TDLR{
        __FIELD(DMATDL, 0, 0, 0x4004808c)
    }
    namespace IC_DMA_RDLR{
        __FIELD(DMARDL, 0, 0, 0x40048090)
    }
    namespace IC_SDA_SETUP{
        __FIELD(SDA_SETUP, 0, 0, 0x40048094)
    }
    namespace IC_ACK_GENERAL_CALL{
        __FIELD(ACK_GEN_CALL, 0, 0, 0x40048098)
    }
    namespace IC_ENABLE_STATUS{
        __FIELD(SLV_RX_DATA_LOST, 0, 0, 0x4004809c)
        __FIELD(SLV_DISABLED_WHILE_BUSY, 0, 0, 0x4004809c)
        __FIELD(IC_EN, 0, 0, 0x4004809c)
    }
    namespace IC_FS_SPKLEN{
        __FIELD(IC_FS_SPKLEN, 0, 0, 0x400480a0)
    }
    namespace IC_CLR_RESTART_DET{
        __FIELD(CLR_RESTART_DET, 0, 0, 0x400480a8)
    }
    namespace IC_COMP_PARAM_1{
        __FIELD(TX_BUFFER_DEPTH, 0, 0, 0x400480f4)
        __FIELD(RX_BUFFER_DEPTH, 0, 0, 0x400480f4)
        __FIELD(ADD_ENCODED_PARAMS, 0, 0, 0x400480f4)
        __FIELD(HAS_DMA, 0, 0, 0x400480f4)
        __FIELD(INTR_IO, 0, 0, 0x400480f4)
        __FIELD(HC_COUNT_VALUES, 0, 0, 0x400480f4)
        __FIELD(MAX_SPEED_MODE, 0, 0, 0x400480f4)
        __FIELD(APB_DATA_WIDTH, 0, 0, 0x400480f4)
    }
    namespace IC_COMP_VERSION{
        __FIELD(IC_COMP_VERSION, 0, 0, 0x400480f8)
    }
    namespace IC_COMP_TYPE{
        __FIELD(IC_COMP_TYPE, 0, 0, 0x400480fc)
    }
}

namespace ADC{
    namespace CS{
        __FIELD(RROBIN, 0, 0, 0x4004c000)
        __FIELD(AINSEL, 0, 0, 0x4004c000)
        __FIELD(ERR_STICKY, 0, 0, 0x4004c000)
        __FIELD(ERR, 0, 0, 0x4004c000)
        __FIELD(READY, 0, 0, 0x4004c000)
        __FIELD(START_MANY, 0, 0, 0x4004c000)
        __FIELD(START_ONCE, 0, 0, 0x4004c000)
        __FIELD(TS_EN, 0, 0, 0x4004c000)
        __FIELD(EN, 0, 0, 0x4004c000)
    }
    namespace RESULT{
        __FIELD(RESULT, 0, 0, 0x4004c004)
    }
    namespace FCS{
        __FIELD(THRESH, 0, 0, 0x4004c008)
        __FIELD(LEVEL, 0, 0, 0x4004c008)
        __FIELD(OVER, 0, 0, 0x4004c008)
        __FIELD(UNDER, 0, 0, 0x4004c008)
        __FIELD(FULL, 0, 0, 0x4004c008)
        __FIELD(EMPTY, 0, 0, 0x4004c008)
        __FIELD(DREQ_EN, 0, 0, 0x4004c008)
        __FIELD(ERR, 0, 0, 0x4004c008)
        __FIELD(SHIFT, 0, 0, 0x4004c008)
        __FIELD(EN, 0, 0, 0x4004c008)
    }
    namespace FIFO{
        __FIELD(ERR, 0, 0, 0x4004c00c)
        __FIELD(VAL, 0, 0, 0x4004c00c)
    }
    namespace DIV{
        __FIELD(INT, 0, 0, 0x4004c010)
        __FIELD(FRAC, 0, 0, 0x4004c010)
    }
    namespace INTR{
        __FIELD(FIFO, 0, 0, 0x4004c014)
    }
    namespace INTE{
        __FIELD(FIFO, 0, 0, 0x4004c018)
    }
    namespace INTF{
        __FIELD(FIFO, 0, 0, 0x4004c01c)
    }
    namespace INTS{
        __FIELD(FIFO, 0, 0, 0x4004c020)
    }
}

namespace PWM{
    namespace CH0_CSR{
        __FIELD(PH_ADV, 0, 0, 0x40050000)
        __FIELD(PH_RET, 0, 0, 0x40050000)
        __FIELD(DIVMODE, 0, 0, 0x40050000)
        __FIELD(B_INV, 0, 0, 0x40050000)
        __FIELD(A_INV, 0, 0, 0x40050000)
        __FIELD(PH_CORRECT, 0, 0, 0x40050000)
        __FIELD(EN, 0, 0, 0x40050000)
    }
    namespace CH0_DIV{
        __FIELD(INT, 0, 0, 0x40050004)
        __FIELD(FRAC, 0, 0, 0x40050004)
    }
    namespace CH0_CTR{
        __FIELD(CH0_CTR, 0, 0, 0x40050008)
    }
    namespace CH0_CC{
        __FIELD(B, 0, 0, 0x4005000c)
        __FIELD(A, 0, 0, 0x4005000c)
    }
    namespace CH0_TOP{
        __FIELD(CH0_TOP, 0, 0, 0x40050010)
    }
    namespace CH1_CSR{
        __FIELD(PH_ADV, 0, 0, 0x40050014)
        __FIELD(PH_RET, 0, 0, 0x40050014)
        __FIELD(DIVMODE, 0, 0, 0x40050014)
        __FIELD(B_INV, 0, 0, 0x40050014)
        __FIELD(A_INV, 0, 0, 0x40050014)
        __FIELD(PH_CORRECT, 0, 0, 0x40050014)
        __FIELD(EN, 0, 0, 0x40050014)
    }
    namespace CH1_DIV{
        __FIELD(INT, 0, 0, 0x40050018)
        __FIELD(FRAC, 0, 0, 0x40050018)
    }
    namespace CH1_CTR{
        __FIELD(CH1_CTR, 0, 0, 0x4005001c)
    }
    namespace CH1_CC{
        __FIELD(B, 0, 0, 0x40050020)
        __FIELD(A, 0, 0, 0x40050020)
    }
    namespace CH1_TOP{
        __FIELD(CH1_TOP, 0, 0, 0x40050024)
    }
    namespace CH2_CSR{
        __FIELD(PH_ADV, 0, 0, 0x40050028)
        __FIELD(PH_RET, 0, 0, 0x40050028)
        __FIELD(DIVMODE, 0, 0, 0x40050028)
        __FIELD(B_INV, 0, 0, 0x40050028)
        __FIELD(A_INV, 0, 0, 0x40050028)
        __FIELD(PH_CORRECT, 0, 0, 0x40050028)
        __FIELD(EN, 0, 0, 0x40050028)
    }
    namespace CH2_DIV{
        __FIELD(INT, 0, 0, 0x4005002c)
        __FIELD(FRAC, 0, 0, 0x4005002c)
    }
    namespace CH2_CTR{
        __FIELD(CH2_CTR, 0, 0, 0x40050030)
    }
    namespace CH2_CC{
        __FIELD(B, 0, 0, 0x40050034)
        __FIELD(A, 0, 0, 0x40050034)
    }
    namespace CH2_TOP{
        __FIELD(CH2_TOP, 0, 0, 0x40050038)
    }
    namespace CH3_CSR{
        __FIELD(PH_ADV, 0, 0, 0x4005003c)
        __FIELD(PH_RET, 0, 0, 0x4005003c)
        __FIELD(DIVMODE, 0, 0, 0x4005003c)
        __FIELD(B_INV, 0, 0, 0x4005003c)
        __FIELD(A_INV, 0, 0, 0x4005003c)
        __FIELD(PH_CORRECT, 0, 0, 0x4005003c)
        __FIELD(EN, 0, 0, 0x4005003c)
    }
    namespace CH3_DIV{
        __FIELD(INT, 0, 0, 0x40050040)
        __FIELD(FRAC, 0, 0, 0x40050040)
    }
    namespace CH3_CTR{
        __FIELD(CH3_CTR, 0, 0, 0x40050044)
    }
    namespace CH3_CC{
        __FIELD(B, 0, 0, 0x40050048)
        __FIELD(A, 0, 0, 0x40050048)
    }
    namespace CH3_TOP{
        __FIELD(CH3_TOP, 0, 0, 0x4005004c)
    }
    namespace CH4_CSR{
        __FIELD(PH_ADV, 0, 0, 0x40050050)
        __FIELD(PH_RET, 0, 0, 0x40050050)
        __FIELD(DIVMODE, 0, 0, 0x40050050)
        __FIELD(B_INV, 0, 0, 0x40050050)
        __FIELD(A_INV, 0, 0, 0x40050050)
        __FIELD(PH_CORRECT, 0, 0, 0x40050050)
        __FIELD(EN, 0, 0, 0x40050050)
    }
    namespace CH4_DIV{
        __FIELD(INT, 0, 0, 0x40050054)
        __FIELD(FRAC, 0, 0, 0x40050054)
    }
    namespace CH4_CTR{
        __FIELD(CH4_CTR, 0, 0, 0x40050058)
    }
    namespace CH4_CC{
        __FIELD(B, 0, 0, 0x4005005c)
        __FIELD(A, 0, 0, 0x4005005c)
    }
    namespace CH4_TOP{
        __FIELD(CH4_TOP, 0, 0, 0x40050060)
    }
    namespace CH5_CSR{
        __FIELD(PH_ADV, 0, 0, 0x40050064)
        __FIELD(PH_RET, 0, 0, 0x40050064)
        __FIELD(DIVMODE, 0, 0, 0x40050064)
        __FIELD(B_INV, 0, 0, 0x40050064)
        __FIELD(A_INV, 0, 0, 0x40050064)
        __FIELD(PH_CORRECT, 0, 0, 0x40050064)
        __FIELD(EN, 0, 0, 0x40050064)
    }
    namespace CH5_DIV{
        __FIELD(INT, 0, 0, 0x40050068)
        __FIELD(FRAC, 0, 0, 0x40050068)
    }
    namespace CH5_CTR{
        __FIELD(CH5_CTR, 0, 0, 0x4005006c)
    }
    namespace CH5_CC{
        __FIELD(B, 0, 0, 0x40050070)
        __FIELD(A, 0, 0, 0x40050070)
    }
    namespace CH5_TOP{
        __FIELD(CH5_TOP, 0, 0, 0x40050074)
    }
    namespace CH6_CSR{
        __FIELD(PH_ADV, 0, 0, 0x40050078)
        __FIELD(PH_RET, 0, 0, 0x40050078)
        __FIELD(DIVMODE, 0, 0, 0x40050078)
        __FIELD(B_INV, 0, 0, 0x40050078)
        __FIELD(A_INV, 0, 0, 0x40050078)
        __FIELD(PH_CORRECT, 0, 0, 0x40050078)
        __FIELD(EN, 0, 0, 0x40050078)
    }
    namespace CH6_DIV{
        __FIELD(INT, 0, 0, 0x4005007c)
        __FIELD(FRAC, 0, 0, 0x4005007c)
    }
    namespace CH6_CTR{
        __FIELD(CH6_CTR, 0, 0, 0x40050080)
    }
    namespace CH6_CC{
        __FIELD(B, 0, 0, 0x40050084)
        __FIELD(A, 0, 0, 0x40050084)
    }
    namespace CH6_TOP{
        __FIELD(CH6_TOP, 0, 0, 0x40050088)
    }
    namespace CH7_CSR{
        __FIELD(PH_ADV, 0, 0, 0x4005008c)
        __FIELD(PH_RET, 0, 0, 0x4005008c)
        __FIELD(DIVMODE, 0, 0, 0x4005008c)
        __FIELD(B_INV, 0, 0, 0x4005008c)
        __FIELD(A_INV, 0, 0, 0x4005008c)
        __FIELD(PH_CORRECT, 0, 0, 0x4005008c)
        __FIELD(EN, 0, 0, 0x4005008c)
    }
    namespace CH7_DIV{
        __FIELD(INT, 0, 0, 0x40050090)
        __FIELD(FRAC, 0, 0, 0x40050090)
    }
    namespace CH7_CTR{
        __FIELD(CH7_CTR, 0, 0, 0x40050094)
    }
    namespace CH7_CC{
        __FIELD(B, 0, 0, 0x40050098)
        __FIELD(A, 0, 0, 0x40050098)
    }
    namespace CH7_TOP{
        __FIELD(CH7_TOP, 0, 0, 0x4005009c)
    }
    namespace EN{
        __FIELD(CH7, 0, 0, 0x400500a0)
        __FIELD(CH6, 0, 0, 0x400500a0)
        __FIELD(CH5, 0, 0, 0x400500a0)
        __FIELD(CH4, 0, 0, 0x400500a0)
        __FIELD(CH3, 0, 0, 0x400500a0)
        __FIELD(CH2, 0, 0, 0x400500a0)
        __FIELD(CH1, 0, 0, 0x400500a0)
        __FIELD(CH0, 0, 0, 0x400500a0)
    }
    namespace INTR{
        __FIELD(CH7, 0, 0, 0x400500a4)
        __FIELD(CH6, 0, 0, 0x400500a4)
        __FIELD(CH5, 0, 0, 0x400500a4)
        __FIELD(CH4, 0, 0, 0x400500a4)
        __FIELD(CH3, 0, 0, 0x400500a4)
        __FIELD(CH2, 0, 0, 0x400500a4)
        __FIELD(CH1, 0, 0, 0x400500a4)
        __FIELD(CH0, 0, 0, 0x400500a4)
    }
    namespace INTE{
        __FIELD(CH7, 0, 0, 0x400500a8)
        __FIELD(CH6, 0, 0, 0x400500a8)
        __FIELD(CH5, 0, 0, 0x400500a8)
        __FIELD(CH4, 0, 0, 0x400500a8)
        __FIELD(CH3, 0, 0, 0x400500a8)
        __FIELD(CH2, 0, 0, 0x400500a8)
        __FIELD(CH1, 0, 0, 0x400500a8)
        __FIELD(CH0, 0, 0, 0x400500a8)
    }
    namespace INTF{
        __FIELD(CH7, 0, 0, 0x400500ac)
        __FIELD(CH6, 0, 0, 0x400500ac)
        __FIELD(CH5, 0, 0, 0x400500ac)
        __FIELD(CH4, 0, 0, 0x400500ac)
        __FIELD(CH3, 0, 0, 0x400500ac)
        __FIELD(CH2, 0, 0, 0x400500ac)
        __FIELD(CH1, 0, 0, 0x400500ac)
        __FIELD(CH0, 0, 0, 0x400500ac)
    }
    namespace INTS{
        __FIELD(CH7, 0, 0, 0x400500b0)
        __FIELD(CH6, 0, 0, 0x400500b0)
        __FIELD(CH5, 0, 0, 0x400500b0)
        __FIELD(CH4, 0, 0, 0x400500b0)
        __FIELD(CH3, 0, 0, 0x400500b0)
        __FIELD(CH2, 0, 0, 0x400500b0)
        __FIELD(CH1, 0, 0, 0x400500b0)
        __FIELD(CH0, 0, 0, 0x400500b0)
    }
}

namespace TIMER{
    namespace TIMEHW{
    }
    namespace TIMELW{
    }
    namespace TIMEHR{
    }
    namespace TIMELR{
    }
    namespace ALARM0{
    }
    namespace ALARM1{
    }
    namespace ALARM2{
    }
    namespace ALARM3{
    }
    namespace ARMED{
        __FIELD(ARMED, 0, 0, 0x40054020)
    }
    namespace TIMERAWH{
    }
    namespace TIMERAWL{
    }
    namespace DBGPAUSE{
        __FIELD(DBG1, 0, 0, 0x4005402c)
        __FIELD(DBG0, 0, 0, 0x4005402c)
    }
    namespace PAUSE{
        __FIELD(PAUSE, 0, 0, 0x40054030)
    }
    namespace INTR{
        __FIELD(ALARM_3, 0, 0, 0x40054034)
        __FIELD(ALARM_2, 0, 0, 0x40054034)
        __FIELD(ALARM_1, 0, 0, 0x40054034)
        __FIELD(ALARM_0, 0, 0, 0x40054034)
    }
    namespace INTE{
        __FIELD(ALARM_3, 0, 0, 0x40054038)
        __FIELD(ALARM_2, 0, 0, 0x40054038)
        __FIELD(ALARM_1, 0, 0, 0x40054038)
        __FIELD(ALARM_0, 0, 0, 0x40054038)
    }
    namespace INTF{
        __FIELD(ALARM_3, 0, 0, 0x4005403c)
        __FIELD(ALARM_2, 0, 0, 0x4005403c)
        __FIELD(ALARM_1, 0, 0, 0x4005403c)
        __FIELD(ALARM_0, 0, 0, 0x4005403c)
    }
    namespace INTS{
        __FIELD(ALARM_3, 0, 0, 0x40054040)
        __FIELD(ALARM_2, 0, 0, 0x40054040)
        __FIELD(ALARM_1, 0, 0, 0x40054040)
        __FIELD(ALARM_0, 0, 0, 0x40054040)
    }
}

namespace WATCHDOG{
    namespace CTRL{
        __FIELD(TRIGGER, 0, 0, 0x40058000)
        __FIELD(ENABLE, 0, 0, 0x40058000)
        __FIELD(PAUSE_DBG1, 0, 0, 0x40058000)
        __FIELD(PAUSE_DBG0, 0, 0, 0x40058000)
        __FIELD(PAUSE_JTAG, 0, 0, 0x40058000)
        __FIELD(TIME, 0, 0, 0x40058000)
    }
    namespace LOAD{
        __FIELD(LOAD, 0, 0, 0x40058004)
    }
    namespace REASON{
        __FIELD(FORCE, 0, 0, 0x40058008)
        __FIELD(TIMER, 0, 0, 0x40058008)
    }
    namespace SCRATCH0{
    }
    namespace SCRATCH1{
    }
    namespace SCRATCH2{
    }
    namespace SCRATCH3{
    }
    namespace SCRATCH4{
    }
    namespace SCRATCH5{
    }
    namespace SCRATCH6{
    }
    namespace SCRATCH7{
    }
    namespace TICK{
        __FIELD(COUNT, 0, 0, 0x4005802c)
        __FIELD(RUNNING, 0, 0, 0x4005802c)
        __FIELD(ENABLE, 0, 0, 0x4005802c)
        __FIELD(CYCLES, 0, 0, 0x4005802c)
    }
}

namespace RTC{
    namespace CLKDIV_M1{
        __FIELD(CLKDIV_M1, 0, 0, 0x4005c000)
    }
    namespace SETUP_0{
        __FIELD(YEAR, 0, 0, 0x4005c004)
        __FIELD(MONTH, 0, 0, 0x4005c004)
        __FIELD(DAY, 0, 0, 0x4005c004)
    }
    namespace SETUP_1{
        __FIELD(DOTW, 0, 0, 0x4005c008)
        __FIELD(HOUR, 0, 0, 0x4005c008)
        __FIELD(MIN, 0, 0, 0x4005c008)
        __FIELD(SEC, 0, 0, 0x4005c008)
    }
    namespace CTRL{
        __FIELD(FORCE_NOTLEAPYEAR, 0, 0, 0x4005c00c)
        __FIELD(LOAD, 0, 0, 0x4005c00c)
        __FIELD(RTC_ACTIVE, 0, 0, 0x4005c00c)
        __FIELD(RTC_ENABLE, 0, 0, 0x4005c00c)
    }
    namespace IRQ_SETUP_0{
        __FIELD(MATCH_ACTIVE, 0, 0, 0x4005c010)
        __FIELD(MATCH_ENA, 0, 0, 0x4005c010)
        __FIELD(YEAR_ENA, 0, 0, 0x4005c010)
        __FIELD(MONTH_ENA, 0, 0, 0x4005c010)
        __FIELD(DAY_ENA, 0, 0, 0x4005c010)
        __FIELD(YEAR, 0, 0, 0x4005c010)
        __FIELD(MONTH, 0, 0, 0x4005c010)
        __FIELD(DAY, 0, 0, 0x4005c010)
    }
    namespace IRQ_SETUP_1{
        __FIELD(DOTW_ENA, 0, 0, 0x4005c014)
        __FIELD(HOUR_ENA, 0, 0, 0x4005c014)
        __FIELD(MIN_ENA, 0, 0, 0x4005c014)
        __FIELD(SEC_ENA, 0, 0, 0x4005c014)
        __FIELD(DOTW, 0, 0, 0x4005c014)
        __FIELD(HOUR, 0, 0, 0x4005c014)
        __FIELD(MIN, 0, 0, 0x4005c014)
        __FIELD(SEC, 0, 0, 0x4005c014)
    }
    namespace RTC_1{
        __FIELD(YEAR, 0, 0, 0x4005c018)
        __FIELD(MONTH, 0, 0, 0x4005c018)
        __FIELD(DAY, 0, 0, 0x4005c018)
    }
    namespace RTC_0{
        __FIELD(DOTW, 0, 0, 0x4005c01c)
        __FIELD(HOUR, 0, 0, 0x4005c01c)
        __FIELD(MIN, 0, 0, 0x4005c01c)
        __FIELD(SEC, 0, 0, 0x4005c01c)
    }
    namespace INTR{
        __FIELD(RTC, 0, 0, 0x4005c020)
    }
    namespace INTE{
        __FIELD(RTC, 0, 0, 0x4005c024)
    }
    namespace INTF{
        __FIELD(RTC, 0, 0, 0x4005c028)
    }
    namespace INTS{
        __FIELD(RTC, 0, 0, 0x4005c02c)
    }
}

namespace ROSC{
    namespace CTRL{
        __FIELD(ENABLE, 0, 0, 0x40060000)
        __FIELD(FREQ_RANGE, 0, 0, 0x40060000)
    }
    namespace FREQA{
        __FIELD(PASSWD, 0, 0, 0x40060004)
        __FIELD(DS3, 0, 0, 0x40060004)
        __FIELD(DS2, 0, 0, 0x40060004)
        __FIELD(DS1, 0, 0, 0x40060004)
        __FIELD(DS0, 0, 0, 0x40060004)
    }
    namespace FREQB{
        __FIELD(PASSWD, 0, 0, 0x40060008)
        __FIELD(DS7, 0, 0, 0x40060008)
        __FIELD(DS6, 0, 0, 0x40060008)
        __FIELD(DS5, 0, 0, 0x40060008)
        __FIELD(DS4, 0, 0, 0x40060008)
    }
    namespace DORMANT{
    }
    namespace DIV{
        __FIELD(DIV, 0, 0, 0x40060010)
    }
    namespace PHASE{
        __FIELD(PASSWD, 0, 0, 0x40060014)
        __FIELD(ENABLE, 0, 0, 0x40060014)
        __FIELD(FLIP, 0, 0, 0x40060014)
        __FIELD(SHIFT, 0, 0, 0x40060014)
    }
    namespace STATUS{
        __FIELD(STABLE, 0, 0, 0x40060018)
        __FIELD(BADWRITE, 0, 0, 0x40060018)
        __FIELD(DIV_RUNNING, 0, 0, 0x40060018)
        __FIELD(ENABLED, 0, 0, 0x40060018)
    }
    namespace RANDOMBIT{
        __FIELD(RANDOMBIT, 0, 0, 0x4006001c)
    }
    namespace COUNT{
        __FIELD(COUNT, 0, 0, 0x40060020)
    }
}

namespace VREG_AND_CHIP_RESET{
    namespace VREG{
        __FIELD(ROK, 0, 0, 0x40064000)
        __FIELD(VSEL, 0, 0, 0x40064000)
        __FIELD(HIZ, 0, 0, 0x40064000)
        __FIELD(EN, 0, 0, 0x40064000)
    }
    namespace BOD{
        __FIELD(VSEL, 0, 0, 0x40064004)
        __FIELD(EN, 0, 0, 0x40064004)
    }
    namespace CHIP_RESET{
        __FIELD(PSM_RESTART_FLAG, 0, 0, 0x40064008)
        __FIELD(HAD_PSM_RESTART, 0, 0, 0x40064008)
        __FIELD(HAD_RUN, 0, 0, 0x40064008)
        __FIELD(HAD_POR, 0, 0, 0x40064008)
    }
}

namespace TBMAN{
    namespace PLATFORM{
        __FIELD(FPGA, 0, 0, 0x4006c000)
        __FIELD(ASIC, 0, 0, 0x4006c000)
    }
}

namespace DMA{
    namespace CH0_READ_ADDR{
    }
    namespace CH0_WRITE_ADDR{
    }
    namespace CH0_TRANS_COUNT{
    }
    namespace CH0_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000000c)
        __FIELD(READ_ERROR, 0, 0, 0x5000000c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000000c)
        __FIELD(BUSY, 0, 0, 0x5000000c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000000c)
        __FIELD(BSWAP, 0, 0, 0x5000000c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000000c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000000c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000000c)
        __FIELD(RING_SEL, 0, 0, 0x5000000c)
        __FIELD(RING_SIZE, 0, 0, 0x5000000c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000000c)
        __FIELD(INCR_READ, 0, 0, 0x5000000c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000000c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000000c)
        __FIELD(EN, 0, 0, 0x5000000c)
    }
    namespace CH0_AL1_CTRL{
    }
    namespace CH0_AL1_READ_ADDR{
    }
    namespace CH0_AL1_WRITE_ADDR{
    }
    namespace CH0_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH0_AL2_CTRL{
    }
    namespace CH0_AL2_TRANS_COUNT{
    }
    namespace CH0_AL2_READ_ADDR{
    }
    namespace CH0_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH0_AL3_CTRL{
    }
    namespace CH0_AL3_WRITE_ADDR{
    }
    namespace CH0_AL3_TRANS_COUNT{
    }
    namespace CH0_AL3_READ_ADDR_TRIG{
    }
    namespace CH1_READ_ADDR{
    }
    namespace CH1_WRITE_ADDR{
    }
    namespace CH1_TRANS_COUNT{
    }
    namespace CH1_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000004c)
        __FIELD(READ_ERROR, 0, 0, 0x5000004c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000004c)
        __FIELD(BUSY, 0, 0, 0x5000004c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000004c)
        __FIELD(BSWAP, 0, 0, 0x5000004c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000004c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000004c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000004c)
        __FIELD(RING_SEL, 0, 0, 0x5000004c)
        __FIELD(RING_SIZE, 0, 0, 0x5000004c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000004c)
        __FIELD(INCR_READ, 0, 0, 0x5000004c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000004c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000004c)
        __FIELD(EN, 0, 0, 0x5000004c)
    }
    namespace CH1_AL1_CTRL{
    }
    namespace CH1_AL1_READ_ADDR{
    }
    namespace CH1_AL1_WRITE_ADDR{
    }
    namespace CH1_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH1_AL2_CTRL{
    }
    namespace CH1_AL2_TRANS_COUNT{
    }
    namespace CH1_AL2_READ_ADDR{
    }
    namespace CH1_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH1_AL3_CTRL{
    }
    namespace CH1_AL3_WRITE_ADDR{
    }
    namespace CH1_AL3_TRANS_COUNT{
    }
    namespace CH1_AL3_READ_ADDR_TRIG{
    }
    namespace CH2_READ_ADDR{
    }
    namespace CH2_WRITE_ADDR{
    }
    namespace CH2_TRANS_COUNT{
    }
    namespace CH2_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000008c)
        __FIELD(READ_ERROR, 0, 0, 0x5000008c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000008c)
        __FIELD(BUSY, 0, 0, 0x5000008c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000008c)
        __FIELD(BSWAP, 0, 0, 0x5000008c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000008c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000008c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000008c)
        __FIELD(RING_SEL, 0, 0, 0x5000008c)
        __FIELD(RING_SIZE, 0, 0, 0x5000008c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000008c)
        __FIELD(INCR_READ, 0, 0, 0x5000008c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000008c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000008c)
        __FIELD(EN, 0, 0, 0x5000008c)
    }
    namespace CH2_AL1_CTRL{
    }
    namespace CH2_AL1_READ_ADDR{
    }
    namespace CH2_AL1_WRITE_ADDR{
    }
    namespace CH2_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH2_AL2_CTRL{
    }
    namespace CH2_AL2_TRANS_COUNT{
    }
    namespace CH2_AL2_READ_ADDR{
    }
    namespace CH2_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH2_AL3_CTRL{
    }
    namespace CH2_AL3_WRITE_ADDR{
    }
    namespace CH2_AL3_TRANS_COUNT{
    }
    namespace CH2_AL3_READ_ADDR_TRIG{
    }
    namespace CH3_READ_ADDR{
    }
    namespace CH3_WRITE_ADDR{
    }
    namespace CH3_TRANS_COUNT{
    }
    namespace CH3_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x500000cc)
        __FIELD(READ_ERROR, 0, 0, 0x500000cc)
        __FIELD(WRITE_ERROR, 0, 0, 0x500000cc)
        __FIELD(BUSY, 0, 0, 0x500000cc)
        __FIELD(SNIFF_EN, 0, 0, 0x500000cc)
        __FIELD(BSWAP, 0, 0, 0x500000cc)
        __FIELD(IRQ_QUIET, 0, 0, 0x500000cc)
        __FIELD(TREQ_SEL, 0, 0, 0x500000cc)
        __FIELD(CHAIN_TO, 0, 0, 0x500000cc)
        __FIELD(RING_SEL, 0, 0, 0x500000cc)
        __FIELD(RING_SIZE, 0, 0, 0x500000cc)
        __FIELD(INCR_WRITE, 0, 0, 0x500000cc)
        __FIELD(INCR_READ, 0, 0, 0x500000cc)
        __FIELD(DATA_SIZE, 0, 0, 0x500000cc)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x500000cc)
        __FIELD(EN, 0, 0, 0x500000cc)
    }
    namespace CH3_AL1_CTRL{
    }
    namespace CH3_AL1_READ_ADDR{
    }
    namespace CH3_AL1_WRITE_ADDR{
    }
    namespace CH3_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH3_AL2_CTRL{
    }
    namespace CH3_AL2_TRANS_COUNT{
    }
    namespace CH3_AL2_READ_ADDR{
    }
    namespace CH3_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH3_AL3_CTRL{
    }
    namespace CH3_AL3_WRITE_ADDR{
    }
    namespace CH3_AL3_TRANS_COUNT{
    }
    namespace CH3_AL3_READ_ADDR_TRIG{
    }
    namespace CH4_READ_ADDR{
    }
    namespace CH4_WRITE_ADDR{
    }
    namespace CH4_TRANS_COUNT{
    }
    namespace CH4_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000010c)
        __FIELD(READ_ERROR, 0, 0, 0x5000010c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000010c)
        __FIELD(BUSY, 0, 0, 0x5000010c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000010c)
        __FIELD(BSWAP, 0, 0, 0x5000010c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000010c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000010c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000010c)
        __FIELD(RING_SEL, 0, 0, 0x5000010c)
        __FIELD(RING_SIZE, 0, 0, 0x5000010c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000010c)
        __FIELD(INCR_READ, 0, 0, 0x5000010c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000010c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000010c)
        __FIELD(EN, 0, 0, 0x5000010c)
    }
    namespace CH4_AL1_CTRL{
    }
    namespace CH4_AL1_READ_ADDR{
    }
    namespace CH4_AL1_WRITE_ADDR{
    }
    namespace CH4_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH4_AL2_CTRL{
    }
    namespace CH4_AL2_TRANS_COUNT{
    }
    namespace CH4_AL2_READ_ADDR{
    }
    namespace CH4_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH4_AL3_CTRL{
    }
    namespace CH4_AL3_WRITE_ADDR{
    }
    namespace CH4_AL3_TRANS_COUNT{
    }
    namespace CH4_AL3_READ_ADDR_TRIG{
    }
    namespace CH5_READ_ADDR{
    }
    namespace CH5_WRITE_ADDR{
    }
    namespace CH5_TRANS_COUNT{
    }
    namespace CH5_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000014c)
        __FIELD(READ_ERROR, 0, 0, 0x5000014c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000014c)
        __FIELD(BUSY, 0, 0, 0x5000014c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000014c)
        __FIELD(BSWAP, 0, 0, 0x5000014c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000014c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000014c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000014c)
        __FIELD(RING_SEL, 0, 0, 0x5000014c)
        __FIELD(RING_SIZE, 0, 0, 0x5000014c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000014c)
        __FIELD(INCR_READ, 0, 0, 0x5000014c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000014c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000014c)
        __FIELD(EN, 0, 0, 0x5000014c)
    }
    namespace CH5_AL1_CTRL{
    }
    namespace CH5_AL1_READ_ADDR{
    }
    namespace CH5_AL1_WRITE_ADDR{
    }
    namespace CH5_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH5_AL2_CTRL{
    }
    namespace CH5_AL2_TRANS_COUNT{
    }
    namespace CH5_AL2_READ_ADDR{
    }
    namespace CH5_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH5_AL3_CTRL{
    }
    namespace CH5_AL3_WRITE_ADDR{
    }
    namespace CH5_AL3_TRANS_COUNT{
    }
    namespace CH5_AL3_READ_ADDR_TRIG{
    }
    namespace CH6_READ_ADDR{
    }
    namespace CH6_WRITE_ADDR{
    }
    namespace CH6_TRANS_COUNT{
    }
    namespace CH6_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000018c)
        __FIELD(READ_ERROR, 0, 0, 0x5000018c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000018c)
        __FIELD(BUSY, 0, 0, 0x5000018c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000018c)
        __FIELD(BSWAP, 0, 0, 0x5000018c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000018c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000018c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000018c)
        __FIELD(RING_SEL, 0, 0, 0x5000018c)
        __FIELD(RING_SIZE, 0, 0, 0x5000018c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000018c)
        __FIELD(INCR_READ, 0, 0, 0x5000018c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000018c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000018c)
        __FIELD(EN, 0, 0, 0x5000018c)
    }
    namespace CH6_AL1_CTRL{
    }
    namespace CH6_AL1_READ_ADDR{
    }
    namespace CH6_AL1_WRITE_ADDR{
    }
    namespace CH6_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH6_AL2_CTRL{
    }
    namespace CH6_AL2_TRANS_COUNT{
    }
    namespace CH6_AL2_READ_ADDR{
    }
    namespace CH6_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH6_AL3_CTRL{
    }
    namespace CH6_AL3_WRITE_ADDR{
    }
    namespace CH6_AL3_TRANS_COUNT{
    }
    namespace CH6_AL3_READ_ADDR_TRIG{
    }
    namespace CH7_READ_ADDR{
    }
    namespace CH7_WRITE_ADDR{
    }
    namespace CH7_TRANS_COUNT{
    }
    namespace CH7_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x500001cc)
        __FIELD(READ_ERROR, 0, 0, 0x500001cc)
        __FIELD(WRITE_ERROR, 0, 0, 0x500001cc)
        __FIELD(BUSY, 0, 0, 0x500001cc)
        __FIELD(SNIFF_EN, 0, 0, 0x500001cc)
        __FIELD(BSWAP, 0, 0, 0x500001cc)
        __FIELD(IRQ_QUIET, 0, 0, 0x500001cc)
        __FIELD(TREQ_SEL, 0, 0, 0x500001cc)
        __FIELD(CHAIN_TO, 0, 0, 0x500001cc)
        __FIELD(RING_SEL, 0, 0, 0x500001cc)
        __FIELD(RING_SIZE, 0, 0, 0x500001cc)
        __FIELD(INCR_WRITE, 0, 0, 0x500001cc)
        __FIELD(INCR_READ, 0, 0, 0x500001cc)
        __FIELD(DATA_SIZE, 0, 0, 0x500001cc)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x500001cc)
        __FIELD(EN, 0, 0, 0x500001cc)
    }
    namespace CH7_AL1_CTRL{
    }
    namespace CH7_AL1_READ_ADDR{
    }
    namespace CH7_AL1_WRITE_ADDR{
    }
    namespace CH7_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH7_AL2_CTRL{
    }
    namespace CH7_AL2_TRANS_COUNT{
    }
    namespace CH7_AL2_READ_ADDR{
    }
    namespace CH7_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH7_AL3_CTRL{
    }
    namespace CH7_AL3_WRITE_ADDR{
    }
    namespace CH7_AL3_TRANS_COUNT{
    }
    namespace CH7_AL3_READ_ADDR_TRIG{
    }
    namespace CH8_READ_ADDR{
    }
    namespace CH8_WRITE_ADDR{
    }
    namespace CH8_TRANS_COUNT{
    }
    namespace CH8_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000020c)
        __FIELD(READ_ERROR, 0, 0, 0x5000020c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000020c)
        __FIELD(BUSY, 0, 0, 0x5000020c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000020c)
        __FIELD(BSWAP, 0, 0, 0x5000020c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000020c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000020c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000020c)
        __FIELD(RING_SEL, 0, 0, 0x5000020c)
        __FIELD(RING_SIZE, 0, 0, 0x5000020c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000020c)
        __FIELD(INCR_READ, 0, 0, 0x5000020c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000020c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000020c)
        __FIELD(EN, 0, 0, 0x5000020c)
    }
    namespace CH8_AL1_CTRL{
    }
    namespace CH8_AL1_READ_ADDR{
    }
    namespace CH8_AL1_WRITE_ADDR{
    }
    namespace CH8_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH8_AL2_CTRL{
    }
    namespace CH8_AL2_TRANS_COUNT{
    }
    namespace CH8_AL2_READ_ADDR{
    }
    namespace CH8_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH8_AL3_CTRL{
    }
    namespace CH8_AL3_WRITE_ADDR{
    }
    namespace CH8_AL3_TRANS_COUNT{
    }
    namespace CH8_AL3_READ_ADDR_TRIG{
    }
    namespace CH9_READ_ADDR{
    }
    namespace CH9_WRITE_ADDR{
    }
    namespace CH9_TRANS_COUNT{
    }
    namespace CH9_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000024c)
        __FIELD(READ_ERROR, 0, 0, 0x5000024c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000024c)
        __FIELD(BUSY, 0, 0, 0x5000024c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000024c)
        __FIELD(BSWAP, 0, 0, 0x5000024c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000024c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000024c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000024c)
        __FIELD(RING_SEL, 0, 0, 0x5000024c)
        __FIELD(RING_SIZE, 0, 0, 0x5000024c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000024c)
        __FIELD(INCR_READ, 0, 0, 0x5000024c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000024c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000024c)
        __FIELD(EN, 0, 0, 0x5000024c)
    }
    namespace CH9_AL1_CTRL{
    }
    namespace CH9_AL1_READ_ADDR{
    }
    namespace CH9_AL1_WRITE_ADDR{
    }
    namespace CH9_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH9_AL2_CTRL{
    }
    namespace CH9_AL2_TRANS_COUNT{
    }
    namespace CH9_AL2_READ_ADDR{
    }
    namespace CH9_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH9_AL3_CTRL{
    }
    namespace CH9_AL3_WRITE_ADDR{
    }
    namespace CH9_AL3_TRANS_COUNT{
    }
    namespace CH9_AL3_READ_ADDR_TRIG{
    }
    namespace CH10_READ_ADDR{
    }
    namespace CH10_WRITE_ADDR{
    }
    namespace CH10_TRANS_COUNT{
    }
    namespace CH10_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x5000028c)
        __FIELD(READ_ERROR, 0, 0, 0x5000028c)
        __FIELD(WRITE_ERROR, 0, 0, 0x5000028c)
        __FIELD(BUSY, 0, 0, 0x5000028c)
        __FIELD(SNIFF_EN, 0, 0, 0x5000028c)
        __FIELD(BSWAP, 0, 0, 0x5000028c)
        __FIELD(IRQ_QUIET, 0, 0, 0x5000028c)
        __FIELD(TREQ_SEL, 0, 0, 0x5000028c)
        __FIELD(CHAIN_TO, 0, 0, 0x5000028c)
        __FIELD(RING_SEL, 0, 0, 0x5000028c)
        __FIELD(RING_SIZE, 0, 0, 0x5000028c)
        __FIELD(INCR_WRITE, 0, 0, 0x5000028c)
        __FIELD(INCR_READ, 0, 0, 0x5000028c)
        __FIELD(DATA_SIZE, 0, 0, 0x5000028c)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x5000028c)
        __FIELD(EN, 0, 0, 0x5000028c)
    }
    namespace CH10_AL1_CTRL{
    }
    namespace CH10_AL1_READ_ADDR{
    }
    namespace CH10_AL1_WRITE_ADDR{
    }
    namespace CH10_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH10_AL2_CTRL{
    }
    namespace CH10_AL2_TRANS_COUNT{
    }
    namespace CH10_AL2_READ_ADDR{
    }
    namespace CH10_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH10_AL3_CTRL{
    }
    namespace CH10_AL3_WRITE_ADDR{
    }
    namespace CH10_AL3_TRANS_COUNT{
    }
    namespace CH10_AL3_READ_ADDR_TRIG{
    }
    namespace CH11_READ_ADDR{
    }
    namespace CH11_WRITE_ADDR{
    }
    namespace CH11_TRANS_COUNT{
    }
    namespace CH11_CTRL_TRIG{
        __FIELD(AHB_ERROR, 0, 0, 0x500002cc)
        __FIELD(READ_ERROR, 0, 0, 0x500002cc)
        __FIELD(WRITE_ERROR, 0, 0, 0x500002cc)
        __FIELD(BUSY, 0, 0, 0x500002cc)
        __FIELD(SNIFF_EN, 0, 0, 0x500002cc)
        __FIELD(BSWAP, 0, 0, 0x500002cc)
        __FIELD(IRQ_QUIET, 0, 0, 0x500002cc)
        __FIELD(TREQ_SEL, 0, 0, 0x500002cc)
        __FIELD(CHAIN_TO, 0, 0, 0x500002cc)
        __FIELD(RING_SEL, 0, 0, 0x500002cc)
        __FIELD(RING_SIZE, 0, 0, 0x500002cc)
        __FIELD(INCR_WRITE, 0, 0, 0x500002cc)
        __FIELD(INCR_READ, 0, 0, 0x500002cc)
        __FIELD(DATA_SIZE, 0, 0, 0x500002cc)
        __FIELD(HIGH_PRIORITY, 0, 0, 0x500002cc)
        __FIELD(EN, 0, 0, 0x500002cc)
    }
    namespace CH11_AL1_CTRL{
    }
    namespace CH11_AL1_READ_ADDR{
    }
    namespace CH11_AL1_WRITE_ADDR{
    }
    namespace CH11_AL1_TRANS_COUNT_TRIG{
    }
    namespace CH11_AL2_CTRL{
    }
    namespace CH11_AL2_TRANS_COUNT{
    }
    namespace CH11_AL2_READ_ADDR{
    }
    namespace CH11_AL2_WRITE_ADDR_TRIG{
    }
    namespace CH11_AL3_CTRL{
    }
    namespace CH11_AL3_WRITE_ADDR{
    }
    namespace CH11_AL3_TRANS_COUNT{
    }
    namespace CH11_AL3_READ_ADDR_TRIG{
    }
    namespace INTR{
        __FIELD(INTR, 0, 0, 0x50000400)
    }
    namespace INTE0{
        __FIELD(INTE0, 0, 0, 0x50000404)
    }
    namespace INTF0{
        __FIELD(INTF0, 0, 0, 0x50000408)
    }
    namespace INTS0{
        __FIELD(INTS0, 0, 0, 0x5000040c)
    }
    namespace INTE1{
        __FIELD(INTE1, 0, 0, 0x50000414)
    }
    namespace INTF1{
        __FIELD(INTF1, 0, 0, 0x50000418)
    }
    namespace INTS1{
        __FIELD(INTS1, 0, 0, 0x5000041c)
    }
    namespace TIMER0{
        __FIELD(X, 0, 0, 0x50000420)
        __FIELD(Y, 0, 0, 0x50000420)
    }
    namespace TIMER1{
        __FIELD(X, 0, 0, 0x50000424)
        __FIELD(Y, 0, 0, 0x50000424)
    }
    namespace TIMER2{
        __FIELD(X, 0, 0, 0x50000428)
        __FIELD(Y, 0, 0, 0x50000428)
    }
    namespace TIMER3{
        __FIELD(X, 0, 0, 0x5000042c)
        __FIELD(Y, 0, 0, 0x5000042c)
    }
    namespace MULTI_CHAN_TRIGGER{
        __FIELD(MULTI_CHAN_TRIGGER, 0, 0, 0x50000430)
    }
    namespace SNIFF_CTRL{
        __FIELD(OUT_INV, 0, 0, 0x50000434)
        __FIELD(OUT_REV, 0, 0, 0x50000434)
        __FIELD(BSWAP, 0, 0, 0x50000434)
        __FIELD(CALC, 0, 0, 0x50000434)
        __FIELD(DMACH, 0, 0, 0x50000434)
        __FIELD(EN, 0, 0, 0x50000434)
    }
    namespace SNIFF_DATA{
    }
    namespace FIFO_LEVELS{
        __FIELD(RAF_LVL, 0, 0, 0x50000440)
        __FIELD(WAF_LVL, 0, 0, 0x50000440)
        __FIELD(TDF_LVL, 0, 0, 0x50000440)
    }
    namespace CHAN_ABORT{
        __FIELD(CHAN_ABORT, 0, 0, 0x50000444)
    }
    namespace N_CHANNELS{
        __FIELD(N_CHANNELS, 0, 0, 0x50000448)
    }
    namespace CH0_DBG_CTDREQ{
        __FIELD(CH0_DBG_CTDREQ, 0, 0, 0x50000800)
    }
    namespace CH0_DBG_TCR{
    }
    namespace CH1_DBG_CTDREQ{
        __FIELD(CH1_DBG_CTDREQ, 0, 0, 0x50000840)
    }
    namespace CH1_DBG_TCR{
    }
    namespace CH2_DBG_CTDREQ{
        __FIELD(CH2_DBG_CTDREQ, 0, 0, 0x50000880)
    }
    namespace CH2_DBG_TCR{
    }
    namespace CH3_DBG_CTDREQ{
        __FIELD(CH3_DBG_CTDREQ, 0, 0, 0x500008c0)
    }
    namespace CH3_DBG_TCR{
    }
    namespace CH4_DBG_CTDREQ{
        __FIELD(CH4_DBG_CTDREQ, 0, 0, 0x50000900)
    }
    namespace CH4_DBG_TCR{
    }
    namespace CH5_DBG_CTDREQ{
        __FIELD(CH5_DBG_CTDREQ, 0, 0, 0x50000940)
    }
    namespace CH5_DBG_TCR{
    }
    namespace CH6_DBG_CTDREQ{
        __FIELD(CH6_DBG_CTDREQ, 0, 0, 0x50000980)
    }
    namespace CH6_DBG_TCR{
    }
    namespace CH7_DBG_CTDREQ{
        __FIELD(CH7_DBG_CTDREQ, 0, 0, 0x500009c0)
    }
    namespace CH7_DBG_TCR{
    }
    namespace CH8_DBG_CTDREQ{
        __FIELD(CH8_DBG_CTDREQ, 0, 0, 0x50000a00)
    }
    namespace CH8_DBG_TCR{
    }
    namespace CH9_DBG_CTDREQ{
        __FIELD(CH9_DBG_CTDREQ, 0, 0, 0x50000a40)
    }
    namespace CH9_DBG_TCR{
    }
    namespace CH10_DBG_CTDREQ{
        __FIELD(CH10_DBG_CTDREQ, 0, 0, 0x50000a80)
    }
    namespace CH10_DBG_TCR{
    }
    namespace CH11_DBG_CTDREQ{
        __FIELD(CH11_DBG_CTDREQ, 0, 0, 0x50000ac0)
    }
    namespace CH11_DBG_TCR{
    }
}

namespace USBCTRL_DPRAM{
    namespace SETUP_PACKET_LOW{
        __FIELD(WVALUE, 0, 0, 0x50100000)
        __FIELD(BREQUEST, 0, 0, 0x50100000)
        __FIELD(BMREQUESTTYPE, 0, 0, 0x50100000)
    }
    namespace SETUP_PACKET_HIGH{
        __FIELD(WLENGTH, 0, 0, 0x50100004)
        __FIELD(WINDEX, 0, 0, 0x50100004)
    }
    namespace EP1_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100008)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100008)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100008)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100008)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100008)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100008)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100008)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100008)
    }
    namespace EP1_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x5010000c)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x5010000c)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x5010000c)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x5010000c)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x5010000c)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x5010000c)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x5010000c)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x5010000c)
    }
    namespace EP2_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100010)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100010)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100010)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100010)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100010)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100010)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100010)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100010)
    }
    namespace EP2_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100014)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100014)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100014)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100014)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100014)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100014)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100014)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100014)
    }
    namespace EP3_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100018)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100018)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100018)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100018)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100018)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100018)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100018)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100018)
    }
    namespace EP3_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x5010001c)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x5010001c)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x5010001c)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x5010001c)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x5010001c)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x5010001c)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x5010001c)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x5010001c)
    }
    namespace EP4_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100020)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100020)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100020)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100020)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100020)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100020)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100020)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100020)
    }
    namespace EP4_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100024)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100024)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100024)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100024)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100024)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100024)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100024)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100024)
    }
    namespace EP5_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100028)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100028)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100028)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100028)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100028)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100028)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100028)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100028)
    }
    namespace EP5_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x5010002c)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x5010002c)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x5010002c)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x5010002c)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x5010002c)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x5010002c)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x5010002c)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x5010002c)
    }
    namespace EP6_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100030)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100030)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100030)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100030)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100030)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100030)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100030)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100030)
    }
    namespace EP6_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100034)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100034)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100034)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100034)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100034)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100034)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100034)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100034)
    }
    namespace EP7_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100038)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100038)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100038)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100038)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100038)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100038)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100038)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100038)
    }
    namespace EP7_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x5010003c)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x5010003c)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x5010003c)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x5010003c)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x5010003c)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x5010003c)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x5010003c)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x5010003c)
    }
    namespace EP8_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100040)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100040)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100040)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100040)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100040)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100040)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100040)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100040)
    }
    namespace EP8_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100044)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100044)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100044)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100044)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100044)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100044)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100044)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100044)
    }
    namespace EP9_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100048)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100048)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100048)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100048)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100048)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100048)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100048)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100048)
    }
    namespace EP9_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x5010004c)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x5010004c)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x5010004c)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x5010004c)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x5010004c)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x5010004c)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x5010004c)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x5010004c)
    }
    namespace EP10_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100050)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100050)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100050)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100050)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100050)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100050)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100050)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100050)
    }
    namespace EP10_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100054)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100054)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100054)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100054)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100054)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100054)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100054)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100054)
    }
    namespace EP11_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100058)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100058)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100058)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100058)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100058)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100058)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100058)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100058)
    }
    namespace EP11_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x5010005c)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x5010005c)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x5010005c)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x5010005c)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x5010005c)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x5010005c)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x5010005c)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x5010005c)
    }
    namespace EP12_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100060)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100060)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100060)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100060)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100060)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100060)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100060)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100060)
    }
    namespace EP12_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100064)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100064)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100064)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100064)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100064)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100064)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100064)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100064)
    }
    namespace EP13_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100068)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100068)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100068)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100068)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100068)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100068)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100068)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100068)
    }
    namespace EP13_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x5010006c)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x5010006c)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x5010006c)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x5010006c)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x5010006c)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x5010006c)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x5010006c)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x5010006c)
    }
    namespace EP14_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100070)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100070)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100070)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100070)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100070)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100070)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100070)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100070)
    }
    namespace EP14_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100074)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100074)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100074)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100074)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100074)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100074)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100074)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100074)
    }
    namespace EP15_IN_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x50100078)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x50100078)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x50100078)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x50100078)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x50100078)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x50100078)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x50100078)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x50100078)
    }
    namespace EP15_OUT_CONTROL{
        __FIELD(ENABLE, 0, 0, 0x5010007c)
        __FIELD(DOUBLE_BUFFERED, 0, 0, 0x5010007c)
        __FIELD(INTERRUPT_PER_BUFF, 0, 0, 0x5010007c)
        __FIELD(INTERRUPT_PER_DOUBLE_BUFF, 0, 0, 0x5010007c)
        __FIELD(ENDPOINT_TYPE, 0, 0, 0x5010007c)
        __FIELD(INTERRUPT_ON_STALL, 0, 0, 0x5010007c)
        __FIELD(INTERRUPT_ON_NAK, 0, 0, 0x5010007c)
        __FIELD(BUFFER_ADDRESS, 0, 0, 0x5010007c)
    }
    namespace EP0_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x50100080)
        __FIELD(LAST_1, 0, 0, 0x50100080)
        __FIELD(PID_1, 0, 0, 0x50100080)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x50100080)
        __FIELD(AVAILABLE_1, 0, 0, 0x50100080)
        __FIELD(LENGTH_1, 0, 0, 0x50100080)
        __FIELD(FULL_0, 0, 0, 0x50100080)
        __FIELD(LAST_0, 0, 0, 0x50100080)
        __FIELD(PID_0, 0, 0, 0x50100080)
        __FIELD(RESET, 0, 0, 0x50100080)
        __FIELD(STALL, 0, 0, 0x50100080)
        __FIELD(AVAILABLE_0, 0, 0, 0x50100080)
        __FIELD(LENGTH_0, 0, 0, 0x50100080)
    }
    namespace EP0_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x50100084)
        __FIELD(LAST_1, 0, 0, 0x50100084)
        __FIELD(PID_1, 0, 0, 0x50100084)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x50100084)
        __FIELD(AVAILABLE_1, 0, 0, 0x50100084)
        __FIELD(LENGTH_1, 0, 0, 0x50100084)
        __FIELD(FULL_0, 0, 0, 0x50100084)
        __FIELD(LAST_0, 0, 0, 0x50100084)
        __FIELD(PID_0, 0, 0, 0x50100084)
        __FIELD(RESET, 0, 0, 0x50100084)
        __FIELD(STALL, 0, 0, 0x50100084)
        __FIELD(AVAILABLE_0, 0, 0, 0x50100084)
        __FIELD(LENGTH_0, 0, 0, 0x50100084)
    }
    namespace EP1_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x50100088)
        __FIELD(LAST_1, 0, 0, 0x50100088)
        __FIELD(PID_1, 0, 0, 0x50100088)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x50100088)
        __FIELD(AVAILABLE_1, 0, 0, 0x50100088)
        __FIELD(LENGTH_1, 0, 0, 0x50100088)
        __FIELD(FULL_0, 0, 0, 0x50100088)
        __FIELD(LAST_0, 0, 0, 0x50100088)
        __FIELD(PID_0, 0, 0, 0x50100088)
        __FIELD(RESET, 0, 0, 0x50100088)
        __FIELD(STALL, 0, 0, 0x50100088)
        __FIELD(AVAILABLE_0, 0, 0, 0x50100088)
        __FIELD(LENGTH_0, 0, 0, 0x50100088)
    }
    namespace EP1_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x5010008c)
        __FIELD(LAST_1, 0, 0, 0x5010008c)
        __FIELD(PID_1, 0, 0, 0x5010008c)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x5010008c)
        __FIELD(AVAILABLE_1, 0, 0, 0x5010008c)
        __FIELD(LENGTH_1, 0, 0, 0x5010008c)
        __FIELD(FULL_0, 0, 0, 0x5010008c)
        __FIELD(LAST_0, 0, 0, 0x5010008c)
        __FIELD(PID_0, 0, 0, 0x5010008c)
        __FIELD(RESET, 0, 0, 0x5010008c)
        __FIELD(STALL, 0, 0, 0x5010008c)
        __FIELD(AVAILABLE_0, 0, 0, 0x5010008c)
        __FIELD(LENGTH_0, 0, 0, 0x5010008c)
    }
    namespace EP2_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x50100090)
        __FIELD(LAST_1, 0, 0, 0x50100090)
        __FIELD(PID_1, 0, 0, 0x50100090)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x50100090)
        __FIELD(AVAILABLE_1, 0, 0, 0x50100090)
        __FIELD(LENGTH_1, 0, 0, 0x50100090)
        __FIELD(FULL_0, 0, 0, 0x50100090)
        __FIELD(LAST_0, 0, 0, 0x50100090)
        __FIELD(PID_0, 0, 0, 0x50100090)
        __FIELD(RESET, 0, 0, 0x50100090)
        __FIELD(STALL, 0, 0, 0x50100090)
        __FIELD(AVAILABLE_0, 0, 0, 0x50100090)
        __FIELD(LENGTH_0, 0, 0, 0x50100090)
    }
    namespace EP2_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x50100094)
        __FIELD(LAST_1, 0, 0, 0x50100094)
        __FIELD(PID_1, 0, 0, 0x50100094)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x50100094)
        __FIELD(AVAILABLE_1, 0, 0, 0x50100094)
        __FIELD(LENGTH_1, 0, 0, 0x50100094)
        __FIELD(FULL_0, 0, 0, 0x50100094)
        __FIELD(LAST_0, 0, 0, 0x50100094)
        __FIELD(PID_0, 0, 0, 0x50100094)
        __FIELD(RESET, 0, 0, 0x50100094)
        __FIELD(STALL, 0, 0, 0x50100094)
        __FIELD(AVAILABLE_0, 0, 0, 0x50100094)
        __FIELD(LENGTH_0, 0, 0, 0x50100094)
    }
    namespace EP3_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x50100098)
        __FIELD(LAST_1, 0, 0, 0x50100098)
        __FIELD(PID_1, 0, 0, 0x50100098)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x50100098)
        __FIELD(AVAILABLE_1, 0, 0, 0x50100098)
        __FIELD(LENGTH_1, 0, 0, 0x50100098)
        __FIELD(FULL_0, 0, 0, 0x50100098)
        __FIELD(LAST_0, 0, 0, 0x50100098)
        __FIELD(PID_0, 0, 0, 0x50100098)
        __FIELD(RESET, 0, 0, 0x50100098)
        __FIELD(STALL, 0, 0, 0x50100098)
        __FIELD(AVAILABLE_0, 0, 0, 0x50100098)
        __FIELD(LENGTH_0, 0, 0, 0x50100098)
    }
    namespace EP3_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x5010009c)
        __FIELD(LAST_1, 0, 0, 0x5010009c)
        __FIELD(PID_1, 0, 0, 0x5010009c)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x5010009c)
        __FIELD(AVAILABLE_1, 0, 0, 0x5010009c)
        __FIELD(LENGTH_1, 0, 0, 0x5010009c)
        __FIELD(FULL_0, 0, 0, 0x5010009c)
        __FIELD(LAST_0, 0, 0, 0x5010009c)
        __FIELD(PID_0, 0, 0, 0x5010009c)
        __FIELD(RESET, 0, 0, 0x5010009c)
        __FIELD(STALL, 0, 0, 0x5010009c)
        __FIELD(AVAILABLE_0, 0, 0, 0x5010009c)
        __FIELD(LENGTH_0, 0, 0, 0x5010009c)
    }
    namespace EP4_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000a0)
        __FIELD(LAST_1, 0, 0, 0x501000a0)
        __FIELD(PID_1, 0, 0, 0x501000a0)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000a0)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000a0)
        __FIELD(LENGTH_1, 0, 0, 0x501000a0)
        __FIELD(FULL_0, 0, 0, 0x501000a0)
        __FIELD(LAST_0, 0, 0, 0x501000a0)
        __FIELD(PID_0, 0, 0, 0x501000a0)
        __FIELD(RESET, 0, 0, 0x501000a0)
        __FIELD(STALL, 0, 0, 0x501000a0)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000a0)
        __FIELD(LENGTH_0, 0, 0, 0x501000a0)
    }
    namespace EP4_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000a4)
        __FIELD(LAST_1, 0, 0, 0x501000a4)
        __FIELD(PID_1, 0, 0, 0x501000a4)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000a4)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000a4)
        __FIELD(LENGTH_1, 0, 0, 0x501000a4)
        __FIELD(FULL_0, 0, 0, 0x501000a4)
        __FIELD(LAST_0, 0, 0, 0x501000a4)
        __FIELD(PID_0, 0, 0, 0x501000a4)
        __FIELD(RESET, 0, 0, 0x501000a4)
        __FIELD(STALL, 0, 0, 0x501000a4)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000a4)
        __FIELD(LENGTH_0, 0, 0, 0x501000a4)
    }
    namespace EP5_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000a8)
        __FIELD(LAST_1, 0, 0, 0x501000a8)
        __FIELD(PID_1, 0, 0, 0x501000a8)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000a8)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000a8)
        __FIELD(LENGTH_1, 0, 0, 0x501000a8)
        __FIELD(FULL_0, 0, 0, 0x501000a8)
        __FIELD(LAST_0, 0, 0, 0x501000a8)
        __FIELD(PID_0, 0, 0, 0x501000a8)
        __FIELD(RESET, 0, 0, 0x501000a8)
        __FIELD(STALL, 0, 0, 0x501000a8)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000a8)
        __FIELD(LENGTH_0, 0, 0, 0x501000a8)
    }
    namespace EP5_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000ac)
        __FIELD(LAST_1, 0, 0, 0x501000ac)
        __FIELD(PID_1, 0, 0, 0x501000ac)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000ac)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000ac)
        __FIELD(LENGTH_1, 0, 0, 0x501000ac)
        __FIELD(FULL_0, 0, 0, 0x501000ac)
        __FIELD(LAST_0, 0, 0, 0x501000ac)
        __FIELD(PID_0, 0, 0, 0x501000ac)
        __FIELD(RESET, 0, 0, 0x501000ac)
        __FIELD(STALL, 0, 0, 0x501000ac)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000ac)
        __FIELD(LENGTH_0, 0, 0, 0x501000ac)
    }
    namespace EP6_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000b0)
        __FIELD(LAST_1, 0, 0, 0x501000b0)
        __FIELD(PID_1, 0, 0, 0x501000b0)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000b0)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000b0)
        __FIELD(LENGTH_1, 0, 0, 0x501000b0)
        __FIELD(FULL_0, 0, 0, 0x501000b0)
        __FIELD(LAST_0, 0, 0, 0x501000b0)
        __FIELD(PID_0, 0, 0, 0x501000b0)
        __FIELD(RESET, 0, 0, 0x501000b0)
        __FIELD(STALL, 0, 0, 0x501000b0)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000b0)
        __FIELD(LENGTH_0, 0, 0, 0x501000b0)
    }
    namespace EP6_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000b4)
        __FIELD(LAST_1, 0, 0, 0x501000b4)
        __FIELD(PID_1, 0, 0, 0x501000b4)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000b4)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000b4)
        __FIELD(LENGTH_1, 0, 0, 0x501000b4)
        __FIELD(FULL_0, 0, 0, 0x501000b4)
        __FIELD(LAST_0, 0, 0, 0x501000b4)
        __FIELD(PID_0, 0, 0, 0x501000b4)
        __FIELD(RESET, 0, 0, 0x501000b4)
        __FIELD(STALL, 0, 0, 0x501000b4)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000b4)
        __FIELD(LENGTH_0, 0, 0, 0x501000b4)
    }
    namespace EP7_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000b8)
        __FIELD(LAST_1, 0, 0, 0x501000b8)
        __FIELD(PID_1, 0, 0, 0x501000b8)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000b8)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000b8)
        __FIELD(LENGTH_1, 0, 0, 0x501000b8)
        __FIELD(FULL_0, 0, 0, 0x501000b8)
        __FIELD(LAST_0, 0, 0, 0x501000b8)
        __FIELD(PID_0, 0, 0, 0x501000b8)
        __FIELD(RESET, 0, 0, 0x501000b8)
        __FIELD(STALL, 0, 0, 0x501000b8)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000b8)
        __FIELD(LENGTH_0, 0, 0, 0x501000b8)
    }
    namespace EP7_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000bc)
        __FIELD(LAST_1, 0, 0, 0x501000bc)
        __FIELD(PID_1, 0, 0, 0x501000bc)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000bc)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000bc)
        __FIELD(LENGTH_1, 0, 0, 0x501000bc)
        __FIELD(FULL_0, 0, 0, 0x501000bc)
        __FIELD(LAST_0, 0, 0, 0x501000bc)
        __FIELD(PID_0, 0, 0, 0x501000bc)
        __FIELD(RESET, 0, 0, 0x501000bc)
        __FIELD(STALL, 0, 0, 0x501000bc)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000bc)
        __FIELD(LENGTH_0, 0, 0, 0x501000bc)
    }
    namespace EP8_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000c0)
        __FIELD(LAST_1, 0, 0, 0x501000c0)
        __FIELD(PID_1, 0, 0, 0x501000c0)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000c0)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000c0)
        __FIELD(LENGTH_1, 0, 0, 0x501000c0)
        __FIELD(FULL_0, 0, 0, 0x501000c0)
        __FIELD(LAST_0, 0, 0, 0x501000c0)
        __FIELD(PID_0, 0, 0, 0x501000c0)
        __FIELD(RESET, 0, 0, 0x501000c0)
        __FIELD(STALL, 0, 0, 0x501000c0)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000c0)
        __FIELD(LENGTH_0, 0, 0, 0x501000c0)
    }
    namespace EP8_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000c4)
        __FIELD(LAST_1, 0, 0, 0x501000c4)
        __FIELD(PID_1, 0, 0, 0x501000c4)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000c4)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000c4)
        __FIELD(LENGTH_1, 0, 0, 0x501000c4)
        __FIELD(FULL_0, 0, 0, 0x501000c4)
        __FIELD(LAST_0, 0, 0, 0x501000c4)
        __FIELD(PID_0, 0, 0, 0x501000c4)
        __FIELD(RESET, 0, 0, 0x501000c4)
        __FIELD(STALL, 0, 0, 0x501000c4)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000c4)
        __FIELD(LENGTH_0, 0, 0, 0x501000c4)
    }
    namespace EP9_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000c8)
        __FIELD(LAST_1, 0, 0, 0x501000c8)
        __FIELD(PID_1, 0, 0, 0x501000c8)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000c8)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000c8)
        __FIELD(LENGTH_1, 0, 0, 0x501000c8)
        __FIELD(FULL_0, 0, 0, 0x501000c8)
        __FIELD(LAST_0, 0, 0, 0x501000c8)
        __FIELD(PID_0, 0, 0, 0x501000c8)
        __FIELD(RESET, 0, 0, 0x501000c8)
        __FIELD(STALL, 0, 0, 0x501000c8)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000c8)
        __FIELD(LENGTH_0, 0, 0, 0x501000c8)
    }
    namespace EP9_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000cc)
        __FIELD(LAST_1, 0, 0, 0x501000cc)
        __FIELD(PID_1, 0, 0, 0x501000cc)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000cc)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000cc)
        __FIELD(LENGTH_1, 0, 0, 0x501000cc)
        __FIELD(FULL_0, 0, 0, 0x501000cc)
        __FIELD(LAST_0, 0, 0, 0x501000cc)
        __FIELD(PID_0, 0, 0, 0x501000cc)
        __FIELD(RESET, 0, 0, 0x501000cc)
        __FIELD(STALL, 0, 0, 0x501000cc)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000cc)
        __FIELD(LENGTH_0, 0, 0, 0x501000cc)
    }
    namespace EP10_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000d0)
        __FIELD(LAST_1, 0, 0, 0x501000d0)
        __FIELD(PID_1, 0, 0, 0x501000d0)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000d0)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000d0)
        __FIELD(LENGTH_1, 0, 0, 0x501000d0)
        __FIELD(FULL_0, 0, 0, 0x501000d0)
        __FIELD(LAST_0, 0, 0, 0x501000d0)
        __FIELD(PID_0, 0, 0, 0x501000d0)
        __FIELD(RESET, 0, 0, 0x501000d0)
        __FIELD(STALL, 0, 0, 0x501000d0)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000d0)
        __FIELD(LENGTH_0, 0, 0, 0x501000d0)
    }
    namespace EP10_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000d4)
        __FIELD(LAST_1, 0, 0, 0x501000d4)
        __FIELD(PID_1, 0, 0, 0x501000d4)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000d4)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000d4)
        __FIELD(LENGTH_1, 0, 0, 0x501000d4)
        __FIELD(FULL_0, 0, 0, 0x501000d4)
        __FIELD(LAST_0, 0, 0, 0x501000d4)
        __FIELD(PID_0, 0, 0, 0x501000d4)
        __FIELD(RESET, 0, 0, 0x501000d4)
        __FIELD(STALL, 0, 0, 0x501000d4)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000d4)
        __FIELD(LENGTH_0, 0, 0, 0x501000d4)
    }
    namespace EP11_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000d8)
        __FIELD(LAST_1, 0, 0, 0x501000d8)
        __FIELD(PID_1, 0, 0, 0x501000d8)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000d8)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000d8)
        __FIELD(LENGTH_1, 0, 0, 0x501000d8)
        __FIELD(FULL_0, 0, 0, 0x501000d8)
        __FIELD(LAST_0, 0, 0, 0x501000d8)
        __FIELD(PID_0, 0, 0, 0x501000d8)
        __FIELD(RESET, 0, 0, 0x501000d8)
        __FIELD(STALL, 0, 0, 0x501000d8)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000d8)
        __FIELD(LENGTH_0, 0, 0, 0x501000d8)
    }
    namespace EP11_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000dc)
        __FIELD(LAST_1, 0, 0, 0x501000dc)
        __FIELD(PID_1, 0, 0, 0x501000dc)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000dc)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000dc)
        __FIELD(LENGTH_1, 0, 0, 0x501000dc)
        __FIELD(FULL_0, 0, 0, 0x501000dc)
        __FIELD(LAST_0, 0, 0, 0x501000dc)
        __FIELD(PID_0, 0, 0, 0x501000dc)
        __FIELD(RESET, 0, 0, 0x501000dc)
        __FIELD(STALL, 0, 0, 0x501000dc)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000dc)
        __FIELD(LENGTH_0, 0, 0, 0x501000dc)
    }
    namespace EP12_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000e0)
        __FIELD(LAST_1, 0, 0, 0x501000e0)
        __FIELD(PID_1, 0, 0, 0x501000e0)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000e0)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000e0)
        __FIELD(LENGTH_1, 0, 0, 0x501000e0)
        __FIELD(FULL_0, 0, 0, 0x501000e0)
        __FIELD(LAST_0, 0, 0, 0x501000e0)
        __FIELD(PID_0, 0, 0, 0x501000e0)
        __FIELD(RESET, 0, 0, 0x501000e0)
        __FIELD(STALL, 0, 0, 0x501000e0)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000e0)
        __FIELD(LENGTH_0, 0, 0, 0x501000e0)
    }
    namespace EP12_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000e4)
        __FIELD(LAST_1, 0, 0, 0x501000e4)
        __FIELD(PID_1, 0, 0, 0x501000e4)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000e4)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000e4)
        __FIELD(LENGTH_1, 0, 0, 0x501000e4)
        __FIELD(FULL_0, 0, 0, 0x501000e4)
        __FIELD(LAST_0, 0, 0, 0x501000e4)
        __FIELD(PID_0, 0, 0, 0x501000e4)
        __FIELD(RESET, 0, 0, 0x501000e4)
        __FIELD(STALL, 0, 0, 0x501000e4)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000e4)
        __FIELD(LENGTH_0, 0, 0, 0x501000e4)
    }
    namespace EP13_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000e8)
        __FIELD(LAST_1, 0, 0, 0x501000e8)
        __FIELD(PID_1, 0, 0, 0x501000e8)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000e8)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000e8)
        __FIELD(LENGTH_1, 0, 0, 0x501000e8)
        __FIELD(FULL_0, 0, 0, 0x501000e8)
        __FIELD(LAST_0, 0, 0, 0x501000e8)
        __FIELD(PID_0, 0, 0, 0x501000e8)
        __FIELD(RESET, 0, 0, 0x501000e8)
        __FIELD(STALL, 0, 0, 0x501000e8)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000e8)
        __FIELD(LENGTH_0, 0, 0, 0x501000e8)
    }
    namespace EP13_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000ec)
        __FIELD(LAST_1, 0, 0, 0x501000ec)
        __FIELD(PID_1, 0, 0, 0x501000ec)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000ec)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000ec)
        __FIELD(LENGTH_1, 0, 0, 0x501000ec)
        __FIELD(FULL_0, 0, 0, 0x501000ec)
        __FIELD(LAST_0, 0, 0, 0x501000ec)
        __FIELD(PID_0, 0, 0, 0x501000ec)
        __FIELD(RESET, 0, 0, 0x501000ec)
        __FIELD(STALL, 0, 0, 0x501000ec)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000ec)
        __FIELD(LENGTH_0, 0, 0, 0x501000ec)
    }
    namespace EP14_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000f0)
        __FIELD(LAST_1, 0, 0, 0x501000f0)
        __FIELD(PID_1, 0, 0, 0x501000f0)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000f0)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000f0)
        __FIELD(LENGTH_1, 0, 0, 0x501000f0)
        __FIELD(FULL_0, 0, 0, 0x501000f0)
        __FIELD(LAST_0, 0, 0, 0x501000f0)
        __FIELD(PID_0, 0, 0, 0x501000f0)
        __FIELD(RESET, 0, 0, 0x501000f0)
        __FIELD(STALL, 0, 0, 0x501000f0)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000f0)
        __FIELD(LENGTH_0, 0, 0, 0x501000f0)
    }
    namespace EP14_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000f4)
        __FIELD(LAST_1, 0, 0, 0x501000f4)
        __FIELD(PID_1, 0, 0, 0x501000f4)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000f4)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000f4)
        __FIELD(LENGTH_1, 0, 0, 0x501000f4)
        __FIELD(FULL_0, 0, 0, 0x501000f4)
        __FIELD(LAST_0, 0, 0, 0x501000f4)
        __FIELD(PID_0, 0, 0, 0x501000f4)
        __FIELD(RESET, 0, 0, 0x501000f4)
        __FIELD(STALL, 0, 0, 0x501000f4)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000f4)
        __FIELD(LENGTH_0, 0, 0, 0x501000f4)
    }
    namespace EP15_IN_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000f8)
        __FIELD(LAST_1, 0, 0, 0x501000f8)
        __FIELD(PID_1, 0, 0, 0x501000f8)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000f8)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000f8)
        __FIELD(LENGTH_1, 0, 0, 0x501000f8)
        __FIELD(FULL_0, 0, 0, 0x501000f8)
        __FIELD(LAST_0, 0, 0, 0x501000f8)
        __FIELD(PID_0, 0, 0, 0x501000f8)
        __FIELD(RESET, 0, 0, 0x501000f8)
        __FIELD(STALL, 0, 0, 0x501000f8)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000f8)
        __FIELD(LENGTH_0, 0, 0, 0x501000f8)
    }
    namespace EP15_OUT_BUFFER_CONTROL{
        __FIELD(FULL_1, 0, 0, 0x501000fc)
        __FIELD(LAST_1, 0, 0, 0x501000fc)
        __FIELD(PID_1, 0, 0, 0x501000fc)
        __FIELD(DOUBLE_BUFFER_ISO_OFFSET, 0, 0, 0x501000fc)
        __FIELD(AVAILABLE_1, 0, 0, 0x501000fc)
        __FIELD(LENGTH_1, 0, 0, 0x501000fc)
        __FIELD(FULL_0, 0, 0, 0x501000fc)
        __FIELD(LAST_0, 0, 0, 0x501000fc)
        __FIELD(PID_0, 0, 0, 0x501000fc)
        __FIELD(RESET, 0, 0, 0x501000fc)
        __FIELD(STALL, 0, 0, 0x501000fc)
        __FIELD(AVAILABLE_0, 0, 0, 0x501000fc)
        __FIELD(LENGTH_0, 0, 0, 0x501000fc)
    }
}

namespace USBCTRL_REGS{
    namespace ADDR_ENDP{
        __FIELD(ENDPOINT, 0, 0, 0x50110000)
        __FIELD(ADDRESS, 0, 0, 0x50110000)
    }
    namespace ADDR_ENDP1{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110004)
        __FIELD(INTEP_DIR, 0, 0, 0x50110004)
        __FIELD(ENDPOINT, 0, 0, 0x50110004)
        __FIELD(ADDRESS, 0, 0, 0x50110004)
    }
    namespace ADDR_ENDP2{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110008)
        __FIELD(INTEP_DIR, 0, 0, 0x50110008)
        __FIELD(ENDPOINT, 0, 0, 0x50110008)
        __FIELD(ADDRESS, 0, 0, 0x50110008)
    }
    namespace ADDR_ENDP3{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x5011000c)
        __FIELD(INTEP_DIR, 0, 0, 0x5011000c)
        __FIELD(ENDPOINT, 0, 0, 0x5011000c)
        __FIELD(ADDRESS, 0, 0, 0x5011000c)
    }
    namespace ADDR_ENDP4{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110010)
        __FIELD(INTEP_DIR, 0, 0, 0x50110010)
        __FIELD(ENDPOINT, 0, 0, 0x50110010)
        __FIELD(ADDRESS, 0, 0, 0x50110010)
    }
    namespace ADDR_ENDP5{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110014)
        __FIELD(INTEP_DIR, 0, 0, 0x50110014)
        __FIELD(ENDPOINT, 0, 0, 0x50110014)
        __FIELD(ADDRESS, 0, 0, 0x50110014)
    }
    namespace ADDR_ENDP6{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110018)
        __FIELD(INTEP_DIR, 0, 0, 0x50110018)
        __FIELD(ENDPOINT, 0, 0, 0x50110018)
        __FIELD(ADDRESS, 0, 0, 0x50110018)
    }
    namespace ADDR_ENDP7{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x5011001c)
        __FIELD(INTEP_DIR, 0, 0, 0x5011001c)
        __FIELD(ENDPOINT, 0, 0, 0x5011001c)
        __FIELD(ADDRESS, 0, 0, 0x5011001c)
    }
    namespace ADDR_ENDP8{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110020)
        __FIELD(INTEP_DIR, 0, 0, 0x50110020)
        __FIELD(ENDPOINT, 0, 0, 0x50110020)
        __FIELD(ADDRESS, 0, 0, 0x50110020)
    }
    namespace ADDR_ENDP9{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110024)
        __FIELD(INTEP_DIR, 0, 0, 0x50110024)
        __FIELD(ENDPOINT, 0, 0, 0x50110024)
        __FIELD(ADDRESS, 0, 0, 0x50110024)
    }
    namespace ADDR_ENDP10{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110028)
        __FIELD(INTEP_DIR, 0, 0, 0x50110028)
        __FIELD(ENDPOINT, 0, 0, 0x50110028)
        __FIELD(ADDRESS, 0, 0, 0x50110028)
    }
    namespace ADDR_ENDP11{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x5011002c)
        __FIELD(INTEP_DIR, 0, 0, 0x5011002c)
        __FIELD(ENDPOINT, 0, 0, 0x5011002c)
        __FIELD(ADDRESS, 0, 0, 0x5011002c)
    }
    namespace ADDR_ENDP12{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110030)
        __FIELD(INTEP_DIR, 0, 0, 0x50110030)
        __FIELD(ENDPOINT, 0, 0, 0x50110030)
        __FIELD(ADDRESS, 0, 0, 0x50110030)
    }
    namespace ADDR_ENDP13{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110034)
        __FIELD(INTEP_DIR, 0, 0, 0x50110034)
        __FIELD(ENDPOINT, 0, 0, 0x50110034)
        __FIELD(ADDRESS, 0, 0, 0x50110034)
    }
    namespace ADDR_ENDP14{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x50110038)
        __FIELD(INTEP_DIR, 0, 0, 0x50110038)
        __FIELD(ENDPOINT, 0, 0, 0x50110038)
        __FIELD(ADDRESS, 0, 0, 0x50110038)
    }
    namespace ADDR_ENDP15{
        __FIELD(INTEP_PREAMBLE, 0, 0, 0x5011003c)
        __FIELD(INTEP_DIR, 0, 0, 0x5011003c)
        __FIELD(ENDPOINT, 0, 0, 0x5011003c)
        __FIELD(ADDRESS, 0, 0, 0x5011003c)
    }
    namespace MAIN_CTRL{
        __FIELD(SIM_TIMING, 0, 0, 0x50110040)
        __FIELD(HOST_NDEVICE, 0, 0, 0x50110040)
        __FIELD(CONTROLLER_EN, 0, 0, 0x50110040)
    }
    namespace SOF_WR{
        __FIELD(COUNT, 0, 0, 0x50110044)
    }
    namespace SOF_RD{
        __FIELD(COUNT, 0, 0, 0x50110048)
    }
    namespace SIE_CTRL{
        __FIELD(EP0_INT_STALL, 0, 0, 0x5011004c)
        __FIELD(EP0_DOUBLE_BUF, 0, 0, 0x5011004c)
        __FIELD(EP0_INT_1BUF, 0, 0, 0x5011004c)
        __FIELD(EP0_INT_2BUF, 0, 0, 0x5011004c)
        __FIELD(EP0_INT_NAK, 0, 0, 0x5011004c)
        __FIELD(DIRECT_EN, 0, 0, 0x5011004c)
        __FIELD(DIRECT_DP, 0, 0, 0x5011004c)
        __FIELD(DIRECT_DM, 0, 0, 0x5011004c)
        __FIELD(TRANSCEIVER_PD, 0, 0, 0x5011004c)
        __FIELD(RPU_OPT, 0, 0, 0x5011004c)
        __FIELD(PULLUP_EN, 0, 0, 0x5011004c)
        __FIELD(PULLDOWN_EN, 0, 0, 0x5011004c)
        __FIELD(RESET_BUS, 0, 0, 0x5011004c)
        __FIELD(RESUME, 0, 0, 0x5011004c)
        __FIELD(VBUS_EN, 0, 0, 0x5011004c)
        __FIELD(KEEP_ALIVE_EN, 0, 0, 0x5011004c)
        __FIELD(SOF_EN, 0, 0, 0x5011004c)
        __FIELD(SOF_SYNC, 0, 0, 0x5011004c)
        __FIELD(PREAMBLE_EN, 0, 0, 0x5011004c)
        __FIELD(STOP_TRANS, 0, 0, 0x5011004c)
        __FIELD(RECEIVE_DATA, 0, 0, 0x5011004c)
        __FIELD(SEND_DATA, 0, 0, 0x5011004c)
        __FIELD(SEND_SETUP, 0, 0, 0x5011004c)
        __FIELD(START_TRANS, 0, 0, 0x5011004c)
    }
    namespace SIE_STATUS{
        __FIELD(DATA_SEQ_ERROR, 0, 0, 0x50110050)
        __FIELD(ACK_REC, 0, 0, 0x50110050)
        __FIELD(STALL_REC, 0, 0, 0x50110050)
        __FIELD(NAK_REC, 0, 0, 0x50110050)
        __FIELD(RX_TIMEOUT, 0, 0, 0x50110050)
        __FIELD(RX_OVERFLOW, 0, 0, 0x50110050)
        __FIELD(BIT_STUFF_ERROR, 0, 0, 0x50110050)
        __FIELD(CRC_ERROR, 0, 0, 0x50110050)
        __FIELD(BUS_RESET, 0, 0, 0x50110050)
        __FIELD(TRANS_COMPLETE, 0, 0, 0x50110050)
        __FIELD(SETUP_REC, 0, 0, 0x50110050)
        __FIELD(CONNECTED, 0, 0, 0x50110050)
        __FIELD(RESUME, 0, 0, 0x50110050)
        __FIELD(VBUS_OVER_CURR, 0, 0, 0x50110050)
        __FIELD(SPEED, 0, 0, 0x50110050)
        __FIELD(SUSPENDED, 0, 0, 0x50110050)
        __FIELD(LINE_STATE, 0, 0, 0x50110050)
        __FIELD(VBUS_DETECTED, 0, 0, 0x50110050)
    }
    namespace INT_EP_CTRL{
        __FIELD(INT_EP_ACTIVE, 0, 0, 0x50110054)
    }
    namespace BUFF_STATUS{
        __FIELD(EP15_OUT, 0, 0, 0x50110058)
        __FIELD(EP15_IN, 0, 0, 0x50110058)
        __FIELD(EP14_OUT, 0, 0, 0x50110058)
        __FIELD(EP14_IN, 0, 0, 0x50110058)
        __FIELD(EP13_OUT, 0, 0, 0x50110058)
        __FIELD(EP13_IN, 0, 0, 0x50110058)
        __FIELD(EP12_OUT, 0, 0, 0x50110058)
        __FIELD(EP12_IN, 0, 0, 0x50110058)
        __FIELD(EP11_OUT, 0, 0, 0x50110058)
        __FIELD(EP11_IN, 0, 0, 0x50110058)
        __FIELD(EP10_OUT, 0, 0, 0x50110058)
        __FIELD(EP10_IN, 0, 0, 0x50110058)
        __FIELD(EP9_OUT, 0, 0, 0x50110058)
        __FIELD(EP9_IN, 0, 0, 0x50110058)
        __FIELD(EP8_OUT, 0, 0, 0x50110058)
        __FIELD(EP8_IN, 0, 0, 0x50110058)
        __FIELD(EP7_OUT, 0, 0, 0x50110058)
        __FIELD(EP7_IN, 0, 0, 0x50110058)
        __FIELD(EP6_OUT, 0, 0, 0x50110058)
        __FIELD(EP6_IN, 0, 0, 0x50110058)
        __FIELD(EP5_OUT, 0, 0, 0x50110058)
        __FIELD(EP5_IN, 0, 0, 0x50110058)
        __FIELD(EP4_OUT, 0, 0, 0x50110058)
        __FIELD(EP4_IN, 0, 0, 0x50110058)
        __FIELD(EP3_OUT, 0, 0, 0x50110058)
        __FIELD(EP3_IN, 0, 0, 0x50110058)
        __FIELD(EP2_OUT, 0, 0, 0x50110058)
        __FIELD(EP2_IN, 0, 0, 0x50110058)
        __FIELD(EP1_OUT, 0, 0, 0x50110058)
        __FIELD(EP1_IN, 0, 0, 0x50110058)
        __FIELD(EP0_OUT, 0, 0, 0x50110058)
        __FIELD(EP0_IN, 0, 0, 0x50110058)
    }
    namespace BUFF_CPU_SHOULD_HANDLE{
        __FIELD(EP15_OUT, 0, 0, 0x5011005c)
        __FIELD(EP15_IN, 0, 0, 0x5011005c)
        __FIELD(EP14_OUT, 0, 0, 0x5011005c)
        __FIELD(EP14_IN, 0, 0, 0x5011005c)
        __FIELD(EP13_OUT, 0, 0, 0x5011005c)
        __FIELD(EP13_IN, 0, 0, 0x5011005c)
        __FIELD(EP12_OUT, 0, 0, 0x5011005c)
        __FIELD(EP12_IN, 0, 0, 0x5011005c)
        __FIELD(EP11_OUT, 0, 0, 0x5011005c)
        __FIELD(EP11_IN, 0, 0, 0x5011005c)
        __FIELD(EP10_OUT, 0, 0, 0x5011005c)
        __FIELD(EP10_IN, 0, 0, 0x5011005c)
        __FIELD(EP9_OUT, 0, 0, 0x5011005c)
        __FIELD(EP9_IN, 0, 0, 0x5011005c)
        __FIELD(EP8_OUT, 0, 0, 0x5011005c)
        __FIELD(EP8_IN, 0, 0, 0x5011005c)
        __FIELD(EP7_OUT, 0, 0, 0x5011005c)
        __FIELD(EP7_IN, 0, 0, 0x5011005c)
        __FIELD(EP6_OUT, 0, 0, 0x5011005c)
        __FIELD(EP6_IN, 0, 0, 0x5011005c)
        __FIELD(EP5_OUT, 0, 0, 0x5011005c)
        __FIELD(EP5_IN, 0, 0, 0x5011005c)
        __FIELD(EP4_OUT, 0, 0, 0x5011005c)
        __FIELD(EP4_IN, 0, 0, 0x5011005c)
        __FIELD(EP3_OUT, 0, 0, 0x5011005c)
        __FIELD(EP3_IN, 0, 0, 0x5011005c)
        __FIELD(EP2_OUT, 0, 0, 0x5011005c)
        __FIELD(EP2_IN, 0, 0, 0x5011005c)
        __FIELD(EP1_OUT, 0, 0, 0x5011005c)
        __FIELD(EP1_IN, 0, 0, 0x5011005c)
        __FIELD(EP0_OUT, 0, 0, 0x5011005c)
        __FIELD(EP0_IN, 0, 0, 0x5011005c)
    }
    namespace EP_ABORT{
        __FIELD(EP15_OUT, 0, 0, 0x50110060)
        __FIELD(EP15_IN, 0, 0, 0x50110060)
        __FIELD(EP14_OUT, 0, 0, 0x50110060)
        __FIELD(EP14_IN, 0, 0, 0x50110060)
        __FIELD(EP13_OUT, 0, 0, 0x50110060)
        __FIELD(EP13_IN, 0, 0, 0x50110060)
        __FIELD(EP12_OUT, 0, 0, 0x50110060)
        __FIELD(EP12_IN, 0, 0, 0x50110060)
        __FIELD(EP11_OUT, 0, 0, 0x50110060)
        __FIELD(EP11_IN, 0, 0, 0x50110060)
        __FIELD(EP10_OUT, 0, 0, 0x50110060)
        __FIELD(EP10_IN, 0, 0, 0x50110060)
        __FIELD(EP9_OUT, 0, 0, 0x50110060)
        __FIELD(EP9_IN, 0, 0, 0x50110060)
        __FIELD(EP8_OUT, 0, 0, 0x50110060)
        __FIELD(EP8_IN, 0, 0, 0x50110060)
        __FIELD(EP7_OUT, 0, 0, 0x50110060)
        __FIELD(EP7_IN, 0, 0, 0x50110060)
        __FIELD(EP6_OUT, 0, 0, 0x50110060)
        __FIELD(EP6_IN, 0, 0, 0x50110060)
        __FIELD(EP5_OUT, 0, 0, 0x50110060)
        __FIELD(EP5_IN, 0, 0, 0x50110060)
        __FIELD(EP4_OUT, 0, 0, 0x50110060)
        __FIELD(EP4_IN, 0, 0, 0x50110060)
        __FIELD(EP3_OUT, 0, 0, 0x50110060)
        __FIELD(EP3_IN, 0, 0, 0x50110060)
        __FIELD(EP2_OUT, 0, 0, 0x50110060)
        __FIELD(EP2_IN, 0, 0, 0x50110060)
        __FIELD(EP1_OUT, 0, 0, 0x50110060)
        __FIELD(EP1_IN, 0, 0, 0x50110060)
        __FIELD(EP0_OUT, 0, 0, 0x50110060)
        __FIELD(EP0_IN, 0, 0, 0x50110060)
    }
    namespace EP_ABORT_DONE{
        __FIELD(EP15_OUT, 0, 0, 0x50110064)
        __FIELD(EP15_IN, 0, 0, 0x50110064)
        __FIELD(EP14_OUT, 0, 0, 0x50110064)
        __FIELD(EP14_IN, 0, 0, 0x50110064)
        __FIELD(EP13_OUT, 0, 0, 0x50110064)
        __FIELD(EP13_IN, 0, 0, 0x50110064)
        __FIELD(EP12_OUT, 0, 0, 0x50110064)
        __FIELD(EP12_IN, 0, 0, 0x50110064)
        __FIELD(EP11_OUT, 0, 0, 0x50110064)
        __FIELD(EP11_IN, 0, 0, 0x50110064)
        __FIELD(EP10_OUT, 0, 0, 0x50110064)
        __FIELD(EP10_IN, 0, 0, 0x50110064)
        __FIELD(EP9_OUT, 0, 0, 0x50110064)
        __FIELD(EP9_IN, 0, 0, 0x50110064)
        __FIELD(EP8_OUT, 0, 0, 0x50110064)
        __FIELD(EP8_IN, 0, 0, 0x50110064)
        __FIELD(EP7_OUT, 0, 0, 0x50110064)
        __FIELD(EP7_IN, 0, 0, 0x50110064)
        __FIELD(EP6_OUT, 0, 0, 0x50110064)
        __FIELD(EP6_IN, 0, 0, 0x50110064)
        __FIELD(EP5_OUT, 0, 0, 0x50110064)
        __FIELD(EP5_IN, 0, 0, 0x50110064)
        __FIELD(EP4_OUT, 0, 0, 0x50110064)
        __FIELD(EP4_IN, 0, 0, 0x50110064)
        __FIELD(EP3_OUT, 0, 0, 0x50110064)
        __FIELD(EP3_IN, 0, 0, 0x50110064)
        __FIELD(EP2_OUT, 0, 0, 0x50110064)
        __FIELD(EP2_IN, 0, 0, 0x50110064)
        __FIELD(EP1_OUT, 0, 0, 0x50110064)
        __FIELD(EP1_IN, 0, 0, 0x50110064)
        __FIELD(EP0_OUT, 0, 0, 0x50110064)
        __FIELD(EP0_IN, 0, 0, 0x50110064)
    }
    namespace EP_STALL_ARM{
        __FIELD(EP0_OUT, 0, 0, 0x50110068)
        __FIELD(EP0_IN, 0, 0, 0x50110068)
    }
    namespace NAK_POLL{
        __FIELD(DELAY_FS, 0, 0, 0x5011006c)
        __FIELD(DELAY_LS, 0, 0, 0x5011006c)
    }
    namespace EP_STATUS_STALL_NAK{
        __FIELD(EP15_OUT, 0, 0, 0x50110070)
        __FIELD(EP15_IN, 0, 0, 0x50110070)
        __FIELD(EP14_OUT, 0, 0, 0x50110070)
        __FIELD(EP14_IN, 0, 0, 0x50110070)
        __FIELD(EP13_OUT, 0, 0, 0x50110070)
        __FIELD(EP13_IN, 0, 0, 0x50110070)
        __FIELD(EP12_OUT, 0, 0, 0x50110070)
        __FIELD(EP12_IN, 0, 0, 0x50110070)
        __FIELD(EP11_OUT, 0, 0, 0x50110070)
        __FIELD(EP11_IN, 0, 0, 0x50110070)
        __FIELD(EP10_OUT, 0, 0, 0x50110070)
        __FIELD(EP10_IN, 0, 0, 0x50110070)
        __FIELD(EP9_OUT, 0, 0, 0x50110070)
        __FIELD(EP9_IN, 0, 0, 0x50110070)
        __FIELD(EP8_OUT, 0, 0, 0x50110070)
        __FIELD(EP8_IN, 0, 0, 0x50110070)
        __FIELD(EP7_OUT, 0, 0, 0x50110070)
        __FIELD(EP7_IN, 0, 0, 0x50110070)
        __FIELD(EP6_OUT, 0, 0, 0x50110070)
        __FIELD(EP6_IN, 0, 0, 0x50110070)
        __FIELD(EP5_OUT, 0, 0, 0x50110070)
        __FIELD(EP5_IN, 0, 0, 0x50110070)
        __FIELD(EP4_OUT, 0, 0, 0x50110070)
        __FIELD(EP4_IN, 0, 0, 0x50110070)
        __FIELD(EP3_OUT, 0, 0, 0x50110070)
        __FIELD(EP3_IN, 0, 0, 0x50110070)
        __FIELD(EP2_OUT, 0, 0, 0x50110070)
        __FIELD(EP2_IN, 0, 0, 0x50110070)
        __FIELD(EP1_OUT, 0, 0, 0x50110070)
        __FIELD(EP1_IN, 0, 0, 0x50110070)
        __FIELD(EP0_OUT, 0, 0, 0x50110070)
        __FIELD(EP0_IN, 0, 0, 0x50110070)
    }
    namespace USB_MUXING{
        __FIELD(SOFTCON, 0, 0, 0x50110074)
        __FIELD(TO_DIGITAL_PAD, 0, 0, 0x50110074)
        __FIELD(TO_EXTPHY, 0, 0, 0x50110074)
        __FIELD(TO_PHY, 0, 0, 0x50110074)
    }
    namespace USB_PWR{
        __FIELD(OVERCURR_DETECT_EN, 0, 0, 0x50110078)
        __FIELD(OVERCURR_DETECT, 0, 0, 0x50110078)
        __FIELD(VBUS_DETECT_OVERRIDE_EN, 0, 0, 0x50110078)
        __FIELD(VBUS_DETECT, 0, 0, 0x50110078)
        __FIELD(VBUS_EN_OVERRIDE_EN, 0, 0, 0x50110078)
        __FIELD(VBUS_EN, 0, 0, 0x50110078)
    }
    namespace USBPHY_DIRECT{
        __FIELD(DM_OVV, 0, 0, 0x5011007c)
        __FIELD(DP_OVV, 0, 0, 0x5011007c)
        __FIELD(DM_OVCN, 0, 0, 0x5011007c)
        __FIELD(DP_OVCN, 0, 0, 0x5011007c)
        __FIELD(RX_DM, 0, 0, 0x5011007c)
        __FIELD(RX_DP, 0, 0, 0x5011007c)
        __FIELD(RX_DD, 0, 0, 0x5011007c)
        __FIELD(TX_DIFFMODE, 0, 0, 0x5011007c)
        __FIELD(TX_FSSLEW, 0, 0, 0x5011007c)
        __FIELD(TX_PD, 0, 0, 0x5011007c)
        __FIELD(RX_PD, 0, 0, 0x5011007c)
        __FIELD(TX_DM, 0, 0, 0x5011007c)
        __FIELD(TX_DP, 0, 0, 0x5011007c)
        __FIELD(TX_DM_OE, 0, 0, 0x5011007c)
        __FIELD(TX_DP_OE, 0, 0, 0x5011007c)
        __FIELD(DM_PULLDN_EN, 0, 0, 0x5011007c)
        __FIELD(DM_PULLUP_EN, 0, 0, 0x5011007c)
        __FIELD(DM_PULLUP_HISEL, 0, 0, 0x5011007c)
        __FIELD(DP_PULLDN_EN, 0, 0, 0x5011007c)
        __FIELD(DP_PULLUP_EN, 0, 0, 0x5011007c)
        __FIELD(DP_PULLUP_HISEL, 0, 0, 0x5011007c)
    }
    namespace USBPHY_DIRECT_OVERRIDE{
        __FIELD(TX_DIFFMODE_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(DM_PULLUP_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(TX_FSSLEW_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(TX_PD_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(RX_PD_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(TX_DM_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(TX_DP_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(TX_DM_OE_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(TX_DP_OE_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(DM_PULLDN_EN_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(DP_PULLDN_EN_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(DP_PULLUP_EN_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(DM_PULLUP_HISEL_OVERRIDE_EN, 0, 0, 0x50110080)
        __FIELD(DP_PULLUP_HISEL_OVERRIDE_EN, 0, 0, 0x50110080)
    }
    namespace USBPHY_TRIM{
        __FIELD(DM_PULLDN_TRIM, 0, 0, 0x50110084)
        __FIELD(DP_PULLDN_TRIM, 0, 0, 0x50110084)
    }
    namespace INTR{
        __FIELD(EP_STALL_NAK, 0, 0, 0x5011008c)
        __FIELD(ABORT_DONE, 0, 0, 0x5011008c)
        __FIELD(DEV_SOF, 0, 0, 0x5011008c)
        __FIELD(SETUP_REQ, 0, 0, 0x5011008c)
        __FIELD(DEV_RESUME_FROM_HOST, 0, 0, 0x5011008c)
        __FIELD(DEV_SUSPEND, 0, 0, 0x5011008c)
        __FIELD(DEV_CONN_DIS, 0, 0, 0x5011008c)
        __FIELD(BUS_RESET, 0, 0, 0x5011008c)
        __FIELD(VBUS_DETECT, 0, 0, 0x5011008c)
        __FIELD(STALL, 0, 0, 0x5011008c)
        __FIELD(ERROR_CRC, 0, 0, 0x5011008c)
        __FIELD(ERROR_BIT_STUFF, 0, 0, 0x5011008c)
        __FIELD(ERROR_RX_OVERFLOW, 0, 0, 0x5011008c)
        __FIELD(ERROR_RX_TIMEOUT, 0, 0, 0x5011008c)
        __FIELD(ERROR_DATA_SEQ, 0, 0, 0x5011008c)
        __FIELD(BUFF_STATUS, 0, 0, 0x5011008c)
        __FIELD(TRANS_COMPLETE, 0, 0, 0x5011008c)
        __FIELD(HOST_SOF, 0, 0, 0x5011008c)
        __FIELD(HOST_RESUME, 0, 0, 0x5011008c)
        __FIELD(HOST_CONN_DIS, 0, 0, 0x5011008c)
    }
    namespace INTE{
        __FIELD(EP_STALL_NAK, 0, 0, 0x50110090)
        __FIELD(ABORT_DONE, 0, 0, 0x50110090)
        __FIELD(DEV_SOF, 0, 0, 0x50110090)
        __FIELD(SETUP_REQ, 0, 0, 0x50110090)
        __FIELD(DEV_RESUME_FROM_HOST, 0, 0, 0x50110090)
        __FIELD(DEV_SUSPEND, 0, 0, 0x50110090)
        __FIELD(DEV_CONN_DIS, 0, 0, 0x50110090)
        __FIELD(BUS_RESET, 0, 0, 0x50110090)
        __FIELD(VBUS_DETECT, 0, 0, 0x50110090)
        __FIELD(STALL, 0, 0, 0x50110090)
        __FIELD(ERROR_CRC, 0, 0, 0x50110090)
        __FIELD(ERROR_BIT_STUFF, 0, 0, 0x50110090)
        __FIELD(ERROR_RX_OVERFLOW, 0, 0, 0x50110090)
        __FIELD(ERROR_RX_TIMEOUT, 0, 0, 0x50110090)
        __FIELD(ERROR_DATA_SEQ, 0, 0, 0x50110090)
        __FIELD(BUFF_STATUS, 0, 0, 0x50110090)
        __FIELD(TRANS_COMPLETE, 0, 0, 0x50110090)
        __FIELD(HOST_SOF, 0, 0, 0x50110090)
        __FIELD(HOST_RESUME, 0, 0, 0x50110090)
        __FIELD(HOST_CONN_DIS, 0, 0, 0x50110090)
    }
    namespace INTF{
        __FIELD(EP_STALL_NAK, 0, 0, 0x50110094)
        __FIELD(ABORT_DONE, 0, 0, 0x50110094)
        __FIELD(DEV_SOF, 0, 0, 0x50110094)
        __FIELD(SETUP_REQ, 0, 0, 0x50110094)
        __FIELD(DEV_RESUME_FROM_HOST, 0, 0, 0x50110094)
        __FIELD(DEV_SUSPEND, 0, 0, 0x50110094)
        __FIELD(DEV_CONN_DIS, 0, 0, 0x50110094)
        __FIELD(BUS_RESET, 0, 0, 0x50110094)
        __FIELD(VBUS_DETECT, 0, 0, 0x50110094)
        __FIELD(STALL, 0, 0, 0x50110094)
        __FIELD(ERROR_CRC, 0, 0, 0x50110094)
        __FIELD(ERROR_BIT_STUFF, 0, 0, 0x50110094)
        __FIELD(ERROR_RX_OVERFLOW, 0, 0, 0x50110094)
        __FIELD(ERROR_RX_TIMEOUT, 0, 0, 0x50110094)
        __FIELD(ERROR_DATA_SEQ, 0, 0, 0x50110094)
        __FIELD(BUFF_STATUS, 0, 0, 0x50110094)
        __FIELD(TRANS_COMPLETE, 0, 0, 0x50110094)
        __FIELD(HOST_SOF, 0, 0, 0x50110094)
        __FIELD(HOST_RESUME, 0, 0, 0x50110094)
        __FIELD(HOST_CONN_DIS, 0, 0, 0x50110094)
    }
    namespace INTS{
        __FIELD(EP_STALL_NAK, 0, 0, 0x50110098)
        __FIELD(ABORT_DONE, 0, 0, 0x50110098)
        __FIELD(DEV_SOF, 0, 0, 0x50110098)
        __FIELD(SETUP_REQ, 0, 0, 0x50110098)
        __FIELD(DEV_RESUME_FROM_HOST, 0, 0, 0x50110098)
        __FIELD(DEV_SUSPEND, 0, 0, 0x50110098)
        __FIELD(DEV_CONN_DIS, 0, 0, 0x50110098)
        __FIELD(BUS_RESET, 0, 0, 0x50110098)
        __FIELD(VBUS_DETECT, 0, 0, 0x50110098)
        __FIELD(STALL, 0, 0, 0x50110098)
        __FIELD(ERROR_CRC, 0, 0, 0x50110098)
        __FIELD(ERROR_BIT_STUFF, 0, 0, 0x50110098)
        __FIELD(ERROR_RX_OVERFLOW, 0, 0, 0x50110098)
        __FIELD(ERROR_RX_TIMEOUT, 0, 0, 0x50110098)
        __FIELD(ERROR_DATA_SEQ, 0, 0, 0x50110098)
        __FIELD(BUFF_STATUS, 0, 0, 0x50110098)
        __FIELD(TRANS_COMPLETE, 0, 0, 0x50110098)
        __FIELD(HOST_SOF, 0, 0, 0x50110098)
        __FIELD(HOST_RESUME, 0, 0, 0x50110098)
        __FIELD(HOST_CONN_DIS, 0, 0, 0x50110098)
    }
}

namespace PIO0{
    namespace CTRL{
        __FIELD(CLKDIV_RESTART, 0, 0, 0x50200000)
        __FIELD(SM_RESTART, 0, 0, 0x50200000)
        __FIELD(SM_ENABLE, 0, 0, 0x50200000)
    }
    namespace FSTAT{
        __FIELD(TXEMPTY, 0, 0, 0x50200004)
        __FIELD(TXFULL, 0, 0, 0x50200004)
        __FIELD(RXEMPTY, 0, 0, 0x50200004)
        __FIELD(RXFULL, 0, 0, 0x50200004)
    }
    namespace FDEBUG{
        __FIELD(TXSTALL, 0, 0, 0x50200008)
        __FIELD(TXOVER, 0, 0, 0x50200008)
        __FIELD(RXUNDER, 0, 0, 0x50200008)
        __FIELD(RXSTALL, 0, 0, 0x50200008)
    }
    namespace FLEVEL{
        __FIELD(RX3, 0, 0, 0x5020000c)
        __FIELD(TX3, 0, 0, 0x5020000c)
        __FIELD(RX2, 0, 0, 0x5020000c)
        __FIELD(TX2, 0, 0, 0x5020000c)
        __FIELD(RX1, 0, 0, 0x5020000c)
        __FIELD(TX1, 0, 0, 0x5020000c)
        __FIELD(RX0, 0, 0, 0x5020000c)
        __FIELD(TX0, 0, 0, 0x5020000c)
    }
    namespace TXF0{
    }
    namespace TXF1{
    }
    namespace TXF2{
    }
    namespace TXF3{
    }
    namespace RXF0{
    }
    namespace RXF1{
    }
    namespace RXF2{
    }
    namespace RXF3{
    }
    namespace IRQ{
        __FIELD(IRQ, 0, 0, 0x50200030)
    }
    namespace IRQ_FORCE{
        __FIELD(IRQ_FORCE, 0, 0, 0x50200034)
    }
    namespace INPUT_SYNC_BYPASS{
    }
    namespace DBG_PADOUT{
    }
    namespace DBG_PADOE{
    }
    namespace DBG_CFGINFO{
        __FIELD(IMEM_SIZE, 0, 0, 0x50200044)
        __FIELD(SM_COUNT, 0, 0, 0x50200044)
        __FIELD(FIFO_DEPTH, 0, 0, 0x50200044)
    }
    namespace INSTR_MEM0{
        __FIELD(INSTR_MEM0, 0, 0, 0x50200048)
    }
    namespace INSTR_MEM1{
        __FIELD(INSTR_MEM1, 0, 0, 0x5020004c)
    }
    namespace INSTR_MEM2{
        __FIELD(INSTR_MEM2, 0, 0, 0x50200050)
    }
    namespace INSTR_MEM3{
        __FIELD(INSTR_MEM3, 0, 0, 0x50200054)
    }
    namespace INSTR_MEM4{
        __FIELD(INSTR_MEM4, 0, 0, 0x50200058)
    }
    namespace INSTR_MEM5{
        __FIELD(INSTR_MEM5, 0, 0, 0x5020005c)
    }
    namespace INSTR_MEM6{
        __FIELD(INSTR_MEM6, 0, 0, 0x50200060)
    }
    namespace INSTR_MEM7{
        __FIELD(INSTR_MEM7, 0, 0, 0x50200064)
    }
    namespace INSTR_MEM8{
        __FIELD(INSTR_MEM8, 0, 0, 0x50200068)
    }
    namespace INSTR_MEM9{
        __FIELD(INSTR_MEM9, 0, 0, 0x5020006c)
    }
    namespace INSTR_MEM10{
        __FIELD(INSTR_MEM10, 0, 0, 0x50200070)
    }
    namespace INSTR_MEM11{
        __FIELD(INSTR_MEM11, 0, 0, 0x50200074)
    }
    namespace INSTR_MEM12{
        __FIELD(INSTR_MEM12, 0, 0, 0x50200078)
    }
    namespace INSTR_MEM13{
        __FIELD(INSTR_MEM13, 0, 0, 0x5020007c)
    }
    namespace INSTR_MEM14{
        __FIELD(INSTR_MEM14, 0, 0, 0x50200080)
    }
    namespace INSTR_MEM15{
        __FIELD(INSTR_MEM15, 0, 0, 0x50200084)
    }
    namespace INSTR_MEM16{
        __FIELD(INSTR_MEM16, 0, 0, 0x50200088)
    }
    namespace INSTR_MEM17{
        __FIELD(INSTR_MEM17, 0, 0, 0x5020008c)
    }
    namespace INSTR_MEM18{
        __FIELD(INSTR_MEM18, 0, 0, 0x50200090)
    }
    namespace INSTR_MEM19{
        __FIELD(INSTR_MEM19, 0, 0, 0x50200094)
    }
    namespace INSTR_MEM20{
        __FIELD(INSTR_MEM20, 0, 0, 0x50200098)
    }
    namespace INSTR_MEM21{
        __FIELD(INSTR_MEM21, 0, 0, 0x5020009c)
    }
    namespace INSTR_MEM22{
        __FIELD(INSTR_MEM22, 0, 0, 0x502000a0)
    }
    namespace INSTR_MEM23{
        __FIELD(INSTR_MEM23, 0, 0, 0x502000a4)
    }
    namespace INSTR_MEM24{
        __FIELD(INSTR_MEM24, 0, 0, 0x502000a8)
    }
    namespace INSTR_MEM25{
        __FIELD(INSTR_MEM25, 0, 0, 0x502000ac)
    }
    namespace INSTR_MEM26{
        __FIELD(INSTR_MEM26, 0, 0, 0x502000b0)
    }
    namespace INSTR_MEM27{
        __FIELD(INSTR_MEM27, 0, 0, 0x502000b4)
    }
    namespace INSTR_MEM28{
        __FIELD(INSTR_MEM28, 0, 0, 0x502000b8)
    }
    namespace INSTR_MEM29{
        __FIELD(INSTR_MEM29, 0, 0, 0x502000bc)
    }
    namespace INSTR_MEM30{
        __FIELD(INSTR_MEM30, 0, 0, 0x502000c0)
    }
    namespace INSTR_MEM31{
        __FIELD(INSTR_MEM31, 0, 0, 0x502000c4)
    }
    namespace SM0_CLKDIV{
        __FIELD(INT, 0, 0, 0x502000c8)
        __FIELD(FRAC, 0, 0, 0x502000c8)
    }
    namespace SM0_EXECCTRL{
        __FIELD(EXEC_STALLED, 0, 0, 0x502000cc)
        __FIELD(SIDE_EN, 0, 0, 0x502000cc)
        __FIELD(SIDE_PINDIR, 0, 0, 0x502000cc)
        __FIELD(JMP_PIN, 0, 0, 0x502000cc)
        __FIELD(OUT_EN_SEL, 0, 0, 0x502000cc)
        __FIELD(INLINE_OUT_EN, 0, 0, 0x502000cc)
        __FIELD(OUT_STICKY, 0, 0, 0x502000cc)
        __FIELD(WRAP_TOP, 0, 0, 0x502000cc)
        __FIELD(WRAP_BOTTOM, 0, 0, 0x502000cc)
        __FIELD(STATUS_SEL, 0, 0, 0x502000cc)
        __FIELD(STATUS_N, 0, 0, 0x502000cc)
    }
    namespace SM0_SHIFTCTRL{
        __FIELD(FJOIN_RX, 0, 0, 0x502000d0)
        __FIELD(FJOIN_TX, 0, 0, 0x502000d0)
        __FIELD(PULL_THRESH, 0, 0, 0x502000d0)
        __FIELD(PUSH_THRESH, 0, 0, 0x502000d0)
        __FIELD(OUT_SHIFTDIR, 0, 0, 0x502000d0)
        __FIELD(IN_SHIFTDIR, 0, 0, 0x502000d0)
        __FIELD(AUTOPULL, 0, 0, 0x502000d0)
        __FIELD(AUTOPUSH, 0, 0, 0x502000d0)
    }
    namespace SM0_ADDR{
        __FIELD(SM0_ADDR, 0, 0, 0x502000d4)
    }
    namespace SM0_INSTR{
        __FIELD(SM0_INSTR, 0, 0, 0x502000d8)
    }
    namespace SM0_PINCTRL{
        __FIELD(SIDESET_COUNT, 0, 0, 0x502000dc)
        __FIELD(SET_COUNT, 0, 0, 0x502000dc)
        __FIELD(OUT_COUNT, 0, 0, 0x502000dc)
        __FIELD(IN_BASE, 0, 0, 0x502000dc)
        __FIELD(SIDESET_BASE, 0, 0, 0x502000dc)
        __FIELD(SET_BASE, 0, 0, 0x502000dc)
        __FIELD(OUT_BASE, 0, 0, 0x502000dc)
    }
    namespace SM1_CLKDIV{
        __FIELD(INT, 0, 0, 0x502000e0)
        __FIELD(FRAC, 0, 0, 0x502000e0)
    }
    namespace SM1_EXECCTRL{
        __FIELD(EXEC_STALLED, 0, 0, 0x502000e4)
        __FIELD(SIDE_EN, 0, 0, 0x502000e4)
        __FIELD(SIDE_PINDIR, 0, 0, 0x502000e4)
        __FIELD(JMP_PIN, 0, 0, 0x502000e4)
        __FIELD(OUT_EN_SEL, 0, 0, 0x502000e4)
        __FIELD(INLINE_OUT_EN, 0, 0, 0x502000e4)
        __FIELD(OUT_STICKY, 0, 0, 0x502000e4)
        __FIELD(WRAP_TOP, 0, 0, 0x502000e4)
        __FIELD(WRAP_BOTTOM, 0, 0, 0x502000e4)
        __FIELD(STATUS_SEL, 0, 0, 0x502000e4)
        __FIELD(STATUS_N, 0, 0, 0x502000e4)
    }
    namespace SM1_SHIFTCTRL{
        __FIELD(FJOIN_RX, 0, 0, 0x502000e8)
        __FIELD(FJOIN_TX, 0, 0, 0x502000e8)
        __FIELD(PULL_THRESH, 0, 0, 0x502000e8)
        __FIELD(PUSH_THRESH, 0, 0, 0x502000e8)
        __FIELD(OUT_SHIFTDIR, 0, 0, 0x502000e8)
        __FIELD(IN_SHIFTDIR, 0, 0, 0x502000e8)
        __FIELD(AUTOPULL, 0, 0, 0x502000e8)
        __FIELD(AUTOPUSH, 0, 0, 0x502000e8)
    }
    namespace SM1_ADDR{
        __FIELD(SM1_ADDR, 0, 0, 0x502000ec)
    }
    namespace SM1_INSTR{
        __FIELD(SM1_INSTR, 0, 0, 0x502000f0)
    }
    namespace SM1_PINCTRL{
        __FIELD(SIDESET_COUNT, 0, 0, 0x502000f4)
        __FIELD(SET_COUNT, 0, 0, 0x502000f4)
        __FIELD(OUT_COUNT, 0, 0, 0x502000f4)
        __FIELD(IN_BASE, 0, 0, 0x502000f4)
        __FIELD(SIDESET_BASE, 0, 0, 0x502000f4)
        __FIELD(SET_BASE, 0, 0, 0x502000f4)
        __FIELD(OUT_BASE, 0, 0, 0x502000f4)
    }
    namespace SM2_CLKDIV{
        __FIELD(INT, 0, 0, 0x502000f8)
        __FIELD(FRAC, 0, 0, 0x502000f8)
    }
    namespace SM2_EXECCTRL{
        __FIELD(EXEC_STALLED, 0, 0, 0x502000fc)
        __FIELD(SIDE_EN, 0, 0, 0x502000fc)
        __FIELD(SIDE_PINDIR, 0, 0, 0x502000fc)
        __FIELD(JMP_PIN, 0, 0, 0x502000fc)
        __FIELD(OUT_EN_SEL, 0, 0, 0x502000fc)
        __FIELD(INLINE_OUT_EN, 0, 0, 0x502000fc)
        __FIELD(OUT_STICKY, 0, 0, 0x502000fc)
        __FIELD(WRAP_TOP, 0, 0, 0x502000fc)
        __FIELD(WRAP_BOTTOM, 0, 0, 0x502000fc)
        __FIELD(STATUS_SEL, 0, 0, 0x502000fc)
        __FIELD(STATUS_N, 0, 0, 0x502000fc)
    }
    namespace SM2_SHIFTCTRL{
        __FIELD(FJOIN_RX, 0, 0, 0x50200100)
        __FIELD(FJOIN_TX, 0, 0, 0x50200100)
        __FIELD(PULL_THRESH, 0, 0, 0x50200100)
        __FIELD(PUSH_THRESH, 0, 0, 0x50200100)
        __FIELD(OUT_SHIFTDIR, 0, 0, 0x50200100)
        __FIELD(IN_SHIFTDIR, 0, 0, 0x50200100)
        __FIELD(AUTOPULL, 0, 0, 0x50200100)
        __FIELD(AUTOPUSH, 0, 0, 0x50200100)
    }
    namespace SM2_ADDR{
        __FIELD(SM2_ADDR, 0, 0, 0x50200104)
    }
    namespace SM2_INSTR{
        __FIELD(SM2_INSTR, 0, 0, 0x50200108)
    }
    namespace SM2_PINCTRL{
        __FIELD(SIDESET_COUNT, 0, 0, 0x5020010c)
        __FIELD(SET_COUNT, 0, 0, 0x5020010c)
        __FIELD(OUT_COUNT, 0, 0, 0x5020010c)
        __FIELD(IN_BASE, 0, 0, 0x5020010c)
        __FIELD(SIDESET_BASE, 0, 0, 0x5020010c)
        __FIELD(SET_BASE, 0, 0, 0x5020010c)
        __FIELD(OUT_BASE, 0, 0, 0x5020010c)
    }
    namespace SM3_CLKDIV{
        __FIELD(INT, 0, 0, 0x50200110)
        __FIELD(FRAC, 0, 0, 0x50200110)
    }
    namespace SM3_EXECCTRL{
        __FIELD(EXEC_STALLED, 0, 0, 0x50200114)
        __FIELD(SIDE_EN, 0, 0, 0x50200114)
        __FIELD(SIDE_PINDIR, 0, 0, 0x50200114)
        __FIELD(JMP_PIN, 0, 0, 0x50200114)
        __FIELD(OUT_EN_SEL, 0, 0, 0x50200114)
        __FIELD(INLINE_OUT_EN, 0, 0, 0x50200114)
        __FIELD(OUT_STICKY, 0, 0, 0x50200114)
        __FIELD(WRAP_TOP, 0, 0, 0x50200114)
        __FIELD(WRAP_BOTTOM, 0, 0, 0x50200114)
        __FIELD(STATUS_SEL, 0, 0, 0x50200114)
        __FIELD(STATUS_N, 0, 0, 0x50200114)
    }
    namespace SM3_SHIFTCTRL{
        __FIELD(FJOIN_RX, 0, 0, 0x50200118)
        __FIELD(FJOIN_TX, 0, 0, 0x50200118)
        __FIELD(PULL_THRESH, 0, 0, 0x50200118)
        __FIELD(PUSH_THRESH, 0, 0, 0x50200118)
        __FIELD(OUT_SHIFTDIR, 0, 0, 0x50200118)
        __FIELD(IN_SHIFTDIR, 0, 0, 0x50200118)
        __FIELD(AUTOPULL, 0, 0, 0x50200118)
        __FIELD(AUTOPUSH, 0, 0, 0x50200118)
    }
    namespace SM3_ADDR{
        __FIELD(SM3_ADDR, 0, 0, 0x5020011c)
    }
    namespace SM3_INSTR{
        __FIELD(SM3_INSTR, 0, 0, 0x50200120)
    }
    namespace SM3_PINCTRL{
        __FIELD(SIDESET_COUNT, 0, 0, 0x50200124)
        __FIELD(SET_COUNT, 0, 0, 0x50200124)
        __FIELD(OUT_COUNT, 0, 0, 0x50200124)
        __FIELD(IN_BASE, 0, 0, 0x50200124)
        __FIELD(SIDESET_BASE, 0, 0, 0x50200124)
        __FIELD(SET_BASE, 0, 0, 0x50200124)
        __FIELD(OUT_BASE, 0, 0, 0x50200124)
    }
    namespace INTR{
        __FIELD(SM3, 0, 0, 0x50200128)
        __FIELD(SM2, 0, 0, 0x50200128)
        __FIELD(SM1, 0, 0, 0x50200128)
        __FIELD(SM0, 0, 0, 0x50200128)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50200128)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50200128)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50200128)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50200128)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50200128)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50200128)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50200128)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50200128)
    }
    namespace IRQ0_INTE{
        __FIELD(SM3, 0, 0, 0x5020012c)
        __FIELD(SM2, 0, 0, 0x5020012c)
        __FIELD(SM1, 0, 0, 0x5020012c)
        __FIELD(SM0, 0, 0, 0x5020012c)
        __FIELD(SM3_TXNFULL, 0, 0, 0x5020012c)
        __FIELD(SM2_TXNFULL, 0, 0, 0x5020012c)
        __FIELD(SM1_TXNFULL, 0, 0, 0x5020012c)
        __FIELD(SM0_TXNFULL, 0, 0, 0x5020012c)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x5020012c)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x5020012c)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x5020012c)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x5020012c)
    }
    namespace IRQ0_INTF{
        __FIELD(SM3, 0, 0, 0x50200130)
        __FIELD(SM2, 0, 0, 0x50200130)
        __FIELD(SM1, 0, 0, 0x50200130)
        __FIELD(SM0, 0, 0, 0x50200130)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50200130)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50200130)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50200130)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50200130)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50200130)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50200130)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50200130)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50200130)
    }
    namespace IRQ0_INTS{
        __FIELD(SM3, 0, 0, 0x50200134)
        __FIELD(SM2, 0, 0, 0x50200134)
        __FIELD(SM1, 0, 0, 0x50200134)
        __FIELD(SM0, 0, 0, 0x50200134)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50200134)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50200134)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50200134)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50200134)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50200134)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50200134)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50200134)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50200134)
    }
    namespace IRQ1_INTE{
        __FIELD(SM3, 0, 0, 0x50200138)
        __FIELD(SM2, 0, 0, 0x50200138)
        __FIELD(SM1, 0, 0, 0x50200138)
        __FIELD(SM0, 0, 0, 0x50200138)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50200138)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50200138)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50200138)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50200138)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50200138)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50200138)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50200138)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50200138)
    }
    namespace IRQ1_INTF{
        __FIELD(SM3, 0, 0, 0x5020013c)
        __FIELD(SM2, 0, 0, 0x5020013c)
        __FIELD(SM1, 0, 0, 0x5020013c)
        __FIELD(SM0, 0, 0, 0x5020013c)
        __FIELD(SM3_TXNFULL, 0, 0, 0x5020013c)
        __FIELD(SM2_TXNFULL, 0, 0, 0x5020013c)
        __FIELD(SM1_TXNFULL, 0, 0, 0x5020013c)
        __FIELD(SM0_TXNFULL, 0, 0, 0x5020013c)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x5020013c)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x5020013c)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x5020013c)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x5020013c)
    }
    namespace IRQ1_INTS{
        __FIELD(SM3, 0, 0, 0x50200140)
        __FIELD(SM2, 0, 0, 0x50200140)
        __FIELD(SM1, 0, 0, 0x50200140)
        __FIELD(SM0, 0, 0, 0x50200140)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50200140)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50200140)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50200140)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50200140)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50200140)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50200140)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50200140)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50200140)
    }
}

namespace PIO1{
    namespace CTRL{
        __FIELD(CLKDIV_RESTART, 0, 0, 0x50300000)
        __FIELD(SM_RESTART, 0, 0, 0x50300000)
        __FIELD(SM_ENABLE, 0, 0, 0x50300000)
    }
    namespace FSTAT{
        __FIELD(TXEMPTY, 0, 0, 0x50300004)
        __FIELD(TXFULL, 0, 0, 0x50300004)
        __FIELD(RXEMPTY, 0, 0, 0x50300004)
        __FIELD(RXFULL, 0, 0, 0x50300004)
    }
    namespace FDEBUG{
        __FIELD(TXSTALL, 0, 0, 0x50300008)
        __FIELD(TXOVER, 0, 0, 0x50300008)
        __FIELD(RXUNDER, 0, 0, 0x50300008)
        __FIELD(RXSTALL, 0, 0, 0x50300008)
    }
    namespace FLEVEL{
        __FIELD(RX3, 0, 0, 0x5030000c)
        __FIELD(TX3, 0, 0, 0x5030000c)
        __FIELD(RX2, 0, 0, 0x5030000c)
        __FIELD(TX2, 0, 0, 0x5030000c)
        __FIELD(RX1, 0, 0, 0x5030000c)
        __FIELD(TX1, 0, 0, 0x5030000c)
        __FIELD(RX0, 0, 0, 0x5030000c)
        __FIELD(TX0, 0, 0, 0x5030000c)
    }
    namespace TXF0{
    }
    namespace TXF1{
    }
    namespace TXF2{
    }
    namespace TXF3{
    }
    namespace RXF0{
    }
    namespace RXF1{
    }
    namespace RXF2{
    }
    namespace RXF3{
    }
    namespace IRQ{
        __FIELD(IRQ, 0, 0, 0x50300030)
    }
    namespace IRQ_FORCE{
        __FIELD(IRQ_FORCE, 0, 0, 0x50300034)
    }
    namespace INPUT_SYNC_BYPASS{
    }
    namespace DBG_PADOUT{
    }
    namespace DBG_PADOE{
    }
    namespace DBG_CFGINFO{
        __FIELD(IMEM_SIZE, 0, 0, 0x50300044)
        __FIELD(SM_COUNT, 0, 0, 0x50300044)
        __FIELD(FIFO_DEPTH, 0, 0, 0x50300044)
    }
    namespace INSTR_MEM0{
        __FIELD(INSTR_MEM0, 0, 0, 0x50300048)
    }
    namespace INSTR_MEM1{
        __FIELD(INSTR_MEM1, 0, 0, 0x5030004c)
    }
    namespace INSTR_MEM2{
        __FIELD(INSTR_MEM2, 0, 0, 0x50300050)
    }
    namespace INSTR_MEM3{
        __FIELD(INSTR_MEM3, 0, 0, 0x50300054)
    }
    namespace INSTR_MEM4{
        __FIELD(INSTR_MEM4, 0, 0, 0x50300058)
    }
    namespace INSTR_MEM5{
        __FIELD(INSTR_MEM5, 0, 0, 0x5030005c)
    }
    namespace INSTR_MEM6{
        __FIELD(INSTR_MEM6, 0, 0, 0x50300060)
    }
    namespace INSTR_MEM7{
        __FIELD(INSTR_MEM7, 0, 0, 0x50300064)
    }
    namespace INSTR_MEM8{
        __FIELD(INSTR_MEM8, 0, 0, 0x50300068)
    }
    namespace INSTR_MEM9{
        __FIELD(INSTR_MEM9, 0, 0, 0x5030006c)
    }
    namespace INSTR_MEM10{
        __FIELD(INSTR_MEM10, 0, 0, 0x50300070)
    }
    namespace INSTR_MEM11{
        __FIELD(INSTR_MEM11, 0, 0, 0x50300074)
    }
    namespace INSTR_MEM12{
        __FIELD(INSTR_MEM12, 0, 0, 0x50300078)
    }
    namespace INSTR_MEM13{
        __FIELD(INSTR_MEM13, 0, 0, 0x5030007c)
    }
    namespace INSTR_MEM14{
        __FIELD(INSTR_MEM14, 0, 0, 0x50300080)
    }
    namespace INSTR_MEM15{
        __FIELD(INSTR_MEM15, 0, 0, 0x50300084)
    }
    namespace INSTR_MEM16{
        __FIELD(INSTR_MEM16, 0, 0, 0x50300088)
    }
    namespace INSTR_MEM17{
        __FIELD(INSTR_MEM17, 0, 0, 0x5030008c)
    }
    namespace INSTR_MEM18{
        __FIELD(INSTR_MEM18, 0, 0, 0x50300090)
    }
    namespace INSTR_MEM19{
        __FIELD(INSTR_MEM19, 0, 0, 0x50300094)
    }
    namespace INSTR_MEM20{
        __FIELD(INSTR_MEM20, 0, 0, 0x50300098)
    }
    namespace INSTR_MEM21{
        __FIELD(INSTR_MEM21, 0, 0, 0x5030009c)
    }
    namespace INSTR_MEM22{
        __FIELD(INSTR_MEM22, 0, 0, 0x503000a0)
    }
    namespace INSTR_MEM23{
        __FIELD(INSTR_MEM23, 0, 0, 0x503000a4)
    }
    namespace INSTR_MEM24{
        __FIELD(INSTR_MEM24, 0, 0, 0x503000a8)
    }
    namespace INSTR_MEM25{
        __FIELD(INSTR_MEM25, 0, 0, 0x503000ac)
    }
    namespace INSTR_MEM26{
        __FIELD(INSTR_MEM26, 0, 0, 0x503000b0)
    }
    namespace INSTR_MEM27{
        __FIELD(INSTR_MEM27, 0, 0, 0x503000b4)
    }
    namespace INSTR_MEM28{
        __FIELD(INSTR_MEM28, 0, 0, 0x503000b8)
    }
    namespace INSTR_MEM29{
        __FIELD(INSTR_MEM29, 0, 0, 0x503000bc)
    }
    namespace INSTR_MEM30{
        __FIELD(INSTR_MEM30, 0, 0, 0x503000c0)
    }
    namespace INSTR_MEM31{
        __FIELD(INSTR_MEM31, 0, 0, 0x503000c4)
    }
    namespace SM0_CLKDIV{
        __FIELD(INT, 0, 0, 0x503000c8)
        __FIELD(FRAC, 0, 0, 0x503000c8)
    }
    namespace SM0_EXECCTRL{
        __FIELD(EXEC_STALLED, 0, 0, 0x503000cc)
        __FIELD(SIDE_EN, 0, 0, 0x503000cc)
        __FIELD(SIDE_PINDIR, 0, 0, 0x503000cc)
        __FIELD(JMP_PIN, 0, 0, 0x503000cc)
        __FIELD(OUT_EN_SEL, 0, 0, 0x503000cc)
        __FIELD(INLINE_OUT_EN, 0, 0, 0x503000cc)
        __FIELD(OUT_STICKY, 0, 0, 0x503000cc)
        __FIELD(WRAP_TOP, 0, 0, 0x503000cc)
        __FIELD(WRAP_BOTTOM, 0, 0, 0x503000cc)
        __FIELD(STATUS_SEL, 0, 0, 0x503000cc)
        __FIELD(STATUS_N, 0, 0, 0x503000cc)
    }
    namespace SM0_SHIFTCTRL{
        __FIELD(FJOIN_RX, 0, 0, 0x503000d0)
        __FIELD(FJOIN_TX, 0, 0, 0x503000d0)
        __FIELD(PULL_THRESH, 0, 0, 0x503000d0)
        __FIELD(PUSH_THRESH, 0, 0, 0x503000d0)
        __FIELD(OUT_SHIFTDIR, 0, 0, 0x503000d0)
        __FIELD(IN_SHIFTDIR, 0, 0, 0x503000d0)
        __FIELD(AUTOPULL, 0, 0, 0x503000d0)
        __FIELD(AUTOPUSH, 0, 0, 0x503000d0)
    }
    namespace SM0_ADDR{
        __FIELD(SM0_ADDR, 0, 0, 0x503000d4)
    }
    namespace SM0_INSTR{
        __FIELD(SM0_INSTR, 0, 0, 0x503000d8)
    }
    namespace SM0_PINCTRL{
        __FIELD(SIDESET_COUNT, 0, 0, 0x503000dc)
        __FIELD(SET_COUNT, 0, 0, 0x503000dc)
        __FIELD(OUT_COUNT, 0, 0, 0x503000dc)
        __FIELD(IN_BASE, 0, 0, 0x503000dc)
        __FIELD(SIDESET_BASE, 0, 0, 0x503000dc)
        __FIELD(SET_BASE, 0, 0, 0x503000dc)
        __FIELD(OUT_BASE, 0, 0, 0x503000dc)
    }
    namespace SM1_CLKDIV{
        __FIELD(INT, 0, 0, 0x503000e0)
        __FIELD(FRAC, 0, 0, 0x503000e0)
    }
    namespace SM1_EXECCTRL{
        __FIELD(EXEC_STALLED, 0, 0, 0x503000e4)
        __FIELD(SIDE_EN, 0, 0, 0x503000e4)
        __FIELD(SIDE_PINDIR, 0, 0, 0x503000e4)
        __FIELD(JMP_PIN, 0, 0, 0x503000e4)
        __FIELD(OUT_EN_SEL, 0, 0, 0x503000e4)
        __FIELD(INLINE_OUT_EN, 0, 0, 0x503000e4)
        __FIELD(OUT_STICKY, 0, 0, 0x503000e4)
        __FIELD(WRAP_TOP, 0, 0, 0x503000e4)
        __FIELD(WRAP_BOTTOM, 0, 0, 0x503000e4)
        __FIELD(STATUS_SEL, 0, 0, 0x503000e4)
        __FIELD(STATUS_N, 0, 0, 0x503000e4)
    }
    namespace SM1_SHIFTCTRL{
        __FIELD(FJOIN_RX, 0, 0, 0x503000e8)
        __FIELD(FJOIN_TX, 0, 0, 0x503000e8)
        __FIELD(PULL_THRESH, 0, 0, 0x503000e8)
        __FIELD(PUSH_THRESH, 0, 0, 0x503000e8)
        __FIELD(OUT_SHIFTDIR, 0, 0, 0x503000e8)
        __FIELD(IN_SHIFTDIR, 0, 0, 0x503000e8)
        __FIELD(AUTOPULL, 0, 0, 0x503000e8)
        __FIELD(AUTOPUSH, 0, 0, 0x503000e8)
    }
    namespace SM1_ADDR{
        __FIELD(SM1_ADDR, 0, 0, 0x503000ec)
    }
    namespace SM1_INSTR{
        __FIELD(SM1_INSTR, 0, 0, 0x503000f0)
    }
    namespace SM1_PINCTRL{
        __FIELD(SIDESET_COUNT, 0, 0, 0x503000f4)
        __FIELD(SET_COUNT, 0, 0, 0x503000f4)
        __FIELD(OUT_COUNT, 0, 0, 0x503000f4)
        __FIELD(IN_BASE, 0, 0, 0x503000f4)
        __FIELD(SIDESET_BASE, 0, 0, 0x503000f4)
        __FIELD(SET_BASE, 0, 0, 0x503000f4)
        __FIELD(OUT_BASE, 0, 0, 0x503000f4)
    }
    namespace SM2_CLKDIV{
        __FIELD(INT, 0, 0, 0x503000f8)
        __FIELD(FRAC, 0, 0, 0x503000f8)
    }
    namespace SM2_EXECCTRL{
        __FIELD(EXEC_STALLED, 0, 0, 0x503000fc)
        __FIELD(SIDE_EN, 0, 0, 0x503000fc)
        __FIELD(SIDE_PINDIR, 0, 0, 0x503000fc)
        __FIELD(JMP_PIN, 0, 0, 0x503000fc)
        __FIELD(OUT_EN_SEL, 0, 0, 0x503000fc)
        __FIELD(INLINE_OUT_EN, 0, 0, 0x503000fc)
        __FIELD(OUT_STICKY, 0, 0, 0x503000fc)
        __FIELD(WRAP_TOP, 0, 0, 0x503000fc)
        __FIELD(WRAP_BOTTOM, 0, 0, 0x503000fc)
        __FIELD(STATUS_SEL, 0, 0, 0x503000fc)
        __FIELD(STATUS_N, 0, 0, 0x503000fc)
    }
    namespace SM2_SHIFTCTRL{
        __FIELD(FJOIN_RX, 0, 0, 0x50300100)
        __FIELD(FJOIN_TX, 0, 0, 0x50300100)
        __FIELD(PULL_THRESH, 0, 0, 0x50300100)
        __FIELD(PUSH_THRESH, 0, 0, 0x50300100)
        __FIELD(OUT_SHIFTDIR, 0, 0, 0x50300100)
        __FIELD(IN_SHIFTDIR, 0, 0, 0x50300100)
        __FIELD(AUTOPULL, 0, 0, 0x50300100)
        __FIELD(AUTOPUSH, 0, 0, 0x50300100)
    }
    namespace SM2_ADDR{
        __FIELD(SM2_ADDR, 0, 0, 0x50300104)
    }
    namespace SM2_INSTR{
        __FIELD(SM2_INSTR, 0, 0, 0x50300108)
    }
    namespace SM2_PINCTRL{
        __FIELD(SIDESET_COUNT, 0, 0, 0x5030010c)
        __FIELD(SET_COUNT, 0, 0, 0x5030010c)
        __FIELD(OUT_COUNT, 0, 0, 0x5030010c)
        __FIELD(IN_BASE, 0, 0, 0x5030010c)
        __FIELD(SIDESET_BASE, 0, 0, 0x5030010c)
        __FIELD(SET_BASE, 0, 0, 0x5030010c)
        __FIELD(OUT_BASE, 0, 0, 0x5030010c)
    }
    namespace SM3_CLKDIV{
        __FIELD(INT, 0, 0, 0x50300110)
        __FIELD(FRAC, 0, 0, 0x50300110)
    }
    namespace SM3_EXECCTRL{
        __FIELD(EXEC_STALLED, 0, 0, 0x50300114)
        __FIELD(SIDE_EN, 0, 0, 0x50300114)
        __FIELD(SIDE_PINDIR, 0, 0, 0x50300114)
        __FIELD(JMP_PIN, 0, 0, 0x50300114)
        __FIELD(OUT_EN_SEL, 0, 0, 0x50300114)
        __FIELD(INLINE_OUT_EN, 0, 0, 0x50300114)
        __FIELD(OUT_STICKY, 0, 0, 0x50300114)
        __FIELD(WRAP_TOP, 0, 0, 0x50300114)
        __FIELD(WRAP_BOTTOM, 0, 0, 0x50300114)
        __FIELD(STATUS_SEL, 0, 0, 0x50300114)
        __FIELD(STATUS_N, 0, 0, 0x50300114)
    }
    namespace SM3_SHIFTCTRL{
        __FIELD(FJOIN_RX, 0, 0, 0x50300118)
        __FIELD(FJOIN_TX, 0, 0, 0x50300118)
        __FIELD(PULL_THRESH, 0, 0, 0x50300118)
        __FIELD(PUSH_THRESH, 0, 0, 0x50300118)
        __FIELD(OUT_SHIFTDIR, 0, 0, 0x50300118)
        __FIELD(IN_SHIFTDIR, 0, 0, 0x50300118)
        __FIELD(AUTOPULL, 0, 0, 0x50300118)
        __FIELD(AUTOPUSH, 0, 0, 0x50300118)
    }
    namespace SM3_ADDR{
        __FIELD(SM3_ADDR, 0, 0, 0x5030011c)
    }
    namespace SM3_INSTR{
        __FIELD(SM3_INSTR, 0, 0, 0x50300120)
    }
    namespace SM3_PINCTRL{
        __FIELD(SIDESET_COUNT, 0, 0, 0x50300124)
        __FIELD(SET_COUNT, 0, 0, 0x50300124)
        __FIELD(OUT_COUNT, 0, 0, 0x50300124)
        __FIELD(IN_BASE, 0, 0, 0x50300124)
        __FIELD(SIDESET_BASE, 0, 0, 0x50300124)
        __FIELD(SET_BASE, 0, 0, 0x50300124)
        __FIELD(OUT_BASE, 0, 0, 0x50300124)
    }
    namespace INTR{
        __FIELD(SM3, 0, 0, 0x50300128)
        __FIELD(SM2, 0, 0, 0x50300128)
        __FIELD(SM1, 0, 0, 0x50300128)
        __FIELD(SM0, 0, 0, 0x50300128)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50300128)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50300128)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50300128)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50300128)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50300128)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50300128)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50300128)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50300128)
    }
    namespace IRQ0_INTE{
        __FIELD(SM3, 0, 0, 0x5030012c)
        __FIELD(SM2, 0, 0, 0x5030012c)
        __FIELD(SM1, 0, 0, 0x5030012c)
        __FIELD(SM0, 0, 0, 0x5030012c)
        __FIELD(SM3_TXNFULL, 0, 0, 0x5030012c)
        __FIELD(SM2_TXNFULL, 0, 0, 0x5030012c)
        __FIELD(SM1_TXNFULL, 0, 0, 0x5030012c)
        __FIELD(SM0_TXNFULL, 0, 0, 0x5030012c)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x5030012c)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x5030012c)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x5030012c)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x5030012c)
    }
    namespace IRQ0_INTF{
        __FIELD(SM3, 0, 0, 0x50300130)
        __FIELD(SM2, 0, 0, 0x50300130)
        __FIELD(SM1, 0, 0, 0x50300130)
        __FIELD(SM0, 0, 0, 0x50300130)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50300130)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50300130)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50300130)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50300130)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50300130)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50300130)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50300130)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50300130)
    }
    namespace IRQ0_INTS{
        __FIELD(SM3, 0, 0, 0x50300134)
        __FIELD(SM2, 0, 0, 0x50300134)
        __FIELD(SM1, 0, 0, 0x50300134)
        __FIELD(SM0, 0, 0, 0x50300134)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50300134)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50300134)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50300134)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50300134)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50300134)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50300134)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50300134)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50300134)
    }
    namespace IRQ1_INTE{
        __FIELD(SM3, 0, 0, 0x50300138)
        __FIELD(SM2, 0, 0, 0x50300138)
        __FIELD(SM1, 0, 0, 0x50300138)
        __FIELD(SM0, 0, 0, 0x50300138)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50300138)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50300138)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50300138)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50300138)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50300138)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50300138)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50300138)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50300138)
    }
    namespace IRQ1_INTF{
        __FIELD(SM3, 0, 0, 0x5030013c)
        __FIELD(SM2, 0, 0, 0x5030013c)
        __FIELD(SM1, 0, 0, 0x5030013c)
        __FIELD(SM0, 0, 0, 0x5030013c)
        __FIELD(SM3_TXNFULL, 0, 0, 0x5030013c)
        __FIELD(SM2_TXNFULL, 0, 0, 0x5030013c)
        __FIELD(SM1_TXNFULL, 0, 0, 0x5030013c)
        __FIELD(SM0_TXNFULL, 0, 0, 0x5030013c)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x5030013c)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x5030013c)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x5030013c)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x5030013c)
    }
    namespace IRQ1_INTS{
        __FIELD(SM3, 0, 0, 0x50300140)
        __FIELD(SM2, 0, 0, 0x50300140)
        __FIELD(SM1, 0, 0, 0x50300140)
        __FIELD(SM0, 0, 0, 0x50300140)
        __FIELD(SM3_TXNFULL, 0, 0, 0x50300140)
        __FIELD(SM2_TXNFULL, 0, 0, 0x50300140)
        __FIELD(SM1_TXNFULL, 0, 0, 0x50300140)
        __FIELD(SM0_TXNFULL, 0, 0, 0x50300140)
        __FIELD(SM3_RXNEMPTY, 0, 0, 0x50300140)
        __FIELD(SM2_RXNEMPTY, 0, 0, 0x50300140)
        __FIELD(SM1_RXNEMPTY, 0, 0, 0x50300140)
        __FIELD(SM0_RXNEMPTY, 0, 0, 0x50300140)
    }
}

namespace SIO{
    namespace CPUID{
    }
    namespace GPIO_IN{
        __FIELD(GPIO_IN, 0, 0, 0xd0000004)
    }
    namespace GPIO_HI_IN{
        __FIELD(GPIO_HI_IN, 0, 0, 0xd0000008)
    }
    namespace GPIO_OUT{
        __FIELD(GPIO_OUT, 0, 0, 0xd0000010)
    }
    namespace GPIO_OUT_SET{
        __FIELD(GPIO_OUT_SET, 0, 0, 0xd0000014)
    }
    namespace GPIO_OUT_CLR{
        __FIELD(GPIO_OUT_CLR, 0, 0, 0xd0000018)
    }
    namespace GPIO_OUT_XOR{
        __FIELD(GPIO_OUT_XOR, 0, 0, 0xd000001c)
    }
    namespace GPIO_OE{
        __FIELD(GPIO_OE, 0, 0, 0xd0000020)
    }
    namespace GPIO_OE_SET{
        __FIELD(GPIO_OE_SET, 0, 0, 0xd0000024)
    }
    namespace GPIO_OE_CLR{
        __FIELD(GPIO_OE_CLR, 0, 0, 0xd0000028)
    }
    namespace GPIO_OE_XOR{
        __FIELD(GPIO_OE_XOR, 0, 0, 0xd000002c)
    }
    namespace GPIO_HI_OUT{
        __FIELD(GPIO_HI_OUT, 0, 0, 0xd0000030)
    }
    namespace GPIO_HI_OUT_SET{
        __FIELD(GPIO_HI_OUT_SET, 0, 0, 0xd0000034)
    }
    namespace GPIO_HI_OUT_CLR{
        __FIELD(GPIO_HI_OUT_CLR, 0, 0, 0xd0000038)
    }
    namespace GPIO_HI_OUT_XOR{
        __FIELD(GPIO_HI_OUT_XOR, 0, 0, 0xd000003c)
    }
    namespace GPIO_HI_OE{
        __FIELD(GPIO_HI_OE, 0, 0, 0xd0000040)
    }
    namespace GPIO_HI_OE_SET{
        __FIELD(GPIO_HI_OE_SET, 0, 0, 0xd0000044)
    }
    namespace GPIO_HI_OE_CLR{
        __FIELD(GPIO_HI_OE_CLR, 0, 0, 0xd0000048)
    }
    namespace GPIO_HI_OE_XOR{
        __FIELD(GPIO_HI_OE_XOR, 0, 0, 0xd000004c)
    }
    namespace FIFO_ST{
        __FIELD(ROE, 0, 0, 0xd0000050)
        __FIELD(WOF, 0, 0, 0xd0000050)
        __FIELD(RDY, 0, 0, 0xd0000050)
        __FIELD(VLD, 0, 0, 0xd0000050)
    }
    namespace FIFO_WR{
    }
    namespace FIFO_RD{
    }
    namespace SPINLOCK_ST{
    }
    namespace DIV_UDIVIDEND{
    }
    namespace DIV_UDIVISOR{
    }
    namespace DIV_SDIVIDEND{
    }
    namespace DIV_SDIVISOR{
    }
    namespace DIV_QUOTIENT{
    }
    namespace DIV_REMAINDER{
    }
    namespace DIV_CSR{
        __FIELD(DIRTY, 0, 0, 0xd0000078)
        __FIELD(READY, 0, 0, 0xd0000078)
    }
    namespace INTERP0_ACCUM0{
    }
    namespace INTERP0_ACCUM1{
    }
    namespace INTERP0_BASE0{
    }
    namespace INTERP0_BASE1{
    }
    namespace INTERP0_BASE2{
    }
    namespace INTERP0_POP_LANE0{
    }
    namespace INTERP0_POP_LANE1{
    }
    namespace INTERP0_POP_FULL{
    }
    namespace INTERP0_PEEK_LANE0{
    }
    namespace INTERP0_PEEK_LANE1{
    }
    namespace INTERP0_PEEK_FULL{
    }
    namespace INTERP0_CTRL_LANE0{
        __FIELD(OVERF, 0, 0, 0xd00000ac)
        __FIELD(OVERF1, 0, 0, 0xd00000ac)
        __FIELD(OVERF0, 0, 0, 0xd00000ac)
        __FIELD(BLEND, 0, 0, 0xd00000ac)
        __FIELD(FORCE_MSB, 0, 0, 0xd00000ac)
        __FIELD(ADD_RAW, 0, 0, 0xd00000ac)
        __FIELD(CROSS_RESULT, 0, 0, 0xd00000ac)
        __FIELD(CROSS_INPUT, 0, 0, 0xd00000ac)
        __FIELD(SIGNED, 0, 0, 0xd00000ac)
        __FIELD(MASK_MSB, 0, 0, 0xd00000ac)
        __FIELD(MASK_LSB, 0, 0, 0xd00000ac)
        __FIELD(SHIFT, 0, 0, 0xd00000ac)
    }
    namespace INTERP0_CTRL_LANE1{
        __FIELD(FORCE_MSB, 0, 0, 0xd00000b0)
        __FIELD(ADD_RAW, 0, 0, 0xd00000b0)
        __FIELD(CROSS_RESULT, 0, 0, 0xd00000b0)
        __FIELD(CROSS_INPUT, 0, 0, 0xd00000b0)
        __FIELD(SIGNED, 0, 0, 0xd00000b0)
        __FIELD(MASK_MSB, 0, 0, 0xd00000b0)
        __FIELD(MASK_LSB, 0, 0, 0xd00000b0)
        __FIELD(SHIFT, 0, 0, 0xd00000b0)
    }
    namespace INTERP0_ACCUM0_ADD{
        __FIELD(INTERP0_ACCUM0_ADD, 0, 0, 0xd00000b4)
    }
    namespace INTERP0_ACCUM1_ADD{
        __FIELD(INTERP0_ACCUM1_ADD, 0, 0, 0xd00000b8)
    }
    namespace INTERP0_BASE_1AND0{
    }
    namespace INTERP1_ACCUM0{
    }
    namespace INTERP1_ACCUM1{
    }
    namespace INTERP1_BASE0{
    }
    namespace INTERP1_BASE1{
    }
    namespace INTERP1_BASE2{
    }
    namespace INTERP1_POP_LANE0{
    }
    namespace INTERP1_POP_LANE1{
    }
    namespace INTERP1_POP_FULL{
    }
    namespace INTERP1_PEEK_LANE0{
    }
    namespace INTERP1_PEEK_LANE1{
    }
    namespace INTERP1_PEEK_FULL{
    }
    namespace INTERP1_CTRL_LANE0{
        __FIELD(OVERF, 0, 0, 0xd00000ec)
        __FIELD(OVERF1, 0, 0, 0xd00000ec)
        __FIELD(OVERF0, 0, 0, 0xd00000ec)
        __FIELD(CLAMP, 0, 0, 0xd00000ec)
        __FIELD(FORCE_MSB, 0, 0, 0xd00000ec)
        __FIELD(ADD_RAW, 0, 0, 0xd00000ec)
        __FIELD(CROSS_RESULT, 0, 0, 0xd00000ec)
        __FIELD(CROSS_INPUT, 0, 0, 0xd00000ec)
        __FIELD(SIGNED, 0, 0, 0xd00000ec)
        __FIELD(MASK_MSB, 0, 0, 0xd00000ec)
        __FIELD(MASK_LSB, 0, 0, 0xd00000ec)
        __FIELD(SHIFT, 0, 0, 0xd00000ec)
    }
    namespace INTERP1_CTRL_LANE1{
        __FIELD(FORCE_MSB, 0, 0, 0xd00000f0)
        __FIELD(ADD_RAW, 0, 0, 0xd00000f0)
        __FIELD(CROSS_RESULT, 0, 0, 0xd00000f0)
        __FIELD(CROSS_INPUT, 0, 0, 0xd00000f0)
        __FIELD(SIGNED, 0, 0, 0xd00000f0)
        __FIELD(MASK_MSB, 0, 0, 0xd00000f0)
        __FIELD(MASK_LSB, 0, 0, 0xd00000f0)
        __FIELD(SHIFT, 0, 0, 0xd00000f0)
    }
    namespace INTERP1_ACCUM0_ADD{
        __FIELD(INTERP1_ACCUM0_ADD, 0, 0, 0xd00000f4)
    }
    namespace INTERP1_ACCUM1_ADD{
        __FIELD(INTERP1_ACCUM1_ADD, 0, 0, 0xd00000f8)
    }
    namespace INTERP1_BASE_1AND0{
    }
    namespace SPINLOCK0{
    }
    namespace SPINLOCK1{
    }
    namespace SPINLOCK2{
    }
    namespace SPINLOCK3{
    }
    namespace SPINLOCK4{
    }
    namespace SPINLOCK5{
    }
    namespace SPINLOCK6{
    }
    namespace SPINLOCK7{
    }
    namespace SPINLOCK8{
    }
    namespace SPINLOCK9{
    }
    namespace SPINLOCK10{
    }
    namespace SPINLOCK11{
    }
    namespace SPINLOCK12{
    }
    namespace SPINLOCK13{
    }
    namespace SPINLOCK14{
    }
    namespace SPINLOCK15{
    }
    namespace SPINLOCK16{
    }
    namespace SPINLOCK17{
    }
    namespace SPINLOCK18{
    }
    namespace SPINLOCK19{
    }
    namespace SPINLOCK20{
    }
    namespace SPINLOCK21{
    }
    namespace SPINLOCK22{
    }
    namespace SPINLOCK23{
    }
    namespace SPINLOCK24{
    }
    namespace SPINLOCK25{
    }
    namespace SPINLOCK26{
    }
    namespace SPINLOCK27{
    }
    namespace SPINLOCK28{
    }
    namespace SPINLOCK29{
    }
    namespace SPINLOCK30{
    }
    namespace SPINLOCK31{
    }
}

namespace PPB{
    namespace SYST_CSR{
        __FIELD(COUNTFLAG, 0, 0, 0xe000e010)
        __FIELD(CLKSOURCE, 0, 0, 0xe000e010)
        __FIELD(TICKINT, 0, 0, 0xe000e010)
        __FIELD(ENABLE, 0, 0, 0xe000e010)
    }
    namespace SYST_RVR{
        __FIELD(RELOAD, 0, 0, 0xe000e014)
    }
    namespace SYST_CVR{
        __FIELD(CURRENT, 0, 0, 0xe000e018)
    }
    namespace SYST_CALIB{
        __FIELD(NOREF, 0, 0, 0xe000e01c)
        __FIELD(SKEW, 0, 0, 0xe000e01c)
        __FIELD(TENMS, 0, 0, 0xe000e01c)
    }
    namespace NVIC_ISER{
        __FIELD(SETENA, 0, 0, 0xe000e100)
    }
    namespace NVIC_ICER{
        __FIELD(CLRENA, 0, 0, 0xe000e180)
    }
    namespace NVIC_ISPR{
        __FIELD(SETPEND, 0, 0, 0xe000e200)
    }
    namespace NVIC_ICPR{
        __FIELD(CLRPEND, 0, 0, 0xe000e280)
    }
    namespace NVIC_IPR0{
        __FIELD(IP_3, 0, 0, 0xe000e400)
        __FIELD(IP_2, 0, 0, 0xe000e400)
        __FIELD(IP_1, 0, 0, 0xe000e400)
        __FIELD(IP_0, 0, 0, 0xe000e400)
    }
    namespace NVIC_IPR1{
        __FIELD(IP_7, 0, 0, 0xe000e404)
        __FIELD(IP_6, 0, 0, 0xe000e404)
        __FIELD(IP_5, 0, 0, 0xe000e404)
        __FIELD(IP_4, 0, 0, 0xe000e404)
    }
    namespace NVIC_IPR2{
        __FIELD(IP_11, 0, 0, 0xe000e408)
        __FIELD(IP_10, 0, 0, 0xe000e408)
        __FIELD(IP_9, 0, 0, 0xe000e408)
        __FIELD(IP_8, 0, 0, 0xe000e408)
    }
    namespace NVIC_IPR3{
        __FIELD(IP_15, 0, 0, 0xe000e40c)
        __FIELD(IP_14, 0, 0, 0xe000e40c)
        __FIELD(IP_13, 0, 0, 0xe000e40c)
        __FIELD(IP_12, 0, 0, 0xe000e40c)
    }
    namespace NVIC_IPR4{
        __FIELD(IP_19, 0, 0, 0xe000e410)
        __FIELD(IP_18, 0, 0, 0xe000e410)
        __FIELD(IP_17, 0, 0, 0xe000e410)
        __FIELD(IP_16, 0, 0, 0xe000e410)
    }
    namespace NVIC_IPR5{
        __FIELD(IP_23, 0, 0, 0xe000e414)
        __FIELD(IP_22, 0, 0, 0xe000e414)
        __FIELD(IP_21, 0, 0, 0xe000e414)
        __FIELD(IP_20, 0, 0, 0xe000e414)
    }
    namespace NVIC_IPR6{
        __FIELD(IP_27, 0, 0, 0xe000e418)
        __FIELD(IP_26, 0, 0, 0xe000e418)
        __FIELD(IP_25, 0, 0, 0xe000e418)
        __FIELD(IP_24, 0, 0, 0xe000e418)
    }
    namespace NVIC_IPR7{
        __FIELD(IP_31, 0, 0, 0xe000e41c)
        __FIELD(IP_30, 0, 0, 0xe000e41c)
        __FIELD(IP_29, 0, 0, 0xe000e41c)
        __FIELD(IP_28, 0, 0, 0xe000e41c)
    }
    namespace CPUID{
        __FIELD(IMPLEMENTER, 0, 0, 0xe000ed00)
        __FIELD(VARIANT, 0, 0, 0xe000ed00)
        __FIELD(ARCHITECTURE, 0, 0, 0xe000ed00)
        __FIELD(PARTNO, 0, 0, 0xe000ed00)
        __FIELD(REVISION, 0, 0, 0xe000ed00)
    }
    namespace ICSR{
        __FIELD(NMIPENDSET, 0, 0, 0xe000ed04)
        __FIELD(PENDSVSET, 0, 0, 0xe000ed04)
        __FIELD(PENDSVCLR, 0, 0, 0xe000ed04)
        __FIELD(PENDSTSET, 0, 0, 0xe000ed04)
        __FIELD(PENDSTCLR, 0, 0, 0xe000ed04)
        __FIELD(ISRPREEMPT, 0, 0, 0xe000ed04)
        __FIELD(ISRPENDING, 0, 0, 0xe000ed04)
        __FIELD(VECTPENDING, 0, 0, 0xe000ed04)
        __FIELD(VECTACTIVE, 0, 0, 0xe000ed04)
    }
    namespace VTOR{
        __FIELD(TBLOFF, 0, 0, 0xe000ed08)
    }
    namespace AIRCR{
        __FIELD(VECTKEY, 0, 0, 0xe000ed0c)
        __FIELD(ENDIANESS, 0, 0, 0xe000ed0c)
        __FIELD(SYSRESETREQ, 0, 0, 0xe000ed0c)
        __FIELD(VECTCLRACTIVE, 0, 0, 0xe000ed0c)
    }
    namespace SCR{
        __FIELD(SEVONPEND, 0, 0, 0xe000ed10)
        __FIELD(SLEEPDEEP, 0, 0, 0xe000ed10)
        __FIELD(SLEEPONEXIT, 0, 0, 0xe000ed10)
    }
    namespace CCR{
        __FIELD(STKALIGN, 0, 0, 0xe000ed14)
        __FIELD(UNALIGN_TRP, 0, 0, 0xe000ed14)
    }
    namespace SHPR2{
        __FIELD(PRI_11, 0, 0, 0xe000ed1c)
    }
    namespace SHPR3{
        __FIELD(PRI_15, 0, 0, 0xe000ed20)
        __FIELD(PRI_14, 0, 0, 0xe000ed20)
    }
    namespace SHCSR{
        __FIELD(SVCALLPENDED, 0, 0, 0xe000ed24)
    }
    namespace MPU_TYPE{
        __FIELD(IREGION, 0, 0, 0xe000ed90)
        __FIELD(DREGION, 0, 0, 0xe000ed90)
        __FIELD(SEPARATE, 0, 0, 0xe000ed90)
    }
    namespace MPU_CTRL{
        __FIELD(PRIVDEFENA, 0, 0, 0xe000ed94)
        __FIELD(HFNMIENA, 0, 0, 0xe000ed94)
        __FIELD(ENABLE, 0, 0, 0xe000ed94)
    }
    namespace MPU_RNR{
        __FIELD(REGION, 0, 0, 0xe000ed98)
    }
    namespace MPU_RBAR{
        __FIELD(ADDR, 0, 0, 0xe000ed9c)
        __FIELD(VALID, 0, 0, 0xe000ed9c)
        __FIELD(REGION, 0, 0, 0xe000ed9c)
    }
    namespace MPU_RASR{
        __FIELD(ATTRS, 0, 0, 0xe000eda0)
        __FIELD(SRD, 0, 0, 0xe000eda0)
        __FIELD(SIZE, 0, 0, 0xe000eda0)
        __FIELD(ENABLE, 0, 0, 0xe000eda0)
    }
}

template<class FIELD>
constexpr inline void set(){
    *FIELD::address() |= 1 << FIELD::bitOffset();
}

template<class FIELD, unsigned int VAL>
constexpr inline void set(){
    static_assert(VAL & (FIELD::bitMask() >> FIELD::bitOffset()), "Value is too big");
    *FIELD::address() = *FIELD::address() & ~FIELD::bitMask() | VAL << FIELD::bitOffset();
}

template<class FIELD>
constexpr inline void reset(){
    *FIELD::address() &= ~(1 << FIELD::bitOffset());
}

template<class FIELD>
constexpr inline unsigned int read(){
    return (*FIELD::address() & FIELD::bitMask()) >> FIELD::bitOffset();
}


