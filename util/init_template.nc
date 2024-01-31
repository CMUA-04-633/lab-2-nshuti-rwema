reset halt
flash write_image erase build/bin/<template>.bin 0x08000000
exit

