/* kernel.lds
 * Basic Linker Script
 *
 * 0x00000000 - 0x07ffffff - aliased to flash or sys memory depending on BOOT jumpers
 * 0x08000000 - 0x08080000 - Flash (64K ... or 128K)
 * 0x1ffff000 - 0x1ffff7ff - Boot firmware in system memory
 * 0x1ffff800 - 0x1fffffff - option bytes
 * 0x20000000 - 0x20018000 - SRAM (96k)
 * 0x40000000 - 0x40023400 - peripherals
 */

MEMORY
{
    FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 512K
    SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 96K
}

SECTIONS
{
    /* Text and interrupt vector table.*/
    .text :
    {
        _ivt_start = .;
        KEEP(*(.ivt))
        _ivt_end = .;
        _stext = .;
        *(.text*)
        _etext = .;
    } > FLASH

    .rodata :
    {
        /* Ensures that app data is 16kb aligned */
        . = ALIGN(16*1024);
        _srodata = .;
        *(.rodata*)
    } > FLASH

    . = ALIGN(1*1024);
    _erodata = .;

    .data : AT (_erodata)
    {
        __data_start__ = .;
        _sdata = __data_start__;
        *(.data*)
        __data_end__ = .;
        _edata = __data_end__;
    } > SRAM

    .bss ALIGN(1024) :
    {
        __bss_start__ = .;
        _sbss = __bss_start__;
        *(.bss*) *(COMMON)
        . = ALIGN(1*1024);
        __bss_end__ = .;
        _ebss = __bss_end__;
    } > SRAM

    /* Variables ld will declare for the start routine */
    _bss_size = ((_ebss) - (_sbss));
    _data_size = ((_edata) - (_sdata));

    __stack_top = ORIGIN(SRAM) + LENGTH(SRAM);

    __end__ = .;
    end = __end__;
}
